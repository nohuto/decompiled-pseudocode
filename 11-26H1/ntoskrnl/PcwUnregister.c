/*
 * XREFs of PcwUnregister @ 0x140B45EA0
 * Callers:
 *     ExpPcwHostCallback @ 0x140841950 (ExpPcwHostCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
