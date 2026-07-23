/*
 * XREFs of RtlAllocateHeapExport @ 0x18013FC50
 * Callers:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAllocateHeapExport(void *a1)
{
  if ( RtlpHpExportType == 1 )
    return RtlAllocateHeapFast(a1);
  else
    return RtlAllocateHeapFull(a1);
}
