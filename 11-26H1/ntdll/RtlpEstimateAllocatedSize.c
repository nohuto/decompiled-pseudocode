/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x1800724E8
 * Callers:
 *     RtlpLogHeapCreateEvent @ 0x180071D10 (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x180072298 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapContractEvent @ 0x180072390 (RtlpLogHeapContractEvent.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180072680 (RtlpQueryExtendedInformationHeap.c)
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
