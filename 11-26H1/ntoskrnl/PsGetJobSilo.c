/*
 * XREFs of PsGetJobSilo @ 0x14043D7E0
 * Callers:
 *     VrpHandleIoctlModifyFlags @ 0x1408A5754 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1409783B8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14097854C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140978E48 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140979150 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140AFF5E4 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PspGetJobSilo @ 0x14043D870 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetJobSilo(__int64 a1)
{
  __int64 JobSilo; // rax
  __int64 *v2; // rdx

  if ( !a1 )
    return 3221225485LL;
  JobSilo = PspGetJobSilo(a1);
  if ( !JobSilo )
    return 3221226761LL;
  *v2 = JobSilo;
  return 0LL;
}
