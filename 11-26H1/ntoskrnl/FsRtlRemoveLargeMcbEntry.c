/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x1404E8CA0
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x1405B55F0 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x1403B4AD0 (FsRtlRemoveBaseMcbEntry.c)
 */

void __stdcall FsRtlRemoveLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  unsigned int v3; // edi
  unsigned int v4; // esi

  v3 = SectorCount;
  v4 = Vbn;
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlRemoveBaseMcbEntry(&Mcb->BaseMcb, v4, v3);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
