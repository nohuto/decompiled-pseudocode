/*
 * XREFs of EmonPebsOverflowHandler @ 0x140598608
 * Callers:
 *     EmonOverflowHandlerInternalV2 @ 0x1404B093C (EmonOverflowHandlerInternalV2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EmonPebsOverflowHandler()
{
  __int64 v0; // rax
  struct _KTHREAD *v1; // r9
  __int64 v2; // rbx
  __int64 v3; // r11
  __int64 result; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = *(struct _KTHREAD **)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary;
  v2 = *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[8] + 160 * v0;
  while ( v1 != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary )
  {
    if ( v1->SListFaultAddress )
    {
      if ( IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[25] )
        v3 = *(_QWORD *)(v2 + 32);
      else
        v3 = *(unsigned int *)(v2 + 16);
      guard_dispatch_icall_no_overrides(
        v3,
        LODWORD(IommuInterfaceStateChangeCallbackPushLock.GlobalForegroundListEntry.Flink));
      break;
    }
    v1 = *(struct _KTHREAD **)&v1->Header.Lock;
  }
  if ( IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[25] )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 40) = result;
  }
  else
  {
    result = *(unsigned int *)(v2 + 16);
    *(_DWORD *)(v2 + 20) = result;
  }
  return result;
}
