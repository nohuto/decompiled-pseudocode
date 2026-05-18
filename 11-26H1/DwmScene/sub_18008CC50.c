/*
 * XREFs of sub_18008CC50 @ 0x18008CC50
 * Callers:
 *     sub_18008D6E4 @ 0x18008D6E4 (sub_18008D6E4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180013518 @ 0x180013518 (sub_180013518.c)
 *     sub_180029634 @ 0x180029634 (sub_180029634.c)
 *     sub_180029F88 @ 0x180029F88 (sub_180029F88.c)
 */

char *__fastcall sub_18008CC50(void **a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rdx
  char *v16; // r14
  __int64 v17; // rdi
  char *v18; // r8
  __int64 v19; // rdx
  void *v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-38h]

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = a2 - (_QWORD)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v10 = v7 + 1;
  v11 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v4 = v12 + v11;
    if ( v12 + v11 < v10 )
      v4 = v7 + 1;
  }
  v13 = sub_180011B48(v4);
  v14 = (char *)sub_180011790(v13);
  v15 = *a4;
  v16 = &v14[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  v17 = (__int64)v14;
  v22[0] = a1;
  v22[2] = v4;
  v18 = v14;
  v23 = (__int64)v16;
  *(_DWORD *)v16 = *a3;
  *((_QWORD *)v16 + 1) = v15;
  v19 = (__int64)a1[1];
  v20 = *a1;
  v24 = v16 + 16;
  if ( a2 != v19 )
  {
    sub_180029634(v20, a2, v14);
    v19 = (__int64)a1[1];
    v18 = v16 + 16;
    v20 = (void *)a2;
    v23 = v17;
  }
  sub_180029634(v20, v19, v18);
  v22[1] = 0LL;
  sub_180029F88((__int64)a1, v17, v10, v4);
  sub_180013518((__int64)v22);
  return v16;
}
