/*
 * XREFs of TppIopFree @ 0x180065230
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x180065570 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppIopFree(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 256) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap_0();
}
