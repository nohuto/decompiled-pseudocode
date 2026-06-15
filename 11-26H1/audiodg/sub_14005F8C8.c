/*
 * XREFs of sub_14005F8C8 @ 0x14005F8C8
 * Callers:
 *     sub_14005FC08 @ 0x14005FC08 (sub_14005FC08.c)
 * Callees:
 *     sub_14003D2CC @ 0x14003D2CC (sub_14003D2CC.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_14005B2D0 @ 0x14005B2D0 (sub_14005B2D0.c)
 *     sub_14005FB5C @ 0x14005FB5C (sub_14005FB5C.c)
 *     sub_14005FE3C @ 0x14005FE3C (sub_14005FE3C.c)
 *     sub_14006054C @ 0x14006054C (sub_14006054C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_14005F8C8(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  _QWORD *v24; // [rsp+38h] [rbp-40h]
  _QWORD *v25; // [rsp+40h] [rbp-38h]

  v7 = a2 - qword_1400E8700;
  v8 = ((__int64)xmmword_1400E8708 - qword_1400E8700) >> 4;
  v9 = 0xFFFFFFFFFFFFFFFLL;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    sub_14005B2D0();
  v10 = v8 + 1;
  v11 = (*((_QWORD *)&xmmword_1400E8708 + 1) - qword_1400E8700) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v8 + 1;
  }
  v13 = sub_14003D2CC(v9);
  v14 = sub_140044584(v13);
  v15 = (_QWORD *)(v14 + (v7 & 0xFFFFFFFFFFFFFFF0uLL));
  v22 = &qword_1400E8700;
  v23 = v9;
  v25 = v15 + 2;
  *v15 = *a3;
  v16 = *a4;
  v15[1] = *a4;
  if ( v16 )
    sub_1400B6010(v16);
  v24 = v15;
  v17 = xmmword_1400E8708;
  v18 = (_QWORD *)v14;
  v19 = qword_1400E8700;
  if ( a2 != (_QWORD)xmmword_1400E8708 )
  {
    sub_14005FB5C(qword_1400E8700, a2, v14);
    v24 = (_QWORD *)v14;
    v18 = v15 + 2;
    v17 = xmmword_1400E8708;
    v19 = a2;
  }
  sub_14005FB5C(v19, v17, v18);
  sub_14006054C(v20, v14, v10, v9, v22, 0LL, v23, v24, v25);
  sub_14005FE3C(&v22);
  return v15;
}
