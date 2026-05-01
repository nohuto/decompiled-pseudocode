/*
 * XREFs of __std_find_trivial_2 @ 0x1802CD220
 * Callers:
 *     ??$_Find_vectorized@$$CBGG@std@@YAPEBGQEBG0G@Z @ 0x180334B6C (--$_Find_vectorized@$$CBGG@std@@YAPEBGQEBG0G@Z.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x180334B78 (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
const __m128i *__fastcall _std_find_trivial_2(const __m128i *a1, const __m128i *a2, __int16 a3)
{
  return anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_(a1, a2, a3);
}
