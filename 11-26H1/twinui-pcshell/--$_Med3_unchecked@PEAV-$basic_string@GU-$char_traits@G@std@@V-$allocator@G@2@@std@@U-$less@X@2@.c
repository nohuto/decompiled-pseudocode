/*
 * XREFs of ??$_Med3_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x18033E068
 * Callers:
 *     ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x18033DEBC (--$_Guess_median_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$l.c)
 * Callees:
 *     ?_Swap_data@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEAV12@@Z @ 0x1802111D8 (-_Swap_data@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEAV12@@Z.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 */

void __fastcall std::_Med3_unchecked<std::wstring *,std::less<void>>(__int128 *a1, __int128 *a2, __int128 *a3)
{
  if ( (unsigned __int8)std::operator<<unsigned short>((const wchar_t *)a2, (const wchar_t *)a1) && a2 != a1 )
    std::wstring::_Swap_data(a2, a1);
  if ( (unsigned __int8)std::operator<<unsigned short>((const wchar_t *)a3, (const wchar_t *)a2) )
  {
    if ( a3 != a2 )
      std::wstring::_Swap_data(a3, a2);
    if ( (unsigned __int8)std::operator<<unsigned short>((const wchar_t *)a2, (const wchar_t *)a1) )
    {
      if ( a2 != a1 )
        std::wstring::_Swap_data(a2, a1);
    }
  }
}
