/*
 * XREFs of sub_180054910 @ 0x180054910
 * Callers:
 *     sub_180054E00 @ 0x180054E00 (sub_180054E00.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_18002EB04 @ 0x18002EB04 (sub_18002EB04.c)
 *     sub_180054A1C @ 0x180054A1C (sub_180054A1C.c)
 *     sub_180054C64 @ 0x180054C64 (sub_180054C64.c)
 */

__int64 __fastcall sub_180054910(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+98h] [rbp+28h] BYREF

  sub_18002EB04(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *(_QWORD *)(v5 + 8) < *(_QWORD *)(v13 + 40) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DF68();
    v10 = v5;
    v14 = *a1;
    v11 = (unsigned __int64)a1;
    v6 = sub_180011790(0x48uLL);
    sub_180054A1C(v7, v6 + 32, v8, &v10);
    sub_180013074((__int64 *)v6, &v14);
    sub_180013074((__int64 *)(v6 + 8), &v14);
    sub_180013074((__int64 *)(v6 + 16), &v14);
    *(_WORD *)(v6 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180054C64(&v11);
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
