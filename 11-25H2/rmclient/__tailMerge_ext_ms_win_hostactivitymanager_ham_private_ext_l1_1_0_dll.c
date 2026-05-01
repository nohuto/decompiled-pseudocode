/*
 * XREFs of __tailMerge_ext_ms_win_hostactivitymanager_ham_private_ext_l1_1_0_dll @ 0x180014823
 * Callers:
 *     __imp_load_HampInProcResetExternalResourcePriority @ 0x1800148A2 (__imp_load_HampInProcResetExternalResourcePriority.c)
 *     __imp_load_HampInProcQueryActivityPendDiagnostics @ 0x1800148B4 (__imp_load_HampInProcQueryActivityPendDiagnostics.c)
 *     __imp_load_HampInProcStartActivityAsync @ 0x1800148C6 (__imp_load_HampInProcStartActivityAsync.c)
 *     __imp_load_HampInProcCreateActivity @ 0x1800148D8 (__imp_load_HampInProcCreateActivity.c)
 *     __imp_load_HampInProcTerminateApplicationHost @ 0x1800148EA (__imp_load_HampInProcTerminateApplicationHost.c)
 *     __imp_load_HampInProcStopActivity @ 0x1800148FC (__imp_load_HampInProcStopActivity.c)
 *     __imp_load_HampInProcTerminateActivityHost @ 0x18001490E (__imp_load_HampInProcTerminateActivityHost.c)
 *     __imp_load_HampInProcCompleteConnection @ 0x180014920 (__imp_load_HampInProcCompleteConnection.c)
 *     __imp_load_HampInProcSetExternalResourcePriority @ 0x180014932 (__imp_load_HampInProcSetExternalResourcePriority.c)
 *     __imp_load_HampInProcUpdateActivityProperties @ 0x180014944 (__imp_load_HampInProcUpdateActivityProperties.c)
 *     __imp_load_HampInProcCloseActivity @ 0x180014956 (__imp_load_HampInProcCloseActivity.c)
 *     __imp_load_HampInProcTerminateHostOnProcessExit @ 0x180014968 (__imp_load_HampInProcTerminateHostOnProcessExit.c)
 *     __imp_load_HampInProcIsHostBeingDebugged @ 0x18001497A (__imp_load_HampInProcIsHostBeingDebugged.c)
 *     __imp_load_HampInProcCreateActivityForProcess @ 0x18001498C (__imp_load_HampInProcCreateActivityForProcess.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180010280 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_hostactivitymanager_ham_private_ext_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_hostactivitymanager_ham_private_ext_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
