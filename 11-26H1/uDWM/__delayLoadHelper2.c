/*
 * XREFs of __delayLoadHelper2 @ 0x180072AA0
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18008F079 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18008F128 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x18008F1C5 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18008F2B6 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll @ 0x18008F365 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18008F4FA (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x18008F597 (__tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x18008F622 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18008F6AD (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_comctl32_dll @ 0x18008F75C (__tailMerge_comctl32_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x18008F7F9 (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_winsta_dll @ 0x18008F884 (__tailMerge_winsta_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x18008F951 (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x18008F9DC (__tailMerge_wuceffects_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
