/*
 * XREFs of sub_18004C300 @ 0x18004C300
 * Callers:
 *     sub_18004E514 @ 0x18004E514 (sub_18004E514.c)
 *     sub_18005DAB4 @ 0x18005DAB4 (sub_18005DAB4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011AF4 @ 0x180011AF4 (sub_180011AF4.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_18002FBD8 @ 0x18002FBD8 (sub_18002FBD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004C300(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+98h] [rbp+28h] BYREF

  sub_180011AF4(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001DF68();
    v10 = v5;
    v14 = *a1;
    v11 = (unsigned __int64)a1;
    v6 = sub_180011790(0x38uLL);
    sub_18002FBD8(v7, (_QWORD *)(v6 + 32), v8, &v10);
    sub_180013074((__int64 *)v6, &v14);
    sub_180013074((__int64 *)(v6 + 8), &v14);
    sub_180013074((__int64 *)(v6 + 16), &v14);
    *(_WORD *)(v6 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180027B50((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v11, v6);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
