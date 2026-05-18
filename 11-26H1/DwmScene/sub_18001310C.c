/*
 * XREFs of sub_18001310C @ 0x18001310C
 * Callers:
 *     sub_180014130 @ 0x180014130 (sub_180014130.c)
 *     sub_18002FCC0 @ 0x18002FCC0 (sub_18002FCC0.c)
 *     sub_180033068 @ 0x180033068 (sub_180033068.c)
 *     sub_18003AD4C @ 0x18003AD4C (sub_18003AD4C.c)
 *     sub_180077F00 @ 0x180077F00 (sub_180077F00.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 *     sub_1800CE5E0 @ 0x1800CE5E0 (sub_1800CE5E0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013374 @ 0x180013374 (sub_180013374.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180014048 @ 0x180014048 (sub_180014048.c)
 */

_QWORD *__fastcall sub_18001310C(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  _QWORD *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180011B48(v3);
  v13 = sub_180011790(v12);
  v20 = a1;
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v21 = v3;
  v15 = v13;
  v23 = v14 + 2;
  sub_180012C40(v14, a3);
  v16 = a1[1];
  v17 = (_QWORD *)v15;
  v18 = *a1;
  v22 = v14;
  if ( a2 != v16 )
  {
    sub_180013374(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 2;
    v18 = a2;
    v22 = (_QWORD *)v15;
  }
  sub_180013374(v18, v16, v17);
  sub_180014048(a1, v15, v9, v3, v20, 0LL, v21, v22, v23);
  sub_1800134DC(&v20);
  return v14;
}
