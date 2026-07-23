/*
 * XREFs of KiDeferDpcWatchdogViolation @ 0x14050FA58
 * Callers:
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 * Callees:
 *     KeRelaxTimingConstraints @ 0x1405EB750 (KeRelaxTimingConstraints.c)
 */

signed __int64 KiDeferDpcWatchdogViolation()
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)&KsepShimDbLock.PriorityFloorCounts[16],
             (signed __int64)CurrentPrcb,
             0LL);
  if ( !result )
  {
    KeRelaxTimingConstraints(1LL);
    KsepShimDbLock.PriorityFloorSummary = CurrentPrcb->DpcTimeCount;
    result = CurrentPrcb->DpcTimeLimitTicks;
    *(_DWORD *)&KsepShimDbLock.PriorityFloorCounts[28] = CurrentPrcb->DpcTimeLimitTicks;
  }
  return result;
}
