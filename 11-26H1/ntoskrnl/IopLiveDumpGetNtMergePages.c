/*
 * XREFs of IopLiveDumpGetNtMergePages @ 0x1405CFEC8
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D304C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1405CF9D0 (IopLiveDumpGetCapturePagesNoLock.c)
 */

void __fastcall IopLiveDumpGetNtMergePages(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4, _QWORD *a5)
{
  IopLiveDumpGetCapturePagesNoLock(
    (unsigned __int64 *)(a1 + 544),
    a1 + 680,
    a2,
    BufferChunkSizeInPages,
    a4,
    a5,
    (*(_DWORD *)(a1 + 80) & 0x20000) != 0);
  if ( *a4 )
    *a3 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * *a5);
}
