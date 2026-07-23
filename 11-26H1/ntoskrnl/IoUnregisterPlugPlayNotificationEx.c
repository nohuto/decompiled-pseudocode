/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140AECFC0
 * Callers:
 *     PopCleanPowerLimitExtension @ 0x140606490 (PopCleanPowerLimitExtension.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x1404A5588 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((struct _LIST_ENTRY *)NotificationEntry, 1);
}
