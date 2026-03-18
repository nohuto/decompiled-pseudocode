/*
 * XREFs of PopFxArmResidentTimer @ 0x14021A008
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x140203110 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutRoutine @ 0x140393C00 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PopFxArmResidentTimer(char a1)
{
  KIRQL v2; // di

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140F12420.KernelStack);
  if ( a1 )
    BYTE4(stru_140F12420.KernelStack) = 0;
  if ( !BYTE4(stru_140F12420.KernelStack) && *((int *)&stru_140F12420.SwapListEntry + 2) > 0 )
  {
    BYTE4(stru_140F12420.KernelStack) = 1;
    KeSetCoalescableTimer(
      &stru_140F12420.Timer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxActiveIdleTimeout),
      0,
      (unsigned int)PopFxActiveIdleTimeout >> 1,
      (PKDPC)&stru_140F12420.SystemCallNumber);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140F12420.KernelStack, v2);
}
