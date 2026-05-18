/*
 * XREFs of sub_1800977D4 @ 0x1800977D4
 * Callers:
 *     sub_180097B2C @ 0x180097B2C (sub_180097B2C.c)
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180017D00 @ 0x180017D00 (sub_180017D00.c)
 *     sub_18001F0E8 @ 0x18001F0E8 (sub_18001F0E8.c)
 *     sub_18001F3BC @ 0x18001F3BC (sub_18001F3BC.c)
 *     sub_18001F73C @ 0x18001F73C (sub_18001F73C.c)
 *     sub_18001F7B4 @ 0x18001F7B4 (sub_18001F7B4.c)
 */

char *__fastcall sub_1800977D4(void **a1, __int64 a2, int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  char *v11; // rax
  int v12; // ecx
  __int64 v13; // rdi
  char *v14; // r8
  char *v15; // rsi
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v20; // [rsp+38h] [rbp-40h]
  _DWORD *v21; // [rsp+40h] [rbp-38h]

  v5 = (a2 - (__int64)*a1) >> 2;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_18001F73C(a1, v6 + 1);
  v10 = sub_180017D00(v9);
  v11 = (char *)sub_180011790(v10);
  v12 = *a3;
  v13 = (__int64)v11;
  v19[0] = a1;
  v14 = v11;
  v19[2] = v9;
  v15 = &v11[4 * v5];
  *(_DWORD *)v15 = v12;
  v16 = (__int64)a1[1];
  v17 = *a1;
  v21 = v15 + 4;
  v20 = v15;
  if ( a2 != v16 )
  {
    sub_18001F0E8(v17, a2, v11);
    v16 = (__int64)a1[1];
    v14 = v15 + 4;
    v17 = (void *)a2;
    v20 = (char *)v13;
  }
  sub_18001F0E8(v17, v16, v14);
  v19[1] = 0LL;
  sub_18001F7B4((__int64)a1, v13, v8, v9);
  sub_18001F3BC((__int64)v19);
  return v15;
}
