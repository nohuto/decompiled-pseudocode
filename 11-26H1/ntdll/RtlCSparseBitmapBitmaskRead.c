/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x180005150
 * Callers:
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180004CE0 (RtlpHpFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x1800051D0 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasAppend @ 0x180005470 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x1800056F0 (RtlpHpExtrasSetPresent.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x180080D58 (RtlpHpReAllocateHeap.c)
 *     RtlpHpTagReAllocateHeap @ 0x180080F40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReallocComputeSizes @ 0x1800811E0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpHeapWalk @ 0x180094AEC (RtlpHpHeapWalk.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataCommit @ 0x1800E7268 (RtlpHpMetadataCommit.c)
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
