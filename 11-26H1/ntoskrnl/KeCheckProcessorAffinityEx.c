/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x14042D260
 * Callers:
 *     KiComputeThreadAffinity @ 0x140229B90 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022B26C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     PpmParkReportParkedCore @ 0x140253514 (PpmParkReportParkedCore.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028FA08 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmExitCoordinatedIdle @ 0x1403EC374 (PpmExitCoordinatedIdle.c)
 *     KiForwardTick @ 0x1403ED6F0 (KiForwardTick.c)
 *     KiCheckKeepAlive @ 0x1403EF0E4 (KiCheckKeepAlive.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x14042BAD8 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmParkReportSoftParkChange @ 0x14042BF38 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x14042C088 (PpmParkReportForceParkChange.c)
 *     KiStopProfileTarget @ 0x14042CA60 (KiStopProfileTarget.c)
 *     PpmUpdatePlatformIdleVeto @ 0x14042CC80 (PpmUpdatePlatformIdleVeto.c)
 *     KiProcessProfileList @ 0x1404B7C3C (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x1404CEFB0 (KiStartProfileTarget.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1404FC8E0 (KiGetNextTimerExpirationDueTime.c)
 *     EmonEnableMonitoring @ 0x140595350 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x140596260 (EmonRemoveProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1405A3B40 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x1405A4AC0 (Amd64RemoveProfileSource.c)
 *     KeUpdateProcessorRestrictions @ 0x1405E9610 (KeUpdateProcessorRestrictions.c)
 *     KiGetNextClockOwner @ 0x1405EE394 (KiGetNextClockOwner.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140601910 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x140603458 (PpmTestAndLockProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     KiSetCacheInformationAmd @ 0x140BF70E8 (KiSetCacheInformationAmd.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140CD3884 (PopReadLegacySimulatedArchitecturalClasses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * a2);
  v4 = v3 >> 6;
  if ( (unsigned int)v4 >= *a1 )
    return 0LL;
  else
    return (*(_QWORD *)&a1[4 * v4 + 4] >> v3) & 1LL;
}
