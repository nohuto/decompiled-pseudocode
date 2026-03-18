/*
 * XREFs of _guard_dispatch_icall @ 0x140032570
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140014070 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140014100 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140014220 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x14001679C (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeControllerAsyncResetWorker @ 0x1400169B0 (NVMeControllerAsyncResetWorker.c)
 *     StorNVMeDriverUnload @ 0x1400320C0 (StorNVMeDriverUnload.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140037010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_dispatch_icall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
