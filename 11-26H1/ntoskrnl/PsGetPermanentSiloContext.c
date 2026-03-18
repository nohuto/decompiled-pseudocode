/*
 * XREFs of PsGetPermanentSiloContext @ 0x14040B340
 * Callers:
 *     ObInitServerSilo @ 0x1407C22F0 (ObInitServerSilo.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408A5754 (VrpHandleIoctlModifyFlags.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408A72EC (ObGetSiloRootDirectoryPath.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     VRegEnabledInJob @ 0x14097834C (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14097854C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140978E48 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140979150 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     CmpGetContextForSiloNoRef @ 0x140A30C60 (CmpGetContextForSiloNoRef.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140AFF5E4 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1536);
  else
    v3 = qword_140FC8E30;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
