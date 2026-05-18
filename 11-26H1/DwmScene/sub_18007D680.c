/*
 * XREFs of sub_18007D680 @ 0x18007D680
 * Callers:
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 *     sub_18007E080 @ 0x18007E080 (sub_18007E080.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_180028E60 @ 0x180028E60 (sub_180028E60.c)
 *     sub_18007D86C @ 0x18007D86C (sub_18007D86C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007D680(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned int v8; // r11d
  char v9; // cl
  __int64 *v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  unsigned int *v19; // [rsp+98h] [rbp+38h] BYREF

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
      if ( *(_DWORD *)(v6 + 28) >= v8 )
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
  if ( *(_BYTE *)(v7 + 25) || *a3 < *(_DWORD *)(v7 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001DF68();
    v19 = a3;
    v18 = v5;
    *(_QWORD *)&v16 = a1;
    v11 = sub_180028BA0(1uLL);
    v12 = sub_180011790(v11);
    sub_18007D86C(v13, v12 + 28, v14, &v19);
    sub_180013074((__int64 *)v12, &v18);
    sub_180013074((__int64 *)(v12 + 8), &v18);
    sub_180013074((__int64 *)(v12 + 16), &v18);
    *(_WORD *)(v12 + 24) = 0;
    *((_QWORD *)&v16 + 1) = 0LL;
    sub_180028E60((__int64)&v16);
    v16 = v17;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v16, v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
