/*
 * XREFs of _local_unwind @ 0x140538480
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140467E40 (CmpEnableLazyFlushDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x1404B4660 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1404C0780 (KiBalanceSetManagerDeferredRoutine.c)
 *     IopTimerDispatch @ 0x1404CD7F0 (IopTimerDispatch.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404E8D60 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1404F6EE0 (ExpCenturyDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x14060A8D0 (PopThermalZoneDpc.c)
 *     ExpTimeZoneDpcRoutine @ 0x1406CF380 (ExpTimeZoneDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1406D35D0 (ExpTimerDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x14083F698 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt1 @ 0x140CD2210 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140CD2260 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140CD2440 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140CD24D0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140CD2520 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140CD2580 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140CD25E0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140CD2640 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140CD26A0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140CD2700 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140CD2760 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140CD27C0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140CD2820 (KiVerifyXcpt9.c)
 *     KiVerifyXcptFinally @ 0x140CD28B0 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x1403D95A0 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
