/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x18001A070
 * Callers:
 *     RtlpHpExtrasGet @ 0x1800192E0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180019C00 (RtlpHpFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x18001A0F0 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasAppend @ 0x18001A390 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x18001A610 (RtlpHpExtrasSetPresent.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlpHpHeapWalk @ 0x1800744FC (RtlpHpHeapWalk.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpFreeHeapSlow @ 0x180089330 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpMetadataCommit @ 0x18008DCD8 (RtlpHpMetadataCommit.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x1800B0E90 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x1800B11E4 (RtlpHpReAllocateHeap.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800B13D0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReallocComputeSizes @ 0x1800B1670 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
  {
    if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
      v2 = 2;
    else
      v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> a2) & 3LL;
  else
    return 0LL;
}
