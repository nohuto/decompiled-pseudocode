/*
 * XREFs of PopFxUpdateDeviceIRPhaseAccounting @ 0x14042C9FC
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x14042C978 (PopFxSetDripsBlockedByDeviceActivity.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x14042D5E8 (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxUpdateDeviceIRPhaseAccounting(char a1)
{
  KIRQL v2; // bl
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
  if ( LOBYTE(stru_140F10828.Padding[3]) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a1 )
      stru_140F10828.Padding[2] = PerformanceCounter.QuadPart;
    else
      ((void (__fastcall *)(_QWORD))PopFxAccumulateDeviceIRPhaseAccounting)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
  KeReleaseSpinLock(&stru_140F10070.Spare35[1], v2);
}
