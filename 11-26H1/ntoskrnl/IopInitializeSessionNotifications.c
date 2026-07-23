/*
 * XREFs of IopInitializeSessionNotifications @ 0x140CC4ECC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 */

NTSTATUS IopInitializeSessionNotifications()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IopPerfIoTrackingLock.Padding[2] = (unsigned __int64)&IopPerfIoTrackingLock.Padding[1];
  IopPerfIoTrackingLock.Padding[1] = (unsigned __int64)&IopPerfIoTrackingLock.Padding[1];
  *(_QWORD *)&ObjectAttributes.Attributes = 80LL;
  DestinationString = 0LL;
  IopPerfIoTrackingLock.Padding[3] = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoSessionNotifications");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ExCreateCallback(&IopSessionCallbackObject, &ObjectAttributes, 1u, 1u);
}
