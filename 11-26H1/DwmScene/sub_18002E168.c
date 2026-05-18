/*
 * XREFs of sub_18002E168 @ 0x18002E168
 * Callers:
 *     sub_180032574 @ 0x180032574 (sub_180032574.c)
 *     sub_18005D540 @ 0x18005D540 (sub_18005D540.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18002FAB8 @ 0x18002FAB8 (sub_18002FAB8.c)
 *     sub_180031E54 @ 0x180031E54 (sub_180031E54.c)
 *     sub_180037A50 @ 0x180037A50 (sub_180037A50.c)
 */

_QWORD *__fastcall sub_18002E168(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-48h]
  _QWORD *v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h]

  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_180012790(a1, v6 + 1);
  v10 = sub_180011B48(v9);
  v11 = sub_180011790(v10);
  v18 = a1;
  v19 = v9;
  v12 = (_QWORD *)(v11 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v13 = v11;
  v20 = v12;
  v14 = (_QWORD *)v11;
  *v12 = 0LL;
  v12[1] = 0LL;
  *v12 = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v15 = a1[1];
  v16 = *a1;
  v21 = v12 + 2;
  if ( a2 != v15 )
  {
    sub_18002FAB8(v16, a2, v11);
    v15 = a1[1];
    v14 = v12 + 2;
    v16 = a2;
    v20 = (_QWORD *)v13;
  }
  sub_18002FAB8(v16, v15, v14);
  sub_180037A50(a1, v13, v8, v9, v18, 0LL, v19, v20, v21);
  sub_180031E54(&v18);
  return v12;
}
