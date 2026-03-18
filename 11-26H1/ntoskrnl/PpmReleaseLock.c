/*
 * XREFs of PpmReleaseLock @ 0x14037AFBC
 * Callers:
 *     PpmCheckRun @ 0x140256BB0 (PpmCheckRun.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028FBF0 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PoNotifyVSyncChange @ 0x140394330 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140394ED0 (PpmMediaBufferingWorker.c)
 *     PpmRegisterPerfCap @ 0x14044DCE0 (PpmRegisterPerfCap.c)
 *     PpmParkSetLpiCap @ 0x1404BBB5C (PpmParkSetLpiCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404C7670 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C76B4 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x1404DA020 (PopDeepSleepEvaluateCallback.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140509FA8 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140512208 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmCppcConfig @ 0x14060656C (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfConfig @ 0x1406068B4 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x140606B48 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x1407CE2A0 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x1407DD1D8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407DD3EC (PpmParkClearForcedMask.c)
 *     PpmRegisterProfiles @ 0x1407E1B0C (PpmRegisterProfiles.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407E1D60 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmApplyProfile @ 0x140945C68 (PpmApplyProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140945E50 (PpmCompareAndApplyPolicySettings.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PdcPoPpmResetProfile @ 0x140A9C680 (PdcPoPpmResetProfile.c)
 *     PpmDisableProfile @ 0x140A9C784 (PpmDisableProfile.c)
 *     PpmInfoReleaseLocks @ 0x140A9C9D4 (PpmInfoReleaseLocks.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PpmUpdatePerfStates @ 0x140A9CEE0 (PpmUpdatePerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
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
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
  {
    v5 = 22;
    KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v5);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4);
  }
  return result;
}
