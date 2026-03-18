/*
 * XREFs of FsRtlSplitLargeMcb @ 0x1405B5790
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlSplitBaseMcb @ 0x1405B5610 (FsRtlSplitBaseMcb.c)
 */

BOOLEAN __stdcall FsRtlSplitLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Amount) = FsRtlSplitBaseMcb(&Mcb->BaseMcb, Vbn, Amount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return Amount;
}
