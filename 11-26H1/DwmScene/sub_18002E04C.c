/*
 * XREFs of sub_18002E04C @ 0x18002E04C
 * Callers:
 *     sub_180035694 @ 0x180035694 (sub_180035694.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180011B74 @ 0x180011B74 (sub_180011B74.c)
 *     sub_180011EBC @ 0x180011EBC (sub_180011EBC.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_1800127CC @ 0x1800127CC (sub_1800127CC.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 */

_QWORD *__fastcall sub_18002E04C(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-40h]
  _QWORD *v19; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_180012790(a1, v6 + 1);
  v10 = sub_180011B48(v9);
  v17[0] = a1;
  v17[2] = v9;
  v11 = sub_180011790(v10);
  v12 = (_QWORD *)(((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL) + v11);
  v19 = v12 + 2;
  sub_1800162D0(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v18 = v12;
  if ( a2 != v13 )
  {
    sub_180011B74(v15, a2, v11);
    v13 = a1[1];
    v14 = (__int64)(v12 + 2);
    v15 = a2;
    v18 = (_QWORD *)v11;
  }
  sub_180011B74(v15, v13, v14);
  v17[1] = 0LL;
  sub_1800127CC((__int64)a1, v11, v8, v9);
  sub_180011EBC((__int64)v17);
  return v12;
}
