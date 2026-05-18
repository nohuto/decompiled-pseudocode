/*
 * XREFs of sub_180039B18 @ 0x180039B18
 * Callers:
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18002FAB8 @ 0x18002FAB8 (sub_18002FAB8.c)
 *     sub_180031E54 @ 0x180031E54 (sub_180031E54.c)
 *     sub_180037A50 @ 0x180037A50 (sub_180037A50.c)
 */

_QWORD *__fastcall sub_180039B18(__int64 *a1, __int64 a2, _QWORD *a3)
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
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-40h]
  _QWORD *v22; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180011B48(v3);
  v13 = sub_180011790(v12);
  v20[0] = a1;
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v20[2] = v3;
  v15 = (_QWORD *)v13;
  v22 = v14 + 2;
  sub_180012C40(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  v21 = v14;
  if ( a2 != v16 )
  {
    sub_18002FAB8(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 2;
    v18 = a2;
    v21 = v15;
  }
  sub_18002FAB8(v18, v16, v17);
  v20[1] = 0LL;
  sub_180037A50((__int64)a1, (__int64)v15, v9, v3);
  sub_180031E54((__int64)v20);
  return v14;
}
