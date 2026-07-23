/*
 * XREFs of TppIopFree @ 0x180085680
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x1800859C0 (TpAdjustBindingCount.c)
 */

LOGICAL __fastcall TppIopFree(_QWORD *BaseAddress)
{
  TpAdjustBindingCount(BaseAddress[18], 0xFFFFFFFFLL);
  BaseAddress[32] = 0LL;
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
}
