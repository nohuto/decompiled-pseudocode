/*
 * XREFs of sub_180054534 @ 0x180054534
 * Callers:
 *     sub_180054E00 @ 0x180054E00 (sub_180054E00.c)
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 *     sub_18006A2D0 @ 0x18006A2D0 (sub_18006A2D0.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18002FAB8 @ 0x18002FAB8 (sub_18002FAB8.c)
 *     sub_180031E54 @ 0x180031E54 (sub_180031E54.c)
 *     sub_180037A50 @ 0x180037A50 (sub_180037A50.c)
 */

_QWORD *__fastcall sub_180054534(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-40h]
  _QWORD *v19; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_180012790(a1, v6 + 1);
  v10 = sub_180011B48(v9);
  v17[0] = a1;
  v17[2] = v9;
  v11 = (_QWORD *)sub_180011790(v10);
  v12 = (_QWORD *)((char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL));
  v19 = v12 + 2;
  sub_180012C40(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v18 = v12;
  if ( a2 != v13 )
  {
    sub_18002FAB8(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
    v18 = v11;
  }
  sub_18002FAB8(v15, v13, v14);
  v17[1] = 0LL;
  sub_180037A50((__int64)a1, (__int64)v11, v8, v9);
  sub_180031E54((__int64)v17);
  return v12;
}
