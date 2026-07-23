/*
 * XREFs of EmonOverflowHandler @ 0x1404B0900
 * Callers:
 *     <none>
 * Callees:
 *     EmonOverflowHandlerInternalV2 @ 0x1404B093C (EmonOverflowHandlerInternalV2.c)
 *     EmonOverflowHandlerInternalV1 @ 0x1404B0DEC (EmonOverflowHandlerInternalV1.c)
 */

__int64 __fastcall EmonOverflowHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  v2 = KiProcessorBlock[a2];
  if ( *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts < 2u )
    return EmonOverflowHandlerInternalV1(a1, *(_QWORD *)(v2 + 88));
  else
    return EmonOverflowHandlerInternalV2(a1, a2, v2);
}
