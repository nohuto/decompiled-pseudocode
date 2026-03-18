/*
 * XREFs of RtlAllocateHeap @ 0x14051C360
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeapExport @ 0x140619688 (RtlAllocateHeapExport.c)
 *     RtlAllocateHeapFull @ 0x1406196B8 (RtlAllocateHeapFull.c)
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  if ( (unsigned int)RtlpHpExportType > 1 )
    return (PVOID)RtlAllocateHeapExport(HeapHandle, Flags, Size);
  else
    return (PVOID)RtlAllocateHeapFull(HeapHandle);
}
