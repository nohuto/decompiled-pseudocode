/*
 * XREFs of RtlFreeHeap @ 0x14051C3A0
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x140498638 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlFreeHeapExport @ 0x140619740 (RtlFreeHeapExport.c)
 *     RtlFreeHeapFull @ 0x140619770 (RtlFreeHeapFull.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( (unsigned int)RtlpHpExportType > 1 )
    return RtlFreeHeapExport(HeapHandle, Flags, BaseAddress);
  else
    return RtlFreeHeapFull(HeapHandle, Flags, BaseAddress);
}
