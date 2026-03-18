/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x14042C170
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x14025336C (PpmParkReportUnparkedCore.c)
 *     PpmUnlockProcessors @ 0x1403EC22C (PpmUnlockProcessors.c)
 *     PpmParkReportSoftParkChange @ 0x14042BF38 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x14042C088 (PpmParkReportForceParkChange.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404F1878 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     KiProcessNMI @ 0x1405EBA60 (KiProcessNMI.c)
 *     KeDeepSleepProcessor @ 0x1405F0AF4 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     PpmTestAndLockProcessor @ 0x140603458 (PpmTestAndLockProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedClearProcessorAffinityEx(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * a2);
  v4 = v3 >> 6;
  if ( *(unsigned __int16 *)(a1 + 2) <= (unsigned int)v4 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8 * v4 + 8));
  return ((1LL << v3) & _InterlockedAnd64((volatile signed __int64 *)(a1 + 8 * v4 + 8), ~(1LL << v3))) != 0;
}
