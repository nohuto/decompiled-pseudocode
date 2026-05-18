/*
 * XREFs of sub_1800277FC @ 0x1800277FC
 * Callers:
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_180046AD0 @ 0x180046AD0 (sub_180046AD0.c)
 *     sub_1800C5D7C @ 0x1800C5D7C (sub_1800C5D7C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180027978 @ 0x180027978 (sub_180027978.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800277FC(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned int v8; // r11d
  char v9; // cl
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF
  unsigned int *v18; // [rsp+98h] [rbp+38h] BYREF

  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  v16 = (unsigned __int64)v6;
  v7 = v5;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v16 = v6;
      if ( *(_DWORD *)(v6 + 32) >= v8 )
      {
        v9 = 0;
        DWORD2(v16) = 1;
        v7 = v6;
      }
      else
      {
        v9 = 1;
        DWORD2(v16) = 0;
      }
      v10 = (__int64 *)(v6 + 16);
      if ( !v9 )
        v10 = (__int64 *)v6;
      v6 = *v10;
    }
    while ( !*(_BYTE *)(*v10 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || *a3 < *(_DWORD *)(v7 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001DF68();
    v18 = a3;
    v17 = v5;
    *(_QWORD *)&v15 = a1;
    v11 = sub_180011790(0x38uLL);
    sub_180027978(v12, v11 + 32, v13, &v18);
    sub_180013074((__int64 *)v11, &v17);
    sub_180013074((__int64 *)(v11 + 8), &v17);
    sub_180013074((__int64 *)(v11 + 16), &v17);
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v15 + 1) = 0LL;
    sub_180027B50(&v15);
    v15 = v16;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v15, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
