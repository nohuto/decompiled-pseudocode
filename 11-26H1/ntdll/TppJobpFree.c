/*
 * XREFs of TppJobpFree @ 0x180104710
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x180065570 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppJobpFree(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFF);
  *(_QWORD *)(a1 - 16) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap_0();
}
