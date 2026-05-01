/*
 * XREFs of __tailMerge_ext_ms_win_hostactivitymanager_ham_private_ext_l1_1_0_dll @ 0x180013794
 * Callers:
 *     __imp_load_HampInProcResetExternalResourcePriority @ 0x180013813 (__imp_load_HampInProcResetExternalResourcePriority.c)
 *     __imp_load_HampInProcQueryActivityPendDiagnostics @ 0x180013825 (__imp_load_HampInProcQueryActivityPendDiagnostics.c)
 *     __imp_load_HampInProcStartActivityAsync @ 0x180013837 (__imp_load_HampInProcStartActivityAsync.c)
 *     __imp_load_HampInProcCreateActivity @ 0x180013849 (__imp_load_HampInProcCreateActivity.c)
 *     __imp_load_HampInProcTerminateApplicationHost @ 0x18001385B (__imp_load_HampInProcTerminateApplicationHost.c)
 *     __imp_load_HampInProcStopActivity @ 0x18001386D (__imp_load_HampInProcStopActivity.c)
 *     __imp_load_HampInProcTerminateActivityHost @ 0x18001387F (__imp_load_HampInProcTerminateActivityHost.c)
 *     __imp_load_HampInProcCompleteConnection @ 0x180013891 (__imp_load_HampInProcCompleteConnection.c)
 *     __imp_load_HampInProcSetExternalResourcePriority @ 0x1800138A3 (__imp_load_HampInProcSetExternalResourcePriority.c)
 *     __imp_load_HampInProcUpdateActivityProperties @ 0x1800138B5 (__imp_load_HampInProcUpdateActivityProperties.c)
 *     __imp_load_HampInProcCloseActivity @ 0x1800138C7 (__imp_load_HampInProcCloseActivity.c)
 *     __imp_load_HampInProcTerminateHostOnProcessExit @ 0x1800138D9 (__imp_load_HampInProcTerminateHostOnProcessExit.c)
 *     __imp_load_HampInProcIsHostBeingDebugged @ 0x1800138EB (__imp_load_HampInProcIsHostBeingDebugged.c)
 *     __imp_load_HampInProcCreateActivityForProcess @ 0x1800138FD (__imp_load_HampInProcCreateActivityForProcess.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18000F5A0 (__delayLoadHelper2.c)
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
