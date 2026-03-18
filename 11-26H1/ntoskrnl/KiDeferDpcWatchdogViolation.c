/*
 * XREFs of KiDeferDpcWatchdogViolation @ 0x140515FE8
 * Callers:
 *     KeAccumulateTicks @ 0x14021F980 (KeAccumulateTicks.c)
 * Callees:
 *     KeRelaxTimingConstraints @ 0x1405E8DE0 (KeRelaxTimingConstraints.c)
 */

signed __int64 KiDeferDpcWatchdogViolation()
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)&KsepShimDbLock.MutantListHead.Blink,
             (signed __int64)CurrentPrcb,
             0LL);
  if ( !result )
  {
    KeRelaxTimingConstraints(1LL);
    HIDWORD(KsepShimDbLock.MutantListHead.Flink) = CurrentPrcb->DpcTimeCount;
    result = CurrentPrcb->DpcTimeLimitTicks;
    LODWORD(KsepShimDbLock.MutantListHead.Flink) = CurrentPrcb->DpcTimeLimitTicks;
  }
  return result;
}
