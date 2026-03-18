/*
 * XREFs of WmipDeliverWnodeToDS @ 0x140A92138
 * Callers:
 *     WmipDereferenceEvent @ 0x1409B196C (WmipDereferenceEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B364C (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B7738 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     WmipSendWmiIrp @ 0x1409B5630 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipDeliverWnodeToDS(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  return WmipSendWmiIrp(a1, *(unsigned int *)(a2 + 56), a3 + 24, a4, a3, &v5);
}
