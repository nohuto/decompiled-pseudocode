/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x1403B4910
 * Callers:
 *     FsRtlAddMcbEntry @ 0x1405B53C0 (FsRtlAddMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlAddBaseMcbEntry @ 0x1403B5010 (FsRtlAddBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn, SectorCount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}
