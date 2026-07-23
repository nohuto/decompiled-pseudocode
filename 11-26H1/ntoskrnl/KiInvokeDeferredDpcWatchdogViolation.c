/*
 * XREFs of KiInvokeDeferredDpcWatchdogViolation @ 0x1405FCE30
 * Callers:
 *     KxDeferredDpcWatchdogViolation @ 0x14072D0F0 (KxDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __noreturn KiInvokeDeferredDpcWatchdogViolation()
{
  KeBugCheckEx(
    0x133u,
    0LL,
    KsepShimDbLock.PriorityFloorSummary,
    *(unsigned int *)&KsepShimDbLock.PriorityFloorCounts[28],
    (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
}
