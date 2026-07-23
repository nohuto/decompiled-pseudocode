/*
 * XREFs of FsRtlLookupLargeMcbEntry @ 0x140414B90
 * Callers:
 *     FsRtlLookupMcbEntry @ 0x1405B7D50 (FsRtlLookupMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupBaseMcbEntry @ 0x140414C20 (FsRtlLookupBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLargeMcbEntry(
        PLARGE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCountFromLbn) = FsRtlLookupBaseMcbEntry(
                                 &Mcb->BaseMcb,
                                 Vbn,
                                 Lbn,
                                 SectorCountFromLbn,
                                 StartingLbn,
                                 SectorCountFromStartingLbn,
                                 Index);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)SectorCountFromLbn;
}
