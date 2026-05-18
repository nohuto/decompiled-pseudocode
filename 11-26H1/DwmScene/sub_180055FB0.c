/*
 * XREFs of sub_180055FB0 @ 0x180055FB0
 * Callers:
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 *     sub_18001F778 @ 0x18001F778 (sub_18001F778.c)
 *     sub_180027324 @ 0x180027324 (sub_180027324.c)
 *     sub_180031F38 @ 0x180031F38 (sub_180031F38.c)
 *     sub_1800567AC @ 0x1800567AC (sub_1800567AC.c)
 */

__int64 __fastcall sub_180055FB0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v7; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // rbp
  __int64 i; // rbp
  __int64 result; // rax

  v3 = *a1;
  v4 = a3;
  if ( a3 > (a1[2] - *a1) >> 5 )
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFLL )
      sub_180012A30();
    v7 = sub_18001F778(a1, a3);
    if ( v3 )
    {
      sub_18001EB54(v3, a1[1]);
      sub_18000E26C((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_180027324(a1, v7);
    v8 = *a1;
    goto LABEL_14;
  }
  v8 = a1[1];
  v9 = (v8 - v3) >> 5;
  if ( v4 > v9 )
  {
    while ( v3 != v8 )
    {
      sub_180031F38(v3, a2);
      v8 = a1[1];
      v3 += 32LL;
      a2 += 32LL;
    }
    v4 -= v9;
LABEL_14:
    result = sub_1800567AC(a2, v4, v8, a1);
    a1[1] = result;
    return result;
  }
  for ( i = v3 + 32 * v4; v4; --v4 )
  {
    sub_180031F38(v3, a2);
    v3 += 32LL;
    a2 += 32LL;
  }
  result = sub_18001EB54(i, a1[1]);
  a1[1] = i;
  return result;
}
