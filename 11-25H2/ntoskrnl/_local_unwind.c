/*
 * XREFs of _local_unwind @ 0x1404FB6F0
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x14046CBD0 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140489960 (KiBalanceSetManagerDeferredRoutine.c)
 *     IopTimerDispatch @ 0x1404963F0 (IopTimerDispatch.c)
 *     ExpTimerDpcRoutine @ 0x1404970A0 (ExpTimerDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404ADBC0 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1404BBC60 (ExpCenturyDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1405CF690 (PopThermalZoneDpc.c)
 *     ExpTimeZoneDpcRoutine @ 0x140647840 (ExpTimeZoneDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x14065C480 (CmpEnableLazyFlushDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x1407AA258 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt1 @ 0x140C19500 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140C19550 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140C19720 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140C197B0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140C19800 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140C19860 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140C198B0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140C19900 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140C19950 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140C199A0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140C19A00 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140C19A60 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140C19AC0 (KiVerifyXcpt9.c)
 *     KiVerifyXcptFinally @ 0x140C19B4C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x14025DB00 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
