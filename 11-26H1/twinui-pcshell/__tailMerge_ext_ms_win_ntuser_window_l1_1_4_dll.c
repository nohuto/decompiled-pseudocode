/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_4_dll @ 0x1802D0998
 * Callers:
 *     __imp_load_SwitchToThisWindow @ 0x1802D0A17 (__imp_load_SwitchToThisWindow.c)
 *     __imp_load_HungWindowFromGhostWindow @ 0x1802D0A29 (__imp_load_HungWindowFromGhostWindow.c)
 *     __imp_load_ShowWindowAsync @ 0x1802D0AC6 (__imp_load_ShowWindowAsync.c)
 *     __imp_load_GhostWindowFromHungWindow @ 0x1802D0AD8 (__imp_load_GhostWindowFromHungWindow.c)
 *     __imp_load_RegisterWindowArrangementCallout @ 0x1802D0B8C (__imp_load_RegisterWindowArrangementCallout.c)
 *     __imp_load_UpdateWindowTrackingInfo @ 0x1802D0B9E (__imp_load_UpdateWindowTrackingInfo.c)
 *     __imp_load_EnableShellWindowManagementBehavior @ 0x1802D0BB0 (__imp_load_EnableShellWindowManagementBehavior.c)
 *     __imp_load_GetWindowTrackInfoAsync @ 0x1802D0BC2 (__imp_load_GetWindowTrackInfoAsync.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801B9A40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_window_l1_1_4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
