/*
 * XREFs of MiUnlockAndFreeDvPatchImage @ 0x1406FBA88
 * Callers:
 *     MiLockPatchIatForDV @ 0x1406FAF50 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MiUnlockDriverPages @ 0x140AC7404 (MiUnlockDriverPages.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndFreeDvPatchImage(char *P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 15);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
    IoFreeMdl(*((PMDL *)P + 15));
  }
  MiUnlockDriverPages(P + 16);
  ExFreePoolWithTag(P, 0);
}
