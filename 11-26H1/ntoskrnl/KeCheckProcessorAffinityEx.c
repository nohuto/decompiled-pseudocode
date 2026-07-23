/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x140421930
 * Callers:
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     PpmParkReportParkedCore @ 0x140254E74 (PpmParkReportParkedCore.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmExitCoordinatedIdle @ 0x1402F93B8 (PpmExitCoordinatedIdle.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1404201A8 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmParkReportSoftParkChange @ 0x140420608 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x140420758 (PpmParkReportForceParkChange.c)
 *     KiStopProfileTarget @ 0x140421130 (KiStopProfileTarget.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140421350 (PpmUpdatePlatformIdleVeto.c)
 *     KiForwardTick @ 0x140452220 (KiForwardTick.c)
 *     KiCheckKeepAlive @ 0x140453C14 (KiCheckKeepAlive.c)
 *     KiProcessProfileList @ 0x1404B146C (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x1404C89E0 (KiStartProfileTarget.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1404F5E20 (KiGetNextTimerExpirationDueTime.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonEnableMonitoring @ 0x140597AD0 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x1405989E0 (EmonRemoveProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1405A6350 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x1405A72D0 (Amd64RemoveProfileSource.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 *     KiGetNextClockOwner @ 0x1405F0D04 (KiGetNextClockOwner.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1406043C0 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x140605F08 (PpmTestAndLockProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     KiSetCacheInformationAmd @ 0x140BFD0E8 (KiSetCacheInformationAmd.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140CD9A24 (PopReadLegacySimulatedArchitecturalClasses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + a2);
  v4 = v3 >> 6;
  if ( (unsigned int)v4 >= *a1 )
    return 0LL;
  else
    return (*(_QWORD *)&a1[4 * v4 + 4] >> v3) & 1LL;
}
