/*
 * XREFs of VRegEnabledInJob @ 0x14097834C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140977F10 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x140978140 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14097854C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140979150 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14040B340 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     PsGetParentSilo @ 0x140978D70 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  struct _LIST_ENTRY *CurrentSilo; // rbx
  __int64 v3; // rdi

  CurrentSilo = PsGetCurrentSilo();
  v3 = HalSystemVectorDispatchEntry();
  while ( 1 )
  {
    if ( CurrentSilo == (struct _LIST_ENTRY *)v3 )
      return 0LL;
    if ( (int)PsGetPermanentSiloContext((__int64)CurrentSilo, gLoadedDiffHivesLock.QuantumTarget, a1) >= 0 )
      break;
    CurrentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(CurrentSilo);
  }
  return 1LL;
}
