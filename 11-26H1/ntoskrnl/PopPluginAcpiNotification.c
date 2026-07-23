/*
 * XREFs of PopPluginAcpiNotification @ 0x140616DA0
 * Callers:
 *     PopFxAcpiForwardNotification @ 0x140614F44 (PopFxAcpiForwardNotification.c)
 *     PopPluginAcpiNotificationStrict @ 0x140616DC4 (PopPluginAcpiNotificationStrict.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginAcpiNotification(__int64 a1, unsigned int a2, __int64 a3)
{
  return guard_dispatch_icall_no_overrides(a2, a3);
}
