/*
 * XREFs of MmReplaceImportEntry @ 0x1406EBD38
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1407C0D84 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140C3BF08 (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140C3BF64 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140C3BFEC (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 */

void __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3)
{
  MiReplaceImportEntry(a1, a2, a3);
}
