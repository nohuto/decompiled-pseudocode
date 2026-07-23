/*
 * XREFs of RtlpHpLfhBucketCheckAndUpdate @ 0x1404C6EF8
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x1404C6F30 (RtlpHpLfhBucketUpdateStats.c)
 */

__int64 __fastcall RtlpHpLfhBucketCheckAndUpdate(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 8LL * a2 + 448) & 1) == 0 )
    result = *(_QWORD *)(a1 + 8LL * a2 + 448);
  if ( !result )
    return RtlpHpLfhBucketUpdateStats();
  return result;
}
