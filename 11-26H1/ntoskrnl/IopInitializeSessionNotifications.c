/*
 * XREFs of IopInitializeSessionNotifications @ 0x140CBEDFC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 */

NTSTATUS IopInitializeSessionNotifications()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IopSessionNotificationLock.Header.WaitListHead.Blink = &IopSessionNotificationLock.Header.WaitListHead;
  IopSessionNotificationLock.Header.WaitListHead.Flink = &IopSessionNotificationLock.Header.WaitListHead;
  *(_QWORD *)&ObjectAttributes.Attributes = 80LL;
  DestinationString = 0LL;
  *(_QWORD *)&IopSessionNotificationLock.Header.Lock = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoSessionNotifications");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ExCreateCallback(&IopSessionCallbackObject, &ObjectAttributes, 1u, 1u);
}
