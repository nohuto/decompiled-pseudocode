/*
 * XREFs of sub_1800D060C @ 0x1800D060C
 * Callers:
 *     sub_1800D0740 @ 0x1800D0740 (sub_1800D0740.c)
 * Callees:
 *     sub_18000B990 @ 0x18000B990 (sub_18000B990.c)
 */

__int64 __fastcall sub_1800D060C(__int64 a1, unsigned __int64 a2)
{
  const __m128i *v3; // rbx
  const __m128i *v4; // rax

  if ( a2 <= 1 )
    return -1LL;
  v3 = (const __m128i *)(a1 + 2 * a2);
  v4 = sub_18000B990((const __m128i *)(a1 + 2), v3, 47);
  if ( v4 == v3 )
    return -1LL;
  else
    return ((__int64)v4->m128i_i64 - a1) >> 1;
}
