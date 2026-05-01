/*
 * XREFs of ??$_Find_vectorized@$$CBGG@std@@YAPEBGQEBG0G@Z @ 0x180334B6C
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180030780 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x18003263C (-has_extension@path@filesystem@std@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
const __m128i *__fastcall std::_Find_vectorized<unsigned short const,unsigned short>(
        const __m128i *a1,
        const __m128i *a2,
        __int16 a3)
{
  return _std_find_trivial_2(a1, a2, a3);
}
