/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140B319C0
 * Callers:
 *     ExpPrmTargetDeviceChangeCallback @ 0x14083EFD0 (ExpPrmTargetDeviceChangeCallback.c)
 *     SbpWaitForVmbus @ 0x140D03BD0 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x1404ABEF8 (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification((struct _LIST_ENTRY *)NotificationEntry, 0);
}
