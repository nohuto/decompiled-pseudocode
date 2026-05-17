/*
 * XREFs of RtlFreeHeapExport @ 0x1801400C0
 * Callers:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 * Callees:
 *     <none>
 */

__int64 RtlFreeHeapExport()
{
  if ( RtlpHpExportType == 1 )
    return RtlFreeHeapFast();
  else
    return RtlFreeHeapFull();
}
