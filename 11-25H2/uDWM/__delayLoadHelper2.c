/*
 * XREFs of __delayLoadHelper2 @ 0x180081090
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18009B85A (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x18009B8E5 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18009B9EE (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x18009BA8B (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18009BB7C (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll @ 0x18009BC2B (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18009BDBE (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x18009BE5B (__tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x18009BEE6 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18009BF71 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_comctl32_dll @ 0x18009C020 (__tailMerge_comctl32_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x18009C0BD (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_winsta_dll @ 0x18009C148 (__tailMerge_winsta_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x18009C215 (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_virtualmonitormanager_dll @ 0x18009C2A0 (__tailMerge_virtualmonitormanager_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x18009C32B (__tailMerge_wuceffects_dll.c)
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
