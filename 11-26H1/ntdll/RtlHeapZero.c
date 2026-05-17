/*
 * XREFs of RtlHeapZero @ 0x1801642D0
 * Callers:
 *     RtlpHpVsContextAllocateFinalize @ 0x180013700 (RtlpHpVsContextAllocateFinalize.c)
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegAlloc @ 0x1800E0094 (RtlpHpSegAlloc.c)
 *     RtlpHpPgContextAllocate @ 0x18010CAD0 (RtlpHpPgContextAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHeapZero(_OWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _OWORD *v3; // r8
  unsigned __int64 v4; // rdx

  if ( a2 < 0x40 )
  {
    if ( a2 )
    {
      *a1 = 0LL;
      *(_OWORD *)((char *)a1 + a2 - 16) = 0LL;
      *(_OWORD *)((char *)a1 + ((a2 & 0x20) >> 1)) = 0LL;
    }
  }
  else if ( (qword_1801C6EE8 & 2) != 0 && a2 >= 0x320 )
  {
    return RtlpHeapZeroFastString();
  }
  else
  {
    v3 = (_OWORD *)((char *)a1 + a2 - 48);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) >> 6;
    do
    {
      *a1 = 0LL;
      a1[1] = 0LL;
      a1 += 4;
      --v4;
      *(a1 - 2) = 0LL;
      *(a1 - 1) = 0LL;
    }
    while ( v4 );
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  return result;
}
