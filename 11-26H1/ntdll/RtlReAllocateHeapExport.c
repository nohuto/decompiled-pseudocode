/*
 * XREFs of RtlReAllocateHeapExport @ 0x180140280
 * Callers:
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 * Callees:
 *     <none>
 */

__int64 RtlReAllocateHeapExport()
{
  if ( RtlpHpExportType == 1 )
    return RtlReAllocateHeapFast();
  else
    return RtlReAllocateHeapFull();
}
