/*
 * XREFs of FsRtlSplitLargeMcb @ 0x1405B7FA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlSplitBaseMcb @ 0x1405B7E20 (FsRtlSplitBaseMcb.c)
 */

BOOLEAN __stdcall FsRtlSplitLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Amount) = FsRtlSplitBaseMcb(&Mcb->BaseMcb, Vbn, Amount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return Amount;
}
