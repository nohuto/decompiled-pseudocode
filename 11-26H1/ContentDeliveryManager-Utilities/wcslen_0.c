/*
 * XREFs of wcslen_0 @ 0x180021E8D
 * Callers:
 *     ??$_Getvals@_W@?$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z @ 0x18000EE30 (--$_Getvals@_W@-$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z.c)
 *     ?do_curr_symbol@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180017730 (-do_curr_symbol@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 *     ?do_negative_sign@?$_Mpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180018D80 (-do_negative_sign@-$_Mpunct@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ?do_positive_sign@?$_Mpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180018F50 (-do_positive_sign@-$_Mpunct@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
size_t __cdecl wcslen_0(const wchar_t *String)
{
  return wcslen(String);
}
