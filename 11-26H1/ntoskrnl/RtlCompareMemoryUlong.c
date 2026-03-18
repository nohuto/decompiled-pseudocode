/*
 * XREFs of RtlCompareMemoryUlong @ 0x140730E10
 * Callers:
 *     RtlScrubMemory @ 0x140413C54 (RtlScrubMemory.c)
 *     MiHashIsCommon @ 0x1404880D8 (MiHashIsCommon.c)
 *     RtlpAllocateHeap @ 0x14052125C (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061B020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14061B414 (RtlpCreateSplitBlock.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406E8B80 (MiFreedUnusedPfnPagesDpc.c)
 *     MiZeroHugeRangeWorker @ 0x1407055C0 (MiZeroHugeRangeWorker.c)
 *     MiQueryInitializeRestrictedVa @ 0x140774004 (MiQueryInitializeRestrictedVa.c)
 *     IopTrackLink @ 0x140ACE24C (IopTrackLink.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
