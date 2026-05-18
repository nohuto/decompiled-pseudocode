/*
 * XREFs of sub_1800C90E0 @ 0x1800C90E0
 * Callers:
 *     sub_1800C9978 @ 0x1800C9978 (sub_1800C9978.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18001EB8C @ 0x18001EB8C (sub_18001EB8C.c)
 *     sub_180052AC8 @ 0x180052AC8 (sub_180052AC8.c)
 *     sub_1800532EC @ 0x1800532EC (sub_1800532EC.c)
 *     sub_1800544A0 @ 0x1800544A0 (sub_1800544A0.c)
 */

char *__fastcall sub_1800C90E0(void **a1, __int64 a2, __int128 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  char *v13; // rax
  __int128 v14; // xmm0
  char *v15; // r14
  __int64 v16; // rsi
  char *v17; // r8
  __int128 v18; // xmm1
  __int64 v19; // rdx
  void *v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v23; // [rsp+38h] [rbp-40h]
  _OWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - (_QWORD)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    sub_180012A30();
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_18001EB8C(v3);
  v13 = (char *)sub_180011790(v12);
  v14 = *a3;
  v22[0] = a1;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFE0uLL];
  v22[2] = v3;
  v16 = (__int64)v13;
  v23 = v15;
  v17 = v13;
  *(_OWORD *)v15 = v14;
  v18 = a3[1];
  v24 = v15 + 32;
  *((_OWORD *)v15 + 1) = v18;
  v19 = (__int64)a1[1];
  v20 = *a1;
  if ( a2 != v19 )
  {
    sub_180052AC8(v20, a2, v13);
    v19 = (__int64)a1[1];
    v17 = v15 + 32;
    v20 = (void *)a2;
    v23 = (char *)v16;
  }
  sub_180052AC8(v20, v19, v17);
  v22[1] = 0LL;
  sub_1800544A0((__int64)a1, v16, v9, v3);
  sub_1800532EC((__int64)v22);
  return v15;
}
