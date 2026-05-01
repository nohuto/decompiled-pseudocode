/*
 * XREFs of __tailMerge_api_ms_win_ntuser_sysparams_l1_1_0_dll @ 0x1802D5B1F
 * Callers:
 *     __imp_load_SystemParametersInfoW @ 0x1802D5B9E (__imp_load_SystemParametersInfoW.c)
 *     __imp_load_GetMonitorInfoW @ 0x1802D64AF (__imp_load_GetMonitorInfoW.c)
 *     __imp_load_GetSystemMetrics @ 0x1802D6643 (__imp_load_GetSystemMetrics.c)
 *     __imp_load_EnumDisplayMonitors @ 0x1802D699C (__imp_load_EnumDisplayMonitors.c)
 *     __imp_load_DisplayConfigGetDeviceInfo @ 0x1802D6EAD (__imp_load_DisplayConfigGetDeviceInfo.c)
 *     __imp_load_QueryDisplayConfig @ 0x1802D6EBF (__imp_load_QueryDisplayConfig.c)
 *     __imp_load_GetDisplayConfigBufferSizes @ 0x1802D6ED1 (__imp_load_GetDisplayConfigBufferSizes.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_ntuser_sysparams_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_ntuser_sysparams_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
