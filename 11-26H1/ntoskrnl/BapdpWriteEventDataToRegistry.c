/*
 * XREFs of BapdpWriteEventDataToRegistry @ 0x140C0DF24
 * Callers:
 *     BapdWriteEtwEvents @ 0x1406CDFBC (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140C0DC54 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 */

int __fastcall BapdpWriteEventDataToRegistry(PVOID Data, __int64 a2, UNICODE_STRING *a3)
{
  int result; // eax
  NTSTATUS v6; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Session Manager\\Power");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    result = ZwClose(KeyHandle);
    if ( v6 >= 0 )
    {
      ZwSetValueKey(Handle, a3, 0, 4u, Data, 4u);
      return ZwClose(Handle);
    }
  }
  return result;
}
