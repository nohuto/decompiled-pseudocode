/*
 * XREFs of sub_180085530 @ 0x180085530
 * Callers:
 *     sub_180085FF8 @ 0x180085FF8 (sub_180085FF8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18001323C @ 0x18001323C (sub_18001323C.c)
 *     sub_180085644 @ 0x180085644 (sub_180085644.c)
 *     sub_180085770 @ 0x180085770 (sub_180085770.c)
 *     sub_180085F0C @ 0x180085F0C (sub_180085F0C.c)
 *     sub_180085F44 @ 0x180085F44 (sub_180085F44.c)
 */

_WORD *__fastcall sub_180085530(_QWORD *a1, __int64 a2, __int16 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int16 v12; // cx
  __int64 v13; // rdi
  _WORD *v14; // r8
  _WORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  _WORD *v21; // [rsp+38h] [rbp-40h]
  _WORD *v22; // [rsp+40h] [rbp-38h]

  v5 = (a2 - *a1) >> 1;
  v6 = (__int64)(a1[1] - *a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_180085F0C(a1, v6 + 1);
  v10 = sub_18001323C(v9);
  v11 = sub_180011790(v10);
  v12 = *a3;
  v13 = v11;
  v19 = a1;
  v14 = (_WORD *)v11;
  v20 = v9;
  v15 = (_WORD *)(v11 + 2 * v5);
  *v15 = v12;
  v16 = a1[1];
  v17 = *a1;
  v22 = v15 + 1;
  v21 = v15;
  if ( a2 != v16 )
  {
    sub_180085644(v17, a2, v11);
    v16 = a1[1];
    v14 = v15 + 1;
    v17 = a2;
    v21 = (_WORD *)v13;
  }
  sub_180085644(v17, v16, v14);
  sub_180085F44(a1, v13, v8, v9, v19, 0LL, v20, v21, v22);
  sub_180085770(&v19);
  return v15;
}
