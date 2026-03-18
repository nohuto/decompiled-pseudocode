/*
 * XREFs of PpmAcquireLock @ 0x140394F80
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028FBF0 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PoNotifyVSyncChange @ 0x140394330 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140394ED0 (PpmMediaBufferingWorker.c)
 *     PpmRegisterPerfCap @ 0x14044DCE0 (PpmRegisterPerfCap.c)
 *     PpmParkSetLpiCap @ 0x1404BBB5C (PpmParkSetLpiCap.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1404BBCD0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckDelayedPeriodicStart @ 0x1404BBD00 (PpmCheckDelayedPeriodicStart.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404C7670 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C76B4 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x1404DA020 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1404F7B10 (PpmHeteroHgsUpdateWorker.c)
 *     PpmPerfClearBootOverrides @ 0x1404FE288 (PpmPerfClearBootOverrides.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140509FA8 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140512208 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmCppcConfig @ 0x14060656C (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfConfig @ 0x1406068B4 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x140606B48 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopIntSteerSetMode @ 0x140611F60 (PopIntSteerSetMode.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x1407CE2A0 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmPerfReApplyStates @ 0x1407CE2FC (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1407D6210 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x1407DD1D8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407DD3EC (PpmParkClearForcedMask.c)
 *     PpmRegisterProfiles @ 0x1407E1B0C (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407E1D60 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmInitializePepWpsSupport @ 0x1407E3250 (PpmInitializePepWpsSupport.c)
 *     PpmProfileAcDcUpdate @ 0x140945984 (PpmProfileAcDcUpdate.c)
 *     PpmApplyProfile @ 0x140945C68 (PpmApplyProfile.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x140A3FC14 (PpmSetProfilePolicySetting.c)
 *     PdcPoPpmResetProfile @ 0x140A9C680 (PdcPoPpmResetProfile.c)
 *     PpmEnableProfile @ 0x140A9C6CC (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140A9C784 (PpmDisableProfile.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PpmHvEnableQosEnlightenment @ 0x140A9CE18 (PpmHvEnableQosEnlightenment.c)
 *     PpmUpdatePerfStates @ 0x140A9CEE0 (PpmUpdatePerfStates.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A9CFA0 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140AC9B88 (PpmPerfGetFrequencyBandStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x140AFCE20 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140B03E2C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmPerfTelemetryWorker @ 0x140B290E0 (PpmPerfTelemetryWorker.c)
 *     PopWnfFullscreenVideoCallback @ 0x140B486A0 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140B501F8 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140B5853C (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140B5A0CC (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140B64A0C (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140B6CD94 (PpmPerfGetVmPerfControlSupport.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140CD2D80 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140395420 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
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
