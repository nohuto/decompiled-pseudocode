/*
 * XREFs of sub_14006DF80 @ 0x14006DF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400464F4 @ 0x1400464F4 (sub_1400464F4.c)
 *     sub_14006A694 @ 0x14006A694 (sub_14006A694.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006DF80(_QWORD *a1, int a2, __int64 a3, __int64 *a4)
{
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // edx
  __int64 *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19[2]; // [rsp+28h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v19[0] = 0LL;
  v6 = a2 - 1;
  if ( !v6 )
  {
    v10 = a1 + 15;
    if ( !a1[15] )
    {
      v18 = 0LL;
      v12 = a1[10];
      if ( v12 )
      {
        v13 = sub_14006A694(v12, &v18);
        if ( v13 < 0 )
          sub_140007934((int)retaddr, 222, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v13);
      }
      v14 = *v10;
      *v10 = 0LL;
      if ( v14 )
        sub_1400B6010(v14);
      v15 = sub_1400B6010(a3);
      v7 = v15;
      if ( v15 < 0 )
      {
        sub_14000C2A8((int)retaddr, 224, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v15);
        sub_140003238(&v18);
        goto LABEL_18;
      }
      sub_140003238(&v18);
    }
    goto LABEL_17;
  }
  if ( v6 == 3 )
  {
    v10 = a1 + 16;
    if ( !a1[16] )
    {
      *v10 = 0LL;
      v11 = sub_1400B6010(a3);
      v7 = v11;
      if ( v11 < 0 )
      {
        v8 = v11;
        v9 = 234;
        goto LABEL_7;
      }
    }
LABEL_17:
    sub_1400464F4(v19, v10);
    v16 = v19[0];
    v19[0] = 0LL;
    *a4 = v16;
    v7 = 0;
    goto LABEL_18;
  }
  v7 = -2147467263;
  v8 = -2147467263;
  v9 = 240;
LABEL_7:
  sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v8);
LABEL_18:
  sub_140003238(v19);
  return v7;
}
