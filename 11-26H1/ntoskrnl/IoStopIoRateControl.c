/*
 * XREFs of IoStopIoRateControl @ 0x14049B610
 * Callers:
 *     PspIoRateEntryActivate @ 0x140AFB4A4 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140B3A694 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 v2; // rdx

  if ( ExGetExtensionTable(IopSessionNotificationLock.SListFaultAddress) )
  {
    guard_dispatch_icall_no_overrides(a1, v2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)IopSessionNotificationLock.SListFaultAddress + 11);
  }
}
