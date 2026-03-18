/*
 * XREFs of RtlpHpLfhBucketCheckAndUpdate @ 0x1404CD4C4
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140397A80 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x140520DB8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x1404CD4FC (RtlpHpLfhBucketUpdateStats.c)
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
