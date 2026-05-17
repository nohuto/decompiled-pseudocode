/*
 * XREFs of RtlpFlushHeap @ 0x180016FFC
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180016FE0 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpCollectFreeBlocks @ 0x180017060 (RtlpCollectFreeBlocks.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800175A0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlTryEnterCriticalSection @ 0x1800215A0 (RtlTryEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  return 0LL;
}
