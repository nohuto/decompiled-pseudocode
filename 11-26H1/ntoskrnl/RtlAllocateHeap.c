/*
 * XREFs of RtlAllocateHeap @ 0x140518F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeapExport @ 0x14061C6E4 (RtlAllocateHeapExport.c)
 *     RtlAllocateHeapFull @ 0x14061C714 (RtlAllocateHeapFull.c)
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  if ( (unsigned int)RtlpHpExportType > 1 )
    return (PVOID)RtlAllocateHeapExport(HeapHandle, Flags, Size);
  else
    return (PVOID)RtlAllocateHeapFull(HeapHandle);
}
