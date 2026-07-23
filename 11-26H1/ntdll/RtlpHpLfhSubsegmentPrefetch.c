/*
 * XREFs of RtlpHpLfhSubsegmentPrefetch @ 0x1800BEC50
 * Callers:
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1800BED00 (RtlpHpLfhSubsegmentPrefetchRange.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentPrefetch(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v8; // rdx

  result = 4294901760LL;
  v6 = (a3 + a4 + 0xFFFF) & 0xFFFF0000;
  v8 = (a4 * (*(unsigned __int16 *)(a2 + 48) + 1) + 0xFFFF) & 0xFFFF0000;
  if ( v6 > (unsigned int)v8 )
  {
    RtlpHpLfhSubsegmentPrefetchRange(a2, v8, v6 - (unsigned int)v8, 1LL);
    result = *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72);
    *(_WORD *)(a2 + 48) = ((result
                          * (unsigned __int64)(v6
                                             - (WORD1(qword_1801C5EC8) ^ *(unsigned __int16 *)(a2 + 42) ^ ((unsigned int)(a2 >> 12) >> 16)))) >> 32)
                        - 1;
  }
  return result;
}
