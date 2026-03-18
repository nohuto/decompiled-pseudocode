/*
 * XREFs of PsSetProcessesWindowState @ 0x140B1A720
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsSetProcessesWindowState(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
