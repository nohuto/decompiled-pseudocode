/*
 * XREFs of RtlpGetLFHContext @ 0x180095488
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpInitializeSegmentInfoForBucket @ 0x1800954EC (RtlpInitializeSegmentInfoForBucket.c)
 */

__int64 __fastcall RtlpGetLFHContext(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx

  if ( a1
    && a2 <= RtlpLargestLfhBlock
    && (v2 = (a2 + 23) >> 4, v3 = RtlpLfhBucketIndexMap[v2 - 1], (unsigned int)v3 < 0x81)
    && (*(_QWORD *)(a1 + 8 * v3 + 1192)
     || (int)RtlpInitializeSegmentInfoForBucket(a1, RtlpLfhBucketIndexMap[v2 - 1]) >= 0) )
  {
    return (unsigned __int16)v3;
  }
  else
  {
    return 0xFFFFLL;
  }
}
