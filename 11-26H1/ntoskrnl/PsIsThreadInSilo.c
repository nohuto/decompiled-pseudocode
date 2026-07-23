/*
 * XREFs of PsIsThreadInSilo @ 0x14043004C
 * Callers:
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14093A3C8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14093AE58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140B01274 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x140AF43F4 (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1688) == -3LL )
    return PsIsProcessInSilo(*(_QWORD *)(a1 + 544));
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1688)) != 0;
}
