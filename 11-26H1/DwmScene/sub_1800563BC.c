/*
 * XREFs of sub_1800563BC @ 0x1800563BC
 * Callers:
 *     sub_180057650 @ 0x180057650 (sub_180057650.c)
 *     sub_1800D42D0 @ 0x1800D42D0 (sub_1800D42D0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18001EB8C @ 0x18001EB8C (sub_18001EB8C.c)
 *     sub_18001F128 @ 0x18001F128 (sub_18001F128.c)
 *     sub_18001F3E4 @ 0x18001F3E4 (sub_18001F3E4.c)
 *     sub_18001F778 @ 0x18001F778 (sub_18001F778.c)
 *     sub_18001F81C @ 0x18001F81C (sub_18001F81C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800563BC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 *v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  _QWORD *v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v7 + 1;
  v9 = sub_18001F778(a1, v7 + 1);
  v10 = sub_18001EB8C(v9);
  v11 = sub_180011790(v10);
  v12 = (_QWORD *)(v11 + (v6 & 0xFFFFFFFFFFFFFFE0uLL));
  v17 = a1;
  v18 = v11;
  v19 = v9;
  v21 = v12 + 4;
  sub_180013440(v12, a3);
  v20 = v12;
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_18001F128(v15, a2, v11);
    v20 = (_QWORD *)v11;
    v14 = (__int64)(v12 + 4);
    v13 = a1[1];
    v15 = a2;
  }
  sub_18001F128(v15, v13, v14);
  v18 = 0LL;
  sub_18001F81C((__int64)a1, v11, v8, v9);
  sub_18001F3E4((__int64)&v17);
  return v12;
}
