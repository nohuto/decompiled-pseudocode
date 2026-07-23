/*
 * XREFs of PcwUnregister @ 0x140B47ED0
 * Callers:
 *     ExpPcwHostCallback @ 0x140847B90 (ExpPcwHostCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall PcwUnregister(PPCW_REGISTRATION Registration)
{
  __int64 v2; // rdx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    guard_dispatch_icall_no_overrides((__int64)Registration, v2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
