/*
 * XREFs of ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800230CC
 * Callers:
 *     ??$?RAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x180022F20 (--$-RAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV-$basic_string_view@GU.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x180023014 (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180023078 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl std::_WChar_traits<unsigned short>::compare(const wchar_t *S1, const wchar_t *S2, size_t N)
{
  return wmemcmp(S1, S2, N);
}
