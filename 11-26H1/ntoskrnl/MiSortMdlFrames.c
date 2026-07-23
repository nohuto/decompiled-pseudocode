/*
 * XREFs of MiSortMdlFrames @ 0x1406F3A84
 * Callers:
 *     MiRemoveMdlPages @ 0x14086E5A4 (MiRemoveMdlPages.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
}
