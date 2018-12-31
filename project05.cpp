/*
练习3.20

要求1：
读入一组整数，并存放入一个vector对象中
将每对相邻整数的和输出

要求2：
先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推

注意：decltype在C++11标准制定时引入

完成时间：2018.12.31
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vInt;
    int iVal;

    cout << "请输入一组数字：" << endl;
    while (cin >> iVal)
        vInt.push_back(iVal);
    if (vInt.size() == 0)
    { 
        cout << "没有任何元素" << endl;
        return -1;
    }
    cout << "相邻两数之和分别为：" << endl;


    // 利用decltype推断i的类型
    for (decltype(vInt.size()) i = 0; i < vInt.size() - 1; i += 2)
    {
        cout << vInt[i] + vInt[i + 1] << " ";

        if ((i + 2) % 10 == 0)
            cout << endl;
    }
    if (vInt.size() % 2 != 0)
        cout << vInt[vInt.size() - 1];

    return 0;

        
    
}