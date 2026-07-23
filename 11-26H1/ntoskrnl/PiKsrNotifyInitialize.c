/*
 * XREFs of PiKsrNotifyInitialize @ 0x140CCD930
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 */

__int64 PiKsrNotifyInitialize()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  qword_140F82968 = (__int64)&PnpKsrNotifyList;
  PnpKsrNotifyList = &PnpKsrNotifyList;
  *(_QWORD *)&ObjectAttributes.Attributes = 80LL;
  PnpKsrNotifyLock.Event.Header.WaitListHead.Blink = &PnpKsrNotifyLock.Event.Header.WaitListHead;
  PnpKsrNotifyLock.Event.Header.WaitListHead.Flink = &PnpKsrNotifyLock.Event.Header.WaitListHead;
  DestinationString = 0LL;
  PnpKsrNotifyLock.Count = 1;
  PnpKsrNotifyLock.Owner = 0LL;
  PnpKsrNotifyLock.Contention = 0;
  LOWORD(PnpKsrNotifyLock.Event.Header.Lock) = 1;
  PnpKsrNotifyLock.Event.Header.Size = 6;
  PnpKsrNotifyLock.Event.Header.SignalState = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ExCreateCallback(&PnpKsrCallbackObject, &ObjectAttributes, 0, 0) >= 0 )
    ExRegisterCallback(PnpKsrCallbackObject, (PCALLBACK_FUNCTION)PipKsrCallback, IopRootDeviceNode);
  return 0LL;
}
