/*
 * XREFs of _local_unwind @ 0x140536000
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14046E6C0 (CmpEnableLazyFlushDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x1404BAE80 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1404C6DD0 (KiBalanceSetManagerDeferredRoutine.c)
 *     IopTimerDispatch @ 0x1404D3F80 (IopTimerDispatch.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404EF780 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1404FD9A0 (ExpCenturyDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x140607D20 (PopThermalZoneDpc.c)
 *     ExpTimeZoneDpcRoutine @ 0x1406CB350 (ExpTimeZoneDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1406CF5A0 (ExpTimerDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x140839458 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt1 @ 0x140CCC0B0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140CCC100 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140CCC2E0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140CCC370 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140CCC3C0 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140CCC420 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140CCC480 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140CCC4E0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140CCC540 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140CCC5A0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140CCC600 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140CCC660 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140CCC6C0 (KiVerifyXcpt9.c)
 *     KiVerifyXcptFinally @ 0x140CCC750 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x1403D65D0 (RtlUnwind.c)
 */

__int64 __fastcall local_unwind(ULONG_PTR a1, __int64 a2)
{
  return RtlUnwind(a1, a2, 0LL, 0LL);
}
