/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403B6230
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403B43BC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopDeepSleepResiliencyPhaseAccountingBegin(unsigned int a1, char a2)
{
  KIRQL v2; // bp
  signed int v6; // edi
  int v7; // eax

  v2 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread);
    KxAcquireSpinLock(&stru_140F10070.Spare35[1]);
  }
  dword_140F10CFC |= a1;
  while ( _BitScanForward((unsigned int *)&v6, a1) )
  {
    v7 = *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72];
    a1 &= a1 - 1;
    if ( _bittest(&v7, v6) )
      stru_140F10D00[v6] = KeQueryPerformanceCounter(0LL);
  }
  if ( !a2 )
  {
    KxReleaseSpinLock(&stru_140F10070.Spare35[1]);
    KeReleaseSpinLock((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread, v2);
  }
}
