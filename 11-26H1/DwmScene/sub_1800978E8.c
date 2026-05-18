/*
 * XREFs of sub_1800978E8 @ 0x1800978E8
 * Callers:
 *     sub_180097B68 @ 0x180097B68 (sub_180097B68.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_1800277D0 @ 0x1800277D0 (sub_1800277D0.c)
 *     sub_180097A5C @ 0x180097A5C (sub_180097A5C.c)
 *     sub_180097AD8 @ 0x180097AD8 (sub_180097AD8.c)
 *     sub_180097BC0 @ 0x180097BC0 (sub_180097BC0.c)
 *     sub_180097E34 @ 0x180097E34 (sub_180097E34.c)
 *     sub_180097E7C @ 0x180097E7C (sub_180097E7C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800978E8(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+48h] [rbp-40h]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v9 = (a2 - *a1) / 56;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v10 == 0x492492492492492LL )
    sub_180012A30();
  v11 = v10 + 1;
  v12 = sub_180097E34(a1, v10 + 1);
  v13 = sub_1800277D0(v12);
  v14 = sub_180011790(v13);
  v15 = v14 + 56 * v9;
  v20 = a1;
  v21 = v14;
  v22 = v12;
  v24 = v15 + 56;
  sub_180097AD8(a6, v15, a3, a4, a5, a6);
  v23 = v15;
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180097A5C(v18, a2, v14);
    v23 = v14;
    v17 = v15 + 56;
    v16 = a1[1];
    v18 = a2;
  }
  sub_180097A5C(v18, v16, v17);
  v21 = 0LL;
  sub_180097E7C(a1, v14, v11, v12);
  sub_180097BC0(&v20);
  return v15;
}
