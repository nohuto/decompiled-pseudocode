/*
 * XREFs of PcwCloseInstance @ 0x140AF33A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall PcwCloseInstance(PPCW_INSTANCE Instance)
{
  __int64 v2; // rdx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    guard_dispatch_icall_no_overrides((__int64)Instance, v2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
