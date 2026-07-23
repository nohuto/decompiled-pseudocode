/*
 * XREFs of TppSimplepFree @ 0x1800E1510
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 */

LOGICAL __fastcall TppSimplepFree(_QWORD *BaseAddress)
{
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
