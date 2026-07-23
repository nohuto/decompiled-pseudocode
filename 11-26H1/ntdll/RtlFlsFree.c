/*
 * XREFs of RtlFlsFree @ 0x180073470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  return RtlpFlsFree(&RtlpFlsContext);
}
