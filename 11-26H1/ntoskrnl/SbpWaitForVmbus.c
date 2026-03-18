/*
 * XREFs of SbpWaitForVmbus @ 0x140D03BD0
 * Callers:
 *     IopMountBootLayerCallout @ 0x140CBDC50 (IopMountBootLayerCallout.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     IoUnregisterPlugPlayNotification @ 0x140B319C0 (IoUnregisterPlugPlayNotification.c)
 */

__int64 SbpWaitForVmbus()
{
  NTSTATUS v0; // ebx
  PVOID NotificationEntry; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+10h] BYREF

  SbiVmbusArrivalEvent.Header.WaitListHead.Blink = &SbiVmbusArrivalEvent.Header.WaitListHead;
  SbiVmbusArrivalEvent.Header.WaitListHead.Flink = &SbiVmbusArrivalEvent.Header.WaitListHead;
  NotificationEntry = 0LL;
  LOWORD(SbiVmbusArrivalEvent.Header.Lock) = 1;
  SbiVmbusArrivalEvent.Header.Size = 6;
  SbiVmbusArrivalEvent.Header.SignalState = 0;
  v0 = IoRegisterPlugPlayNotification(
         EventCategoryDeviceInterfaceChange,
         1u,
         VSMB_INTERFACE_GUID,
         PnpDriverObject,
         (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)SbpVmbusNotificationHandler,
         0LL,
         &NotificationEntry);
  if ( v0 >= 0 )
  {
    Timeout.QuadPart = -100000000LL;
    v0 = KeWaitForSingleObject(&SbiVmbusArrivalEvent, Executive, 0, 0, &Timeout);
    IoUnregisterPlugPlayNotification(NotificationEntry);
  }
  return (unsigned int)v0;
}
