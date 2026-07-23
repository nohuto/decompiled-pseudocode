/*
 * XREFs of RtlReAllocateHeapExport @ 0x180140180
 * Callers:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlReAllocateHeapExport(int a1)
{
  if ( RtlpHpExportType == 1 )
    return RtlReAllocateHeapFast(a1);
  else
    return RtlReAllocateHeapFull(a1);
}
