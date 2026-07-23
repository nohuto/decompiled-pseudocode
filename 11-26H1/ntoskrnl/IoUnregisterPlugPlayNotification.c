/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140B33BC0
 * Callers:
 *     ExpPrmTargetDeviceChangeCallback @ 0x140845210 (ExpPrmTargetDeviceChangeCallback.c)
 *     SbpWaitForVmbus @ 0x140D09EA0 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x1404A5588 (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification((struct _LIST_ENTRY *)NotificationEntry, 0);
}
