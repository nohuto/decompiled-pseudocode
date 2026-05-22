/*
 * XREFs of ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180023078
 * Callers:
 *     ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180022EDC (--$-RAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@AEBV-$basic_string@GU-$char_traits@G@s.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800230CC (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

char __fastcall std::_Traits_compare<std::char_traits<unsigned short>>(
        const wchar_t *a1,
        size_t a2,
        const wchar_t *a3,
        size_t a4)
{
  size_t v5; // r8
  int v8; // r8d

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v8 = std::_WChar_traits<unsigned short>::compare(a1, a3, v5);
  if ( v8 )
    return v8;
  if ( a2 < a4 )
    return -1;
  return a2 > a4;
}
