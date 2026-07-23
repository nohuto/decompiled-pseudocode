/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x1800951F0
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180092C70 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpLogHeapContractEvent @ 0x180095098 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x18009574C (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapCreateEvent @ 0x180095894 (RtlpLogHeapCreateEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpEstimateAllocatedSize(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 418) == 2 )
  {
    v2 = *(_QWORD *)(a1 + 408);
    if ( v2 )
      result -= *(_QWORD *)(v2 + 72);
  }
  return result;
}
