/*
 * XREFs of sub_1800852C0 @ 0x1800852C0
 * Callers:
 *     sub_180085CB0 @ 0x180085CB0 (sub_180085CB0.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180017D30 @ 0x180017D30 (sub_180017D30.c)
 *     sub_180017D60 @ 0x180017D60 (sub_180017D60.c)
 *     sub_180018724 @ 0x180018724 (sub_180018724.c)
 *     sub_18001BA7C @ 0x18001BA7C (sub_18001BA7C.c)
 *     sub_18006FAE0 @ 0x18006FAE0 (sub_18006FAE0.c)
 */

char *__fastcall sub_1800852C0(void **a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  char *v11; // rax
  __int64 v12; // xmm0_8
  __int64 v13; // rdi
  char *v14; // r8
  char *v15; // rsi
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h]

  v5 = (a2 - (__int64)*a1) >> 3;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_18006FAE0(a1, v6 + 1);
  v10 = sub_180017D30(v9);
  v11 = (char *)sub_180011790(v10);
  v12 = *a3;
  v13 = (__int64)v11;
  v19[0] = a1;
  v14 = v11;
  v19[2] = v9;
  v15 = &v11[8 * v5];
  *(_QWORD *)v15 = v12;
  v16 = (__int64)a1[1];
  v17 = *a1;
  v21 = v15 + 8;
  v20 = v15;
  if ( a2 != v16 )
  {
    sub_180017D60(v17, a2, v11);
    v16 = (__int64)a1[1];
    v14 = v15 + 8;
    v17 = (void *)a2;
    v20 = (char *)v13;
  }
  sub_180017D60(v17, v16, v14);
  v19[1] = 0LL;
  sub_18001BA7C((__int64)a1, v13, v8, v9);
  sub_180018724((__int64)v19);
  return v15;
}
