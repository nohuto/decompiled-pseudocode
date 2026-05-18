/*
 * XREFs of sub_1800D20B4 @ 0x1800D20B4
 * Callers:
 *     sub_1800D2D30 @ 0x1800D2D30 (sub_1800D2D30.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180050BD8 @ 0x180050BD8 (sub_180050BD8.c)
 *     sub_1800D2558 @ 0x1800D2558 (sub_1800D2558.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D20B4(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  char v9; // cl
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  _DWORD *v19; // [rsp+98h] [rbp+38h] BYREF

  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  v17 = (unsigned __int64)v6;
  v7 = v5;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v17 = v6;
      if ( *(_DWORD *)(v6 + 32) >= v8 )
      {
        v9 = 0;
        DWORD2(v17) = 1;
        v7 = v6;
      }
      else
      {
        v9 = 1;
        DWORD2(v17) = 0;
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
    if ( a1[1] == 0x276276276276276LL )
      sub_18001DF68();
    v19 = a3;
    v18 = v5;
    *(_QWORD *)&v16 = a1;
    v11 = sub_180011790(0x68uLL);
    sub_1800D2558(v12, v11 + 32, v13, &v19);
    sub_180013074((__int64 *)v11, &v18);
    sub_180013074((__int64 *)(v11 + 8), &v18);
    sub_180013074((__int64 *)(v11 + 16), &v18);
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v16 + 1) = 0LL;
    sub_180050BD8((__int64)&v16, v14);
    v16 = v17;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v16, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
