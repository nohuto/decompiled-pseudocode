/*
 * XREFs of IoWMISetNotificationCallback @ 0x140B54440
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 */

NTSTATUS __stdcall IoWMISetNotificationCallback(PVOID Object, WMI_NOTIFICATION_CALLBACK Callback, PVOID Context)
{
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  *((_QWORD *)Object + 9) = Callback;
  *((_QWORD *)Object + 10) = Context;
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  return 0;
}
