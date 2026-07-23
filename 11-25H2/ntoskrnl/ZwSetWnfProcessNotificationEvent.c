/*
 * XREFs of ZwSetWnfProcessNotificationEvent @ 0x14069E9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NotificationEvent);
}
