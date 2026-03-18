/*
 * XREFs of IsMiPActive @ 0x140102234
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     MiPCheckMsgFilter @ 0x140101EE0 (MiPCheckMsgFilter.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1402248A8 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMiPActive(__int64 a1, __int64 a2)
{
  int v3; // eax

  if ( *(_QWORD *)(a1 + 640)
    || (*(_BYTE *)(*(_QWORD *)(a1 + 456) + 808LL) & 4) == 0 && (*(_DWORD *)(a1 + 1360) & 0x6000000) == 0 )
  {
    return 0LL;
  }
  if ( !a2 )
    return 1LL;
  v3 = *(_DWORD *)(a2 + 100);
  if ( (v3 & 0x20) == 0 )
    return (~v3 & 0x8000000u) >> 27;
  else
    return 0LL;
}
