/*
 * XREFs of PpmReleaseLock @ 0x14037CD6C
 * Callers:
 *     PpmCheckRun @ 0x140258540 (PpmCheckRun.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028F150 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PoNotifyVSyncChange @ 0x1403960B0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140396C50 (PpmMediaBufferingWorker.c)
 *     PpmRegisterPerfCap @ 0x140445E10 (PpmRegisterPerfCap.c)
 *     PpmParkSetLpiCap @ 0x1404B533C (PpmParkSetLpiCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404C0F80 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C0FC4 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x1404D3700 (PopDeepSleepEvaluateCallback.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140503A58 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14050BC78 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmCppcConfig @ 0x14060906C (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfConfig @ 0x1406093B4 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x140609648 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x1407D1340 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x1407E1804 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407E1A18 (PpmParkClearForcedMask.c)
 *     PpmRegisterProfiles @ 0x1407E6B9C (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407E6DF0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmApplyProfile @ 0x1409C15D8 (PpmApplyProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1409C17C0 (PpmCompareAndApplyPolicySettings.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140ACBC98 (PpmPerfGetFrequencyBandStats.c)
 *     PdcPoPpmResetProfile @ 0x140AD84C0 (PdcPoPpmResetProfile.c)
 *     PpmDisableProfile @ 0x140AD85C4 (PpmDisableProfile.c)
 *     PpmInfoReleaseLocks @ 0x140AD87EC (PpmInfoReleaseLocks.c)
 *     PpmUpdatePerfStates @ 0x140AD8A50 (PpmUpdatePerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 *     PpmIdleGetConcurrencyStats @ 0x140AFE990 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140B05A3C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmPerfTelemetryWorker @ 0x140B2B620 (PpmPerfTelemetryWorker.c)
 *     PopWnfFullscreenVideoCallback @ 0x140B4A430 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140B52A88 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140B5B35C (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140B5D3E8 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140B67AAC (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140B70164 (PpmPerfGetVmPerfControlSupport.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140CD8F20 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
  {
    v3 = 22;
    KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v3);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
