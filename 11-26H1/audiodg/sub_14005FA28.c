/*
 * XREFs of sub_14005FA28 @ 0x14005FA28
 * Callers:
 *     sub_14005FF40 @ 0x14005FF40 (sub_14005FF40.c)
 * Callees:
 *     sub_14002A8F8 @ 0x14002A8F8 (sub_14002A8F8.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_14005B2D0 @ 0x14005B2D0 (sub_14005B2D0.c)
 *     sub_14005FBC8 @ 0x14005FBC8 (sub_14005FBC8.c)
 *     sub_14005FE78 @ 0x14005FE78 (sub_14005FE78.c)
 *     sub_1400605D0 @ 0x1400605D0 (sub_1400605D0.c)
 */

_QWORD *__fastcall sub_14005FA28(_QWORD *a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v16; // r8
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  _QWORD *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    sub_14005B2D0();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  v12 = sub_14002A8F8(v3);
  v13 = sub_140044584(v12);
  v14 = *a3;
  v15 = v13;
  *a3 = 0LL;
  v16 = (_QWORD *)v13;
  v21 = a1;
  v17 = (_QWORD *)(v13 + 8 * v5);
  v22 = v3;
  *v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v17 + 1;
  v23 = v17;
  if ( a2 != v18 )
  {
    sub_14005FBC8(v19, a2, v13);
    v18 = a1[1];
    v16 = v17 + 1;
    v19 = a2;
    v23 = (_QWORD *)v15;
  }
  sub_14005FBC8(v19, v18, v16);
  sub_1400605D0(a1, v15, v9, v3, v21, 0LL, v22, v23, v24);
  sub_14005FE78(&v21);
  return v17;
}
