/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x140420840
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x140254CCC (PpmParkReportUnparkedCore.c)
 *     PpmUnlockProcessors @ 0x1402F9270 (PpmUnlockProcessors.c)
 *     PpmParkReportSoftParkChange @ 0x140420608 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x140420758 (PpmParkReportForceParkChange.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404EAE58 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     KiProcessNMI @ 0x1405EE3D0 (KiProcessNMI.c)
 *     KeDeepSleepProcessor @ 0x1405F3464 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     PpmTestAndLockProcessor @ 0x140605F08 (PpmTestAndLockProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedClearProcessorAffinityEx(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + a2);
  v4 = v3 >> 6;
  if ( *(unsigned __int16 *)(a1 + 2) <= (unsigned int)v4 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8 * v4 + 8));
  return ((1LL << v3) & _InterlockedAnd64((volatile signed __int64 *)(a1 + 8 * v4 + 8), ~(1LL << v3))) != 0;
}
