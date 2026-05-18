/*
 * XREFs of sub_180087AAC @ 0x180087AAC
 * Callers:
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180088BE0 @ 0x180088BE0 (sub_180088BE0.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180013518 @ 0x180013518 (sub_180013518.c)
 *     sub_180029F88 @ 0x180029F88 (sub_180029F88.c)
 *     sub_180087C7C @ 0x180087C7C (sub_180087C7C.c)
 */

__int64 __fastcall sub_180087AAC(const void **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rbx
  __int64 v12; // rax
  size_t v13; // r8
  const void *v14; // rdx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  v9 = sub_180011B48(v2);
  v10 = sub_180011790(v9);
  v16[0] = a1;
  v16[2] = v2;
  v17 = v10 + 16 * v7;
  v11 = (void *)v10;
  v12 = sub_180087C7C(v17, a2 - v7, a1);
  v13 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v14 = *a1;
  v18 = v12;
  memmove(v11, v14, v13);
  v16[1] = 0LL;
  sub_180029F88((__int64)a1, (__int64)v11, a2, v2);
  return sub_180013518((__int64)v16);
}
