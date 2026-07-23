/*
 * XREFs of ExQueryDepthSList @ 0x1404590B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall ExQueryDepthSList(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
