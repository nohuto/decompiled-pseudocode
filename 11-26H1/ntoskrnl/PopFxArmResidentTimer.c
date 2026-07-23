/*
 * XREFs of PopFxArmResidentTimer @ 0x14021B998
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x1402031F0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutRoutine @ 0x140395980 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PopFxArmResidentTimer(char a1)
{
  KIRQL v2; // di

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&PopFxBlockingDeviceListLock.216);
  if ( a1 )
    BYTE4(PopFxBlockingDeviceListLock.StackBase) = 0;
  if ( !BYTE4(PopFxBlockingDeviceListLock.StackBase) && SLODWORD(PopFxBlockingDeviceListLock.StackBase) > 0 )
  {
    BYTE4(PopFxBlockingDeviceListLock.StackBase) = 1;
    KeSetCoalescableTimer(
      (PKTIMER)&PopFxBlockingDeviceListLock.152,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxActiveIdleTimeout),
      0,
      (unsigned int)PopFxActiveIdleTimeout >> 1,
      (PKDPC)&PopFxBlockingDeviceListLock.KernelStack);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&PopFxBlockingDeviceListLock.216, v2);
}
