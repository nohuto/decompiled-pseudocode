/*
 * XREFs of KiResetClockIntervalOneShot @ 0x14040D06C
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140220830 (KiCheckForTimerExpiration.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x14040D2D0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiCancelClockTimer @ 0x14040D864 (KiCancelClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockIntervalOneShot(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = KiClockOwnerOneShotRequest;
  if ( KiClockOwnerOneShotRequest )
  {
    LOBYTE(a3) = 1;
    PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL, a3);
    KiClockOwnerOneShotRequest = 0LL;
    if ( KiClockTimerPerCpuTickScheduling )
      return KiCancelClockTimer(KeGetCurrentPrcb(), 2LL);
    else
      return KiSetClockIntervalToMinimumRequested();
  }
  return result;
}
