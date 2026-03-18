/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403B63C4
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403B43BC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopDeepSleepResiliencyPhaseAccountingEnd(unsigned int a1, char a2)
{
  KIRQL v2; // si
  KIRQL v3; // bp
  LARGE_INTEGER PerformanceCounter; // r8
  bool i; // zf
  unsigned int v8; // edx
  int v9; // eax

  v2 = 0;
  v3 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread);
    v3 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140F10CFC &= ~a1;
  for ( i = !_BitScanForward(&v8, a1); !i; i = !_BitScanForward(&v8, a1) )
  {
    v9 = *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72];
    a1 &= a1 - 1;
    if ( _bittest(&v9, v8) )
    {
      *((_QWORD *)&stru_140F10828 + (int)v8 + 166) += PerformanceCounter.QuadPart
                                                    - *((_QWORD *)&stru_140F10828 + (int)v8 + 155);
      *((_QWORD *)&stru_140F10828 + (int)v8 + 155) = 0LL;
    }
  }
  if ( !a2 )
  {
    KeReleaseSpinLock(&stru_140F10070.Spare35[1], v3);
    KeReleaseSpinLock((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread, v2);
  }
}
