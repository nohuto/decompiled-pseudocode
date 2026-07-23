/*
 * XREFs of VRegEnabledInJob @ 0x14093A35C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x14093A150 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     PsGetParentSilo @ 0x14093AD80 (PsGetParentSilo.c)
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
