/*
 * XREFs of MiLookupFixupExtentByPte @ 0x1404C5484
 * Callers:
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiResolveMappedFileFaultGetCopyExtents @ 0x1406FC4C4 (MiResolveMappedFileFaultGetCopyExtents.c)
 *     MiEliminateOverlappingExtents @ 0x1406FE3B4 (MiEliminateOverlappingExtents.c)
 * Callees:
 *     bsearch @ 0x140538DA0 (bsearch.c)
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
