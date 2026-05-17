/*
 * XREFs of TppAlpcpFree @ 0x1800FF700
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x180065570 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppAlpcpFree(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 - 72;
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFF);
  *(_QWORD *)(v2 + 56) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap_0();
}
