/*
 * XREFs of sub_14004392C @ 0x14004392C
 * Callers:
 *     sub_140069ABC @ 0x140069ABC (sub_140069ABC.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140040498 @ 0x140040498 (sub_140040498.c)
 *     sub_140048404 @ 0x140048404 (sub_140048404.c)
 *     sub_1400484A8 @ 0x1400484A8 (sub_1400484A8.c)
 *     sub_140067768 @ 0x140067768 (sub_140067768.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_14004392C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v7; // ebx
  int v9; // r14d
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  _QWORD *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-20h] BYREF
  char v26; // [rsp+70h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]
  int v28; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+40h] BYREF

  v7 = a2;
  v21 = 0LL;
  sub_1400B6010(a2);
  v20 = 0LL;
  v25[0] = &v20;
  v25[1] = 0LL;
  v26 = 1;
  v9 = a5;
  v10 = sub_140067768(v7, *(_QWORD *)(a3 + 24), *(_QWORD *)(a1 + 48), a5);
  sub_1400484A8(v25);
  if ( v10 >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    v23 = a4;
    v28 = v9;
    v22 = v12;
    v24 = (_DWORD *)a3;
    v29 = 0LL;
    v13 = sub_140040498(&v29, v11, &v24, &v23, &v22, &v28);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v30 = 0LL;
      v14 = sub_1400B6010(*v20);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v19 = 0LL;
        v15 = sub_1400B6010(v30);
        v10 = v15;
        if ( v15 >= 0 )
        {
          v15 = sub_1400B6010(v19);
          v10 = v15;
          if ( v15 >= 0 )
          {
            v17 = v20;
            v20 = 0LL;
            *(_QWORD *)(a1 + 32) = v17;
            sub_140003238(&v19);
            sub_140003238(&v30);
            sub_140003238(&v29);
            v10 = 0;
            goto LABEL_15;
          }
          v16 = 905;
        }
        else
        {
          v16 = 902;
        }
        sub_14000C2A8((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v15);
        sub_140003238(&v19);
      }
      else
      {
        sub_14000C2A8((int)retaddr, 899, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v14);
      }
      sub_140003238(&v30);
    }
    else
    {
      sub_14000C2A8((int)retaddr, 189, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v13);
      sub_14000C2A8((int)retaddr, 896, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v10);
    }
    sub_140003238(&v29);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 892, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v10);
  }
LABEL_15:
  sub_140048404(&v20);
  sub_140003238(&v21);
  return (unsigned int)v10;
}
