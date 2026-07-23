/*
 * XREFs of RtlFreeHeapExport @ 0x18013FFC0
 * Callers:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFreeHeapExport(int a1)
{
  if ( RtlpHpExportType == 1 )
    return RtlFreeHeapFast(a1);
  else
    return RtlFreeHeapFull(a1);
}
