/*
 * XREFs of LsaCallAuthenticationPackage @ 0x1408106C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall LsaCallAuthenticationPackage(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx

  v4 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[8]) )
  {
    v4 = guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[8]);
  }
  return v4;
}
