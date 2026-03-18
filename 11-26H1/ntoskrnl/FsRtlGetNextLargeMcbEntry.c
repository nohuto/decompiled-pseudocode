/*
 * XREFs of FsRtlGetNextLargeMcbEntry @ 0x14042F1F0
 * Callers:
 *     FsRtlGetNextMcbEntry @ 0x1405B53E0 (FsRtlGetNextMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlGetNextBaseMcbEntry @ 0x14042F260 (FsRtlGetNextBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlGetNextLargeMcbEntry(
        PLARGE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlGetNextBaseMcbEntry(&Mcb->BaseMcb, RunIndex, Vbn, Lbn, SectorCount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
