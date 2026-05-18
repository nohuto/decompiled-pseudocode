/*
 * XREFs of sub_1800119CC @ 0x1800119CC
 * Callers:
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180016D44 @ 0x180016D44 (sub_180016D44.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_180016F1C @ 0x180016F1C (sub_180016F1C.c)
 *     sub_1800248CC @ 0x1800248CC (sub_1800248CC.c)
 *     sub_180024B24 @ 0x180024B24 (sub_180024B24.c)
 *     sub_180042378 @ 0x180042378 (sub_180042378.c)
 *     sub_180045EBC @ 0x180045EBC (sub_180045EBC.c)
 *     sub_180045FCC @ 0x180045FCC (sub_180045FCC.c)
 *     sub_18004B7F4 @ 0x18004B7F4 (sub_18004B7F4.c)
 *     sub_18004B8C0 @ 0x18004B8C0 (sub_18004B8C0.c)
 *     sub_18004B98C @ 0x18004B98C (sub_18004B98C.c)
 *     sub_18004BA58 @ 0x18004BA58 (sub_18004BA58.c)
 *     sub_18004BB24 @ 0x18004BB24 (sub_18004BB24.c)
 *     sub_18005BE04 @ 0x18005BE04 (sub_18005BE04.c)
 *     sub_18007D290 @ 0x18007D290 (sub_18007D290.c)
 *     sub_18007F854 @ 0x18007F854 (sub_18007F854.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180011B74 @ 0x180011B74 (sub_180011B74.c)
 *     sub_180011EBC @ 0x180011EBC (sub_180011EBC.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_1800127CC @ 0x1800127CC (sub_1800127CC.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 */

_QWORD *__fastcall sub_1800119CC(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h]
  _QWORD *v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h]

  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_180012790(a1, v6 + 1);
  v10 = sub_180011B48(v9);
  v11 = sub_180011790(v10);
  v18 = a1;
  v19 = v9;
  v12 = (_QWORD *)(v11 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v13 = v11;
  v20 = v12;
  v14 = (_QWORD *)v11;
  *v12 = 0LL;
  v12[1] = 0LL;
  *v12 = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v15 = a1[1];
  v16 = *a1;
  v21 = v12 + 2;
  if ( a2 != v15 )
  {
    sub_180011B74(v16, a2, v11);
    v15 = a1[1];
    v14 = v12 + 2;
    v16 = a2;
    v20 = (_QWORD *)v13;
  }
  sub_180011B74(v16, v15, v14);
  sub_1800127CC(a1, v13, v8, v9, v18, 0LL, v19, v20, v21);
  sub_180011EBC(&v18);
  return v12;
}
