/*
 * XREFs of WmipDeliverWnodeToDS @ 0x140B36718
 * Callers:
 *     WmipEnableCollectionForNewGuid @ 0x140A0CDA0 (WmipEnableCollectionForNewGuid.c)
 *     WmipDereferenceEvent @ 0x140B5FA28 (WmipDereferenceEvent.c)
 * Callees:
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipDeliverWnodeToDS(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  return WmipSendWmiIrp(a1, *(unsigned int *)(a2 + 56), a3 + 24, a4, a3, &v5);
}
