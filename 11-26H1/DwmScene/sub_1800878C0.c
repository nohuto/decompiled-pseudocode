/*
 * XREFs of sub_1800878C0 @ 0x1800878C0
 * Callers:
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180087C40 @ 0x180087C40 (sub_180087C40.c)
 *     sub_180087E78 @ 0x180087E78 (sub_180087E78.c)
 *     sub_18008992C @ 0x18008992C (sub_18008992C.c)
 *     sub_180089964 @ 0x180089964 (sub_180089964.c)
 */

_BYTE *__fastcall sub_1800878C0(_QWORD *a1, __int64 a2, char *a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rdi
  __int64 v13; // r8
  _BYTE *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  _BYTE *v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]

  v3 = a2 - *a1;
  v5 = a1[1] - *a1;
  if ( v5 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v5 + 1;
  v9 = sub_18008992C(a1, v5 + 1);
  v10 = sub_180011790(v9);
  v11 = *a3;
  v12 = v10;
  v19 = a1;
  v13 = v10;
  v20 = v9;
  v14 = (_BYTE *)(v10 + v3);
  *v14 = v11;
  v15 = v10 + v3 + 1;
  v16 = a1[1];
  v17 = *a1;
  v22 = v15;
  v21 = v14;
  if ( a2 != v16 )
  {
    sub_180087C40(v17, a2, v10);
    v16 = a1[1];
    v13 = v15;
    v17 = a2;
    v21 = (_BYTE *)v12;
  }
  sub_180087C40(v17, v16, v13);
  sub_180089964(a1, v12, v8, v9, v19, 0LL, v20, v21, v22);
  sub_180087E78(&v19);
  return v14;
}
