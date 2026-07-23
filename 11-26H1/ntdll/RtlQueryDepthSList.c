/*
 * XREFs of RtlQueryDepthSList @ 0x1800D44A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WORD __stdcall RtlQueryDepthSList(PSLIST_HEADER ListHead)
{
  return ListHead->Alignment;
}
