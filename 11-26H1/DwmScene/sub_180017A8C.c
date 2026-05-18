/*
 * XREFs of sub_180017A8C @ 0x180017A8C
 * Callers:
 *     sub_180019350 @ 0x180019350 (sub_180019350.c)
 *     sub_18006C5BC @ 0x18006C5BC (sub_18006C5BC.c)
 *     sub_18008DA30 @ 0x18008DA30 (sub_18008DA30.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180017D30 @ 0x180017D30 (sub_180017D30.c)
 *     sub_180017D60 @ 0x180017D60 (sub_180017D60.c)
 *     sub_180018724 @ 0x180018724 (sub_180018724.c)
 *     sub_18001BA7C @ 0x18001BA7C (sub_18001BA7C.c)
 */

_QWORD *__fastcall sub_180017A8C(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // r8
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  _QWORD *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  v12 = sub_180017D30(v3);
  v13 = sub_180011790(v12);
  v14 = *a3;
  v15 = v13;
  v21 = a1;
  v16 = (_QWORD *)v13;
  v22 = v3;
  v17 = (_QWORD *)(v13 + 8 * v5);
  *v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v17 + 1;
  v23 = v17;
  if ( a2 != v18 )
  {
    sub_180017D60(v19, a2, v13);
    v18 = a1[1];
    v16 = v17 + 1;
    v19 = a2;
    v23 = (_QWORD *)v15;
  }
  sub_180017D60(v19, v18, v16);
  sub_18001BA7C(a1, v15, v9, v3, v21, 0LL, v22, v23, v24);
  sub_180018724(&v21);
  return v17;
}
