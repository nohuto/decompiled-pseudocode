/*
 * XREFs of PopFxUpdateDeviceIRPhaseAccounting @ 0x1404210CC
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x140421048 (PopFxSetDripsBlockedByDeviceActivity.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x140421CB8 (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxUpdateDeviceIRPhaseAccounting(char a1)
{
  KIRQL v2; // bl
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( byte_140F100F8 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a1 )
      qword_140F100F0 = PerformanceCounter.QuadPart;
    else
      ((void (__fastcall *)(_QWORD))PopFxAccumulateDeviceIRPhaseAccounting)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
