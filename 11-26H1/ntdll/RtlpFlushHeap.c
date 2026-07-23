/*
 * XREFs of RtlpFlushHeap @ 0x1800020DC
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x1800020C0 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpCollectFreeBlocks @ 0x180002140 (RtlpCollectFreeBlocks.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 *     RtlTryEnterCriticalSection @ 0x18000C670 (RtlTryEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
