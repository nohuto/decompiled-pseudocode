/*
 * XREFs of sub_18007FA94 @ 0x18007FA94
 * Callers:
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180013518 @ 0x180013518 (sub_180013518.c)
 *     sub_180029634 @ 0x180029634 (sub_180029634.c)
 *     sub_180029F88 @ 0x180029F88 (sub_180029F88.c)
 */

char *__fastcall sub_18007FA94(void **a1, __int64 a2, __int128 *a3)
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
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v22; // [rsp+38h] [rbp-40h]
  _OWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - (_QWORD)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180011B48(v3);
  v13 = (char *)sub_180011790(v12);
  v14 = *a3;
  v21[0] = a1;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v21[2] = v3;
  v16 = (__int64)v13;
  v22 = v15;
  v17 = v13;
  *(_OWORD *)v15 = v14;
  v18 = (__int64)a1[1];
  v19 = *a1;
  v23 = v15 + 16;
  if ( a2 != v18 )
  {
    sub_180029634(v19, a2, v13);
    v18 = (__int64)a1[1];
    v17 = v15 + 16;
    v19 = (void *)a2;
    v22 = (char *)v16;
  }
  sub_180029634(v19, v18, v17);
  v21[1] = 0LL;
  sub_180029F88((__int64)a1, v16, v9, v3);
  sub_180013518((__int64)v21);
  return v15;
}
