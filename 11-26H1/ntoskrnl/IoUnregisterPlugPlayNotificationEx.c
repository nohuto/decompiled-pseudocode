/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140AEA4D0
 * Callers:
 *     PopCleanPowerLimitExtension @ 0x1406039E0 (PopCleanPowerLimitExtension.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x1404ABEF8 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((struct _LIST_ENTRY *)NotificationEntry, 1);
}
