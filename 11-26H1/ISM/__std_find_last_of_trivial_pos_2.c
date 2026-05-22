/*
 * XREFs of __std_find_last_of_trivial_pos_2 @ 0x18009C8B0
 * Callers:
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800D3DE0 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall _std_find_last_of_trivial_pos_2(
        unsigned __int16 *Src,
        unsigned __int64 a2,
        const __m128i *a3,
        unsigned __int64 a4)
{
  return anonymous_namespace_::__std_find_last_of::_Dispatch_pos_unsigned_short_(Src, a2, a3, a4);
}
