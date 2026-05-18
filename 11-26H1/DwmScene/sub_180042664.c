/*
 * XREFs of sub_180042664 @ 0x180042664
 * Callers:
 *     sub_1800437B0 @ 0x1800437B0 (sub_1800437B0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_180028E60 @ 0x180028E60 (sub_180028E60.c)
 *     sub_180042610 @ 0x180042610 (sub_180042610.c)
 *     sub_180042778 @ 0x180042778 (sub_180042778.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180042664(__int64 *a1, __int64 a2, _WORD *a3)
{
  _WORD *v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  _WORD *v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+28h] BYREF

  sub_180042610(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_WORD *)(v14 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001DF68();
    v11 = v5;
    v15 = *a1;
    v12 = (unsigned __int64)a1;
    v6 = sub_180028BA0(1uLL);
    v7 = sub_180011790(v6);
    sub_180042778(v8, v7 + 28, v9, &v11);
    sub_180013074((__int64 *)v7, &v15);
    sub_180013074((__int64 *)(v7 + 8), &v15);
    sub_180013074((__int64 *)(v7 + 16), &v15);
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_180028E60((__int64)&v12);
    v12 = v13;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v12, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
