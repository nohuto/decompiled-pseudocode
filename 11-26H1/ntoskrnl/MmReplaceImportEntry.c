/*
 * XREFs of MmReplaceImportEntry @ 0x1406E7088
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1407BDD24 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140C35EF8 (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140C35F54 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140C35FDC (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 */

void __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3)
{
  MiReplaceImportEntry(a1, a2, a3);
}
