/*
 * XREFs of TppWorkpFree @ 0x1800390C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 */

LOGICAL __fastcall TppWorkpFree(_QWORD *BaseAddress)
{
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
