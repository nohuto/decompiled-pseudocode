/*
 * XREFs of TppJobpFree @ 0x180103A90
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x1800859C0 (TpAdjustBindingCount.c)
 */

LOGICAL __fastcall TppJobpFree(_QWORD *a1)
{
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  *(a1 - 2) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, a1 - 9);
}
