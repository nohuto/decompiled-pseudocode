/*
 * XREFs of VRegEnabledInJob @ 0x14094A6C0
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408195FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpIoctlDeviceDispatch @ 0x14094A260 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x14094A4A0 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14094A72C (VrpHandleIoctlCreateNamespaceNode.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1403EA530 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetParentSilo @ 0x140862140 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  __int64 CurrentSilo; // rbx
  __int64 v3; // rdi

  CurrentSilo = (__int64)PsGetCurrentSilo();
  v3 = PdcCreateWatchdogAroundClientCall();
  while ( 1 )
  {
    if ( CurrentSilo == v3 )
      return 0LL;
    if ( (int)PsGetPermanentSiloContext(CurrentSilo, VrpSiloContextSlot, a1) >= 0 )
      break;
    CurrentSilo = PsGetParentSilo(CurrentSilo);
  }
  return 1LL;
}
