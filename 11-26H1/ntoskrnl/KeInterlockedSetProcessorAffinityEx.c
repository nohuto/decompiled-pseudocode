/*
 * XREFs of KeInterlockedSetProcessorAffinityEx @ 0x140420700
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     PpmParkReportParkedCore @ 0x140254E74 (PpmParkReportParkedCore.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403364D0 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     PpmParkReportSoftParkChange @ 0x140420608 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x140420758 (PpmParkReportForceParkChange.c)
 *     KiStartProfileTarget @ 0x1404C89E0 (KiStartProfileTarget.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404EAE58 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     KiProcessNMI @ 0x1405EE3D0 (KiProcessNMI.c)
 *     KeDeepSleepProcessor @ 0x1405F3464 (KeDeepSleepProcessor.c)
 *     KiStartIdleThread @ 0x1405F9500 (KiStartIdleThread.c)
 *     PpmTestAndLockProcessor @ 0x140605F08 (PpmTestAndLockProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedSetProcessorAffinityEx(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + a2);
  v4 = v3 >> 6;
  if ( *(unsigned __int16 *)(a1 + 2) <= (unsigned int)v4 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8 * v4 + 8));
  return ((1LL << v3) & _InterlockedOr64((volatile signed __int64 *)(a1 + 8 * v4 + 8), 1LL << v3)) != 0;
}
