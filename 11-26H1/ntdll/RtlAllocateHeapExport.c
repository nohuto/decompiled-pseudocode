/*
 * XREFs of RtlAllocateHeapExport @ 0x18013FD50
 * Callers:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 * Callees:
 *     <none>
 */

__int64 RtlAllocateHeapExport()
{
  if ( RtlpHpExportType == 1 )
    return RtlAllocateHeapFast();
  else
    return RtlAllocateHeapFull();
}
