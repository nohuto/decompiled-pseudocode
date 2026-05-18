/*
 * XREFs of sub_18008BC50 @ 0x18008BC50
 * Callers:
 *     sub_18008BB60 @ 0x18008BB60 (sub_18008BB60.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180013374 @ 0x180013374 (sub_180013374.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180014048 @ 0x180014048 (sub_180014048.c)
 */

_QWORD *__fastcall sub_18008BC50(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-40h]
  _QWORD *v20; // [rsp+40h] [rbp-38h]

  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_180012790(a1, v6 + 1);
  v10 = sub_180011B48(v9);
  v11 = (_QWORD *)sub_180011790(v10);
  v18[0] = a1;
  v18[2] = v9;
  v12 = (_QWORD *)((char *)v11 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v13 = (__int64)v11;
  v19 = v12;
  v14 = v11;
  *v12 = 0LL;
  v12[1] = 0LL;
  *v12 = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v15 = a1[1];
  v16 = *a1;
  v20 = v12 + 2;
  if ( a2 != v15 )
  {
    sub_180013374(v16, a2, v11);
    v15 = a1[1];
    v14 = v12 + 2;
    v16 = a2;
    v19 = (_QWORD *)v13;
  }
  sub_180013374(v16, v15, v14);
  v18[1] = 0LL;
  sub_180014048((__int64)a1, v13, v8, v9);
  sub_1800134DC((__int64)v18);
  return v12;
}
