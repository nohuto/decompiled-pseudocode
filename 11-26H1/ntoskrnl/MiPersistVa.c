/*
 * XREFs of MiPersistVa @ 0x1406FAB8C
 * Callers:
 *     MiPurgeFileOnlyPfn @ 0x1404CBA94 (MiPurgeFileOnlyPfn.c)
 *     MiPersistMdl @ 0x140508064 (MiPersistMdl.c)
 *     MiCopyFilePage @ 0x1406F93E0 (MiCopyFilePage.c)
 * Callees:
 *     MiPersistMemory @ 0x1406FAB64 (MiPersistMemory.c)
 */

void __fastcall MiPersistVa(void *a1)
{
  if ( !byte_140E2D719 )
    MiPersistMemory(a1, 0x1000u);
}
