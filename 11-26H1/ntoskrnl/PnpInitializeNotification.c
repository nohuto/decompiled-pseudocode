/*
 * XREFs of PnpInitializeNotification @ 0x140CCA0C4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PnpInitializeNotification()
{
  __int64 v0; // rdx
  _QWORD *v1; // rax
  char *v2; // rcx
  LIST_ENTRY *result; // rax

  v0 = 13LL;
  v1 = &unk_140FD87B0;
  v2 = (char *)&unk_140FD87B0;
  do
  {
    v1[1] = v2;
    *v1 = v2;
    v2 += 16;
    v1 += 2;
    --v0;
  }
  while ( v0 );
  PnpDeviceClassNotifyLock.Count = 1;
  PnpDeviceClassNotifyLock.Owner = 0LL;
  PspSiloMonitorLock.KcsanThread = (unsigned __int64)&PspSiloMonitorLock.1144;
  PspSiloMonitorLock.Spare32 = &PspSiloMonitorLock.1144;
  PspSiloMonitorLock.SystemAffinityTokenListHead.Next = (struct _SINGLE_LIST_ENTRY *)&PspSiloMonitorLock.Spare36;
  *(_QWORD *)&PspSiloMonitorLock.Spare36 = &PspSiloMonitorLock.Spare36;
  PnpDeviceClassNotifyLock.Event.Header.WaitListHead.Blink = &PnpDeviceClassNotifyLock.Event.Header.WaitListHead;
  PnpDeviceClassNotifyLock.Event.Header.WaitListHead.Flink = &PnpDeviceClassNotifyLock.Event.Header.WaitListHead;
  PnpTargetDeviceNotifyLock.Event.Header.WaitListHead.Blink = &PnpTargetDeviceNotifyLock.Event.Header.WaitListHead;
  PnpTargetDeviceNotifyLock.Event.Header.WaitListHead.Flink = &PnpTargetDeviceNotifyLock.Event.Header.WaitListHead;
  PnpHwProfileNotifyLock.Event.Header.WaitListHead.Blink = &PnpHwProfileNotifyLock.Event.Header.WaitListHead;
  PnpHwProfileNotifyLock.Event.Header.WaitListHead.Flink = &PnpHwProfileNotifyLock.Event.Header.WaitListHead;
  result = &PnpDeferredRegistrationLock.Event.Header.WaitListHead;
  PnpDeferredRegistrationLock.Event.Header.WaitListHead.Blink = &PnpDeferredRegistrationLock.Event.Header.WaitListHead;
  PnpDeferredRegistrationLock.Event.Header.WaitListHead.Flink = &PnpDeferredRegistrationLock.Event.Header.WaitListHead;
  PnpDeviceClassNotifyLock.Contention = 0;
  LOWORD(PnpDeviceClassNotifyLock.Event.Header.Lock) = 1;
  PnpDeviceClassNotifyLock.Event.Header.Size = 6;
  PnpDeviceClassNotifyLock.Event.Header.SignalState = 0;
  PnpTargetDeviceNotifyLock.Count = 1;
  PnpTargetDeviceNotifyLock.Owner = 0LL;
  PnpTargetDeviceNotifyLock.Contention = 0;
  LOWORD(PnpTargetDeviceNotifyLock.Event.Header.Lock) = 1;
  PnpTargetDeviceNotifyLock.Event.Header.Size = 6;
  PnpTargetDeviceNotifyLock.Event.Header.SignalState = 0;
  PnpHwProfileNotifyLock.Count = 1;
  PnpHwProfileNotifyLock.Owner = 0LL;
  PnpHwProfileNotifyLock.Contention = 0;
  LOWORD(PnpHwProfileNotifyLock.Event.Header.Lock) = 1;
  PnpHwProfileNotifyLock.Event.Header.Size = 6;
  PnpHwProfileNotifyLock.Event.Header.SignalState = 0;
  PnpDeferredRegistrationLock.Count = 1;
  PnpDeferredRegistrationLock.Owner = 0LL;
  PnpDeferredRegistrationLock.Contention = 0;
  LOWORD(PnpDeferredRegistrationLock.Event.Header.Lock) = 1;
  PnpDeferredRegistrationLock.Event.Header.Size = 6;
  PnpDeferredRegistrationLock.Event.Header.SignalState = 0;
  return result;
}
