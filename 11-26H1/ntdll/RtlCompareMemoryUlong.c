/*
 * XREFs of RtlCompareMemoryUlong @ 0x180163260
 * Callers:
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180024F50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180028190 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180028890 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapSegment @ 0x1800DD034 (RtlpValidateHeapSegment.c)
 *     RtlpHpParametersVerify @ 0x180100E90 (RtlpHpParametersVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareMemoryUlong(_DWORD *a1, unsigned __int64 a2, int a3)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v5 = a2 >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *a1++ == a3;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
