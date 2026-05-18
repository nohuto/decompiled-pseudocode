/*
 * XREFs of sub_180017BB8 @ 0x180017BB8
 * Callers:
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_180026F30 @ 0x180026F30 (sub_180026F30.c)
 *     sub_1800B97F8 @ 0x1800B97F8 (sub_1800B97F8.c)
 *     sub_1800B99A4 @ 0x1800B99A4 (sub_1800B99A4.c)
 *     sub_1800B9B50 @ 0x1800B9B50 (sub_1800B9B50.c)
 *     sub_1800B9CFC @ 0x1800B9CFC (sub_1800B9CFC.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180013374 @ 0x180013374 (sub_180013374.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180014048 @ 0x180014048 (sub_180014048.c)
 */

_QWORD *__fastcall sub_180017BB8(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rsi
  _QWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-40h]
  _QWORD *v22; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180011B48(v3);
  v13 = (_QWORD *)sub_180011790(v12);
  v20[0] = a1;
  v20[2] = v3;
  v14 = (_QWORD *)((char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = (__int64)v13;
  v21 = v14;
  v16 = v13;
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v17 = a1[1];
  v18 = *a1;
  v22 = v14 + 2;
  if ( a2 != v17 )
  {
    sub_180013374(v18, a2, v13);
    v17 = a1[1];
    v16 = v14 + 2;
    v18 = a2;
    v21 = (_QWORD *)v15;
  }
  sub_180013374(v18, v17, v16);
  v20[1] = 0LL;
  sub_180014048((__int64)a1, v15, v9, v3);
  sub_1800134DC((__int64)v20);
  return v14;
}
