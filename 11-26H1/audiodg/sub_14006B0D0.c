/*
 * XREFs of sub_14006B0D0 @ 0x14006B0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140048404 @ 0x140048404 (sub_140048404.c)
 *     sub_140060040 @ 0x140060040 (sub_140060040.c)
 *     sub_140060664 @ 0x140060664 (sub_140060664.c)
 *     sub_14006B3B0 @ 0x14006B3B0 (sub_14006B3B0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_14006B0D0(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // r14d
  int v16; // edi
  __int64 v17; // rsi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  __int64 v22; // [rsp+58h] [rbp-41h] BYREF
  __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  int v24; // [rsp+68h] [rbp-31h] BYREF
  int v25; // [rsp+70h] [rbp-29h] BYREF
  int v26; // [rsp+78h] [rbp-21h] BYREF
  __int64 v27; // [rsp+80h] [rbp-19h] BYREF
  __int64 v28; // [rsp+88h] [rbp-11h] BYREF
  __int64 v29; // [rsp+90h] [rbp-9h] BYREF
  __int64 v30; // [rsp+98h] [rbp-1h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+37h]

  v30 = 0LL;
  v11 = sub_14006B3B0(a1, a2, a3, a4, a5, a6, (__int64)a7, a8, a9);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v23 = 0LL;
    v13 = sub_140060040(*(_QWORD *)(a2 + 304), &v23);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v22 = 0LL;
      v14 = v23;
      v15 = sub_1400B6010(v23);
      v16 = *(_DWORD *)(a2 + 312);
      v17 = *a7;
      v24 = a5;
      v25 = v15;
      v26 = v16;
      v27 = a9;
      v28 = v17;
      v29 = a3;
      v22 = 0LL;
      v18 = sub_140060664(&v22, &v29, &v28, &v27, &v26, &v25, &v24);
      v19 = v18;
      if ( v18 < 0 )
      {
        sub_14000C2A8((int)retaddr, 221, (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp", v18);
        sub_14000C2A8((int)retaddr, 1034, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v19);
        sub_140003238(&v22);
        sub_140003238(&v23);
        v12 = v19;
        goto LABEL_11;
      }
      v20 = sub_1400B6010(v14);
      v12 = v20;
      if ( v20 >= 0 )
      {
        sub_140003238(&v22);
        sub_140003238(&v23);
        v12 = 0;
        goto LABEL_11;
      }
      sub_14000C2A8((int)retaddr, 1037, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v20);
      sub_140003238(&v22);
    }
    else
    {
      sub_14000C2A8((int)retaddr, 1029, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v13);
    }
    sub_140003238(&v23);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 1025, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v11);
  }
LABEL_11:
  sub_140048404(&v30);
  return v12;
}
