/*
 * XREFs of __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x1802D11DD
 * Callers:
 *     __imp_load_RefreshImmersiveColorPolicyState @ 0x1802D125C (__imp_load_RefreshImmersiveColorPolicyState.c)
 *     __imp_load_GetIsImmersiveColorUsingHighContrast @ 0x1802D126E (__imp_load_GetIsImmersiveColorUsingHighContrast.c)
 *     __imp_load_GetColorFromPreference @ 0x1802D1280 (__imp_load_GetColorFromPreference.c)
 *     __imp_load_GetUserColorPreference @ 0x1802D1292 (__imp_load_GetUserColorPreference.c)
 *     __imp_load_GetThemeFont @ 0x1802D3E27 (__imp_load_GetThemeFont.c)
 *     __imp_load_IsThemePartDefined @ 0x1802D3E39 (__imp_load_IsThemePartDefined.c)
 *     __imp_load_GetThemeMargins @ 0x1802D3E4B (__imp_load_GetThemeMargins.c)
 *     __imp_load_OpenThemeData @ 0x1802D3E5D (__imp_load_OpenThemeData.c)
 *     __imp_load_DrawThemeBackground @ 0x1802D3E6F (__imp_load_DrawThemeBackground.c)
 *     __imp_load_GetThemeColor @ 0x1802D3E81 (__imp_load_GetThemeColor.c)
 *     __imp_load_CloseThemeData @ 0x1802D3E93 (__imp_load_CloseThemeData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801B9A40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_uxtheme_themes_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
