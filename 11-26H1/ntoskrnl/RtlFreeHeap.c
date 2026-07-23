/*
 * XREFs of RtlFreeHeap @ 0x140518F90
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x140492188 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlFreeHeapExport @ 0x14061C79C (RtlFreeHeapExport.c)
 *     RtlFreeHeapFull @ 0x14061C7CC (RtlFreeHeapFull.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( (unsigned int)RtlpHpExportType > 1 )
    return RtlFreeHeapExport(HeapHandle, Flags, BaseAddress);
  else
    return RtlFreeHeapFull(HeapHandle, Flags, BaseAddress);
}
