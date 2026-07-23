/*
 * XREFs of IoStopIoRateControl @ 0x140495160
 * Callers:
 *     PspIoRateEntryActivate @ 0x140ABECE0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140B3CA34 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 v2; // rdx

  if ( ExGetExtensionTable(IopIoRateExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1, v2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88));
  }
}
