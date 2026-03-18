/*
 * XREFs of MiLookupFixupExtentByPte @ 0x1404CBA54
 * Callers:
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiResolveMappedFileFaultGetCopyExtents @ 0x1406F7854 (MiResolveMappedFileFaultGetCopyExtents.c)
 *     MiEliminateOverlappingExtents @ 0x1406F96E4 (MiEliminateOverlappingExtents.c)
 * Callees:
 *     bsearch @ 0x140536920 (bsearch.c)
 */

void *__fastcall MiLookupFixupExtentByPte(__int64 a1, const void *a2)
{
  return bsearch(
           a2,
           (const void *)(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 48) + 8LL),
           **(unsigned int **)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 48),
           8uLL,
           MiFixupExtentCompare);
}
