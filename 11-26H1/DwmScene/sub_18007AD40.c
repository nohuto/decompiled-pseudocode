/*
 * XREFs of sub_18007AD40 @ 0x18007AD40
 * Callers:
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_1800277D0 @ 0x1800277D0 (sub_1800277D0.c)
 *     sub_18007B1DC @ 0x18007B1DC (sub_18007B1DC.c)
 *     sub_18007B2B0 @ 0x18007B2B0 (sub_18007B2B0.c)
 *     sub_18007B82C @ 0x18007B82C (sub_18007B82C.c)
 *     sub_18007D154 @ 0x18007D154 (sub_18007D154.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007AD40(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 56;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[1] - *a1) >> 3);
  v8 = 0x492492492492492LL;
  if ( v7 == 0x492492492492492LL )
    sub_180012A30();
  v9 = v7 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  v12 = sub_1800277D0(v8);
  v13 = sub_180011790(v12);
  v14 = v13 + 56 * v6;
  v20 = a1;
  v21 = v13;
  v22 = v8;
  v24 = v14 + 56;
  sub_18007B2B0(v15, v14, a3);
  v23 = v14;
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_18007B1DC(v18, a2, v13);
    v23 = v13;
    v17 = v14 + 56;
    v16 = a1[1];
    v18 = a2;
  }
  sub_18007B1DC(v18, v16, v17);
  v21 = 0LL;
  sub_18007D154(a1, v13, v9, v8);
  sub_18007B82C(&v20);
  return v14;
}
