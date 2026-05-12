/*
 * XREFs of sub_14006FB94 @ 0x14006FB94
 * Callers:
 *     sub_1400BBB40 @ 0x1400BBB40 (sub_1400BBB40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14006FB94(PVOID ValueData, ULONG ValueLength, GUID *Guid)
{
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  GuidString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\ATADeviceIdMappings");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v6 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v6 >= 0 )
  {
    v6 = RtlStringFromGUID(Guid, &GuidString);
    if ( v6 >= 0 )
      v6 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, GuidString.Buffer, 3u, ValueData, ValueLength);
  }
  RtlFreeUnicodeString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v6;
}
