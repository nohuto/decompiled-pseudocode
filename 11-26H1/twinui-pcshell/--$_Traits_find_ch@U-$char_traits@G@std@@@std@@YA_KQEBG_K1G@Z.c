/*
 * XREFs of ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x180334B78
 * Callers:
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803372D0 (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x18039EE5C (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?TryGetTileIdForApplicationView@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUIApplicationView@@@Z @ 0x18053AB48 (-TryGetTileIdForApplicationView@JointResize@@AEAA-AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAU.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1805776EC (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     __std_find_trivial_2 @ 0x1802CD220 (__std_find_trivial_2.c)
 */

__int64 __fastcall std::_Traits_find_ch<std::char_traits<unsigned short>>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int16 a4)
{
  const __m128i *v5; // rbx
  const __m128i *trivial_2; // rax

  if ( a3 >= a2 )
    return -1LL;
  v5 = (const __m128i *)(a1 + 2 * a2);
  trivial_2 = _std_find_trivial_2((const __m128i *)(a1 + 2 * a3), v5, a4);
  if ( trivial_2 == v5 )
    return -1LL;
  else
    return ((__int64)trivial_2->m128i_i64 - a1) >> 1;
}
