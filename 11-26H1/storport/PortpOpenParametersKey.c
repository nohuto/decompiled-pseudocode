/*
 * XREFs of PortpOpenParametersKey @ 0x1401B72E4
 * Callers:
 *     PortReadStorageBusType @ 0x1401836F4 (PortReadStorageBusType.c)
 *     PortGetKeepAliveTimeoutValue @ 0x1401B0EC4 (PortGetKeepAliveTimeoutValue.c)
 *     PortGetBusyRetryCountValue @ 0x1401B70C0 (PortGetBusyRetryCountValue.c)
 *     PortOpenDeviceKey @ 0x1401B71D8 (PortOpenDeviceKey.c)
 *     PortGetIoTimeoutValue @ 0x1401BE4E8 (PortGetIoTimeoutValue.c)
 *     PortGetBusyPauseTimeValue @ 0x1401BE608 (PortGetBusyPauseTimeValue.c)
 *     PortGetIoLatencyCapValue @ 0x1401BE720 (PortGetIoLatencyCapValue.c)
 * Callees:
 *     <none>
 */

void *__fastcall PortpOpenParametersKey(struct _UNICODE_STRING *a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  void *v5; // [rsp+78h] [rbp+18h] BYREF

  ObjectAttributes.ObjectName = a1;
  KeyHandle = 0LL;
  v5 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  RtlInitUnicodeString(&DestinationString, L"Parameters");
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v5, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  ZwClose(KeyHandle);
  return v5;
}
