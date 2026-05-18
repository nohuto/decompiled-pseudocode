/*
 * XREFs of sub_18001F094 @ 0x18001F094
 * Callers:
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 * Callees:
 *     sub_18000BB70 @ 0x18000BB70 (sub_18000BB70.c)
 */

__int64 __fastcall sub_18001F094(const __m128i *a1, unsigned __int64 a2, __int64 a3, const __m128i *a4, size_t a5)
{
  const __m128i *v7; // rbx
  const __m128i *v8; // rax

  if ( a5 > a2 )
    return -1LL;
  if ( !a5 )
    return 0LL;
  v7 = (const __m128i *)((char *)a1 + a2);
  v8 = sub_18000BB70(a1, (const __m128i *)((char *)a1 + a2), a4, a5);
  if ( v8 == v7 )
    return -1LL;
  else
    return (char *)v8 - (char *)a1;
}
