/*
 * XREFs of sub_180098E88 @ 0x180098E88
 * Callers:
 *     sub_180098010 @ 0x180098010 (sub_180098010.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180017D30 @ 0x180017D30 (sub_180017D30.c)
 *     sub_1800990BC @ 0x1800990BC (sub_1800990BC.c)
 */

__int64 __fastcall sub_180098E88(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  char *v6; // r14
  __int64 v7; // r15
  char *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  size_t v12; // rbx
  const void *v13; // rdx
  char *v14; // r12
  size_t v15; // r8
  char *v16; // rcx
  __int64 result; // rax
  void *v18; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      sub_1800990BC();
    v2 *= 2LL;
  }
  v4 = a1[3] >> 1;
  v5 = sub_180017D30(v2);
  v6 = (char *)sub_180011790(v5);
  v7 = 8 * v4;
  v8 = &v6[8 * v4];
  v9 = v2 >> 1;
  while ( v2 <= v9 )
    v2 *= 2LL;
  v10 = a1[2];
  v11 = v2 - v10;
  v12 = 8 * v10 - v7;
  memmove(v8, (const void *)(a1[1] + v7), v12);
  v13 = (const void *)a1[1];
  v14 = &v8[v12];
  if ( v4 > v11 )
  {
    memmove(v14, v13, 8 * v11);
    memmove(v6, (const void *)(8 * v11 + a1[1]), v7 - 8 * v11);
    v16 = &v6[v7 - 8 * v11];
    v15 = 8 * v11;
  }
  else
  {
    memmove(v14, v13, 8 * v4);
    memset(&v14[v7], 0, 8 * (v11 - v4));
    v15 = 8 * v4;
    v16 = v6;
  }
  result = (__int64)memset(v16, 0, v15);
  v18 = (void *)a1[1];
  if ( v18 )
    result = sub_18000E26C(v18, 8LL * a1[2]);
  a1[2] += v11;
  a1[1] = v6;
  return result;
}
