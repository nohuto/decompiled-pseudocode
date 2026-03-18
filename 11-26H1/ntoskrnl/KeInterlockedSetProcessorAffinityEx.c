/*
 * XREFs of KeInterlockedSetProcessorAffinityEx @ 0x14042C030
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     PpmParkReportParkedCore @ 0x140253514 (PpmParkReportParkedCore.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403344A0 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     PpmParkReportSoftParkChange @ 0x14042BF38 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x14042C088 (PpmParkReportForceParkChange.c)
 *     KiStartProfileTarget @ 0x1404CEFB0 (KiStartProfileTarget.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404F1878 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     KiProcessNMI @ 0x1405EBA60 (KiProcessNMI.c)
 *     KeDeepSleepProcessor @ 0x1405F0AF4 (KeDeepSleepProcessor.c)
 *     KiStartIdleThread @ 0x1405F6B40 (KiStartIdleThread.c)
 *     PpmTestAndLockProcessor @ 0x140603458 (PpmTestAndLockProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedSetProcessorAffinityEx(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * a2);
  v4 = v3 >> 6;
  if ( *(unsigned __int16 *)(a1 + 2) <= (unsigned int)v4 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8 * v4 + 8));
  return ((1LL << v3) & _InterlockedOr64((volatile signed __int64 *)(a1 + 8 * v4 + 8), 1LL << v3)) != 0;
}
