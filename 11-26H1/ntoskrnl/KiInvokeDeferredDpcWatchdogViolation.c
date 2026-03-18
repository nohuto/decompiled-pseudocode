/*
 * XREFs of KiInvokeDeferredDpcWatchdogViolation @ 0x1405FA410
 * Callers:
 *     KxDeferredDpcWatchdogViolation @ 0x140728520 (KxDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __noreturn KiInvokeDeferredDpcWatchdogViolation()
{
  KeBugCheckEx(
    0x133u,
    0LL,
    HIDWORD(KsepShimDbLock.MutantListHead.Flink),
    LODWORD(KsepShimDbLock.MutantListHead.Flink),
    (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
}
