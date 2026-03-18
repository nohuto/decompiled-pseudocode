/*
 * XREFs of RtlHeapZero @ 0x1407322C0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x140249DB0 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x14034B0CC (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034C7D0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLargeAlloc @ 0x140351D9C (RtlpHpLargeAlloc.c)
 *     RtlpHpAllocVA @ 0x140364350 (RtlpHpAllocVA.c)
 *     RtlpHpAllocateHeap @ 0x140397A80 (RtlpHpAllocateHeap.c)
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x140520DB8 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpPgContextAllocate @ 0x14063A000 (RtlpHpPgContextAllocate.c)
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
  else if ( (PspTlsContext.WaitBlockFill5[32] & 2) != 0 && a2 >= 0x320 )
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
