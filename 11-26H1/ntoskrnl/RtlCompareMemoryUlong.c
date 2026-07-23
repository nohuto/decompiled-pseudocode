/*
 * XREFs of RtlCompareMemoryUlong @ 0x1407359E0
 * Callers:
 *     RtlScrubMemory @ 0x140408284 (RtlScrubMemory.c)
 *     MiHashIsCommon @ 0x140481C18 (MiHashIsCommon.c)
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061E070 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14061E464 (RtlpCreateSplitBlock.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406ED820 (MiFreedUnusedPfnPagesDpc.c)
 *     MiZeroHugeRangeWorker @ 0x14070A290 (MiZeroHugeRangeWorker.c)
 *     MiQueryInitializeRestrictedVa @ 0x140777004 (MiQueryInitializeRestrictedVa.c)
 *     IopTrackLink @ 0x140AD048C (IopTrackLink.c)
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
