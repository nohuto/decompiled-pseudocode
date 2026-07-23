/*
 * XREFs of RtlFlsAlloc @ 0x180072520
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsAlloc @ 0x180072548 (RtlpFlsAlloc.c)
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  return RtlpFlsAlloc(&RtlpFlsContext, (__int64)FlsIndex);
}
