/*
 * XREFs of PpmAcquireLock @ 0x140396D00
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028F150 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PoNotifyVSyncChange @ 0x1403960B0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140396C50 (PpmMediaBufferingWorker.c)
 *     PpmRegisterPerfCap @ 0x140445E10 (PpmRegisterPerfCap.c)
 *     PpmParkSetLpiCap @ 0x1404B533C (PpmParkSetLpiCap.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1404B54B0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckDelayedPeriodicStart @ 0x1404B54E0 (PpmCheckDelayedPeriodicStart.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404C0F80 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C0FC4 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x1404D3700 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1404F1120 (PpmHeteroHgsUpdateWorker.c)
 *     PpmPerfClearBootOverrides @ 0x1404F77C8 (PpmPerfClearBootOverrides.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140503A58 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14050BC78 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmCppcConfig @ 0x14060906C (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfConfig @ 0x1406093B4 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x140609648 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopIntSteerSetMode @ 0x140614DA0 (PopIntSteerSetMode.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x1407D1340 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmPerfReApplyStates @ 0x1407D139C (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1407D93C0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x1407E1804 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407E1A18 (PpmParkClearForcedMask.c)
 *     PpmRegisterProfiles @ 0x1407E6B9C (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407E6DF0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmInitializePepWpsSupport @ 0x1407E82E0 (PpmInitializePepWpsSupport.c)
 *     PpmProfileAcDcUpdate @ 0x1409C12F4 (PpmProfileAcDcUpdate.c)
 *     PpmApplyProfile @ 0x1409C15D8 (PpmApplyProfile.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1409FB634 (PpmSetProfilePolicySetting.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140ACBC98 (PpmPerfGetFrequencyBandStats.c)
 *     PdcPoPpmResetProfile @ 0x140AD84C0 (PdcPoPpmResetProfile.c)
 *     PpmEnableProfile @ 0x140AD850C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AD85C4 (PpmDisableProfile.c)
 *     PpmUpdatePerfStates @ 0x140AD8A50 (PpmUpdatePerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140AD8CF0 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AEBAB8 (PpmHvEnableQosEnlightenment.c)
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
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 22, a3);
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}
