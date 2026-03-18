/*
 * XREFs of PsIsThreadInSilo @ 0x14043D79C
 * Callers:
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1409783B8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14097854C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140978E48 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140979150 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140AFF5E4 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x14043D820 (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x140AF1B24 (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1688) == -3LL )
    return PsIsProcessInSilo(*(_QWORD *)(a1 + 544));
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1688)) != 0;
}
