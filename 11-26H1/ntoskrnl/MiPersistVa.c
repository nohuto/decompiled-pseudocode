/*
 * XREFs of MiPersistVa @ 0x1406FF85C
 * Callers:
 *     MiPurgeFileOnlyPfn @ 0x1404C54C4 (MiPurgeFileOnlyPfn.c)
 *     MiPersistMdl @ 0x140501A38 (MiPersistMdl.c)
 *     MiCopyFilePage @ 0x1406FE0B0 (MiCopyFilePage.c)
 * Callees:
 *     MiPersistMemory @ 0x1406FF834 (MiPersistMemory.c)
 */

void __fastcall MiPersistVa(void *a1)
{
  if ( !byte_140E2D899 )
    MiPersistMemory(a1, 0x1000u);
}
