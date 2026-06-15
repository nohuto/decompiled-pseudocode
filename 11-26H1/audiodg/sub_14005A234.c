/*
 * XREFs of sub_14005A234 @ 0x14005A234
 * Callers:
 *     sub_14003FF9C @ 0x14003FF9C (sub_14003FF9C.c)
 * Callees:
 *     sub_14003D2CC @ 0x14003D2CC (sub_14003D2CC.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_14005A3AC @ 0x14005A3AC (sub_14005A3AC.c)
 *     sub_14005A430 @ 0x14005A430 (sub_14005A430.c)
 *     sub_14005B250 @ 0x14005B250 (sub_14005B250.c)
 *     sub_14005B2D0 @ 0x14005B2D0 (sub_14005B2D0.c)
 */

_OWORD *__fastcall sub_14005A234(_QWORD *a1, __int64 a2, __int128 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int128 v14; // xmm0
  _OWORD *v15; // r14
  __int64 v16; // rsi
  _OWORD *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  _OWORD *v23; // [rsp+38h] [rbp-40h]
  _OWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_14005B2D0(a1, a2);
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_14003D2CC(v3);
  v13 = sub_140044584(v12);
  v14 = *a3;
  v21 = a1;
  v15 = (_OWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v22 = v3;
  v16 = v13;
  v23 = v15;
  v17 = (_OWORD *)v13;
  *v15 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v15 + 1;
  if ( a2 != v18 )
  {
    sub_14005A3AC(v19, a2, v13);
    v18 = a1[1];
    v17 = v15 + 1;
    v19 = a2;
    v23 = (_OWORD *)v16;
  }
  sub_14005A3AC(v19, v18, v17);
  sub_14005B250(a1, v16, v9, v3, v21, 0LL, v22, v23, v24);
  sub_14005A430(&v21);
  return v15;
}
