/*
 * XREFs of RaidSaveATADeviceIdMapping @ 0x14007698C
 * Callers:
 *     ATAShimGetMsftId @ 0x1400C4C30 (ATAShimGetMsftId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSaveATADeviceIdMapping(PVOID ValueData, ULONG ValueLength, const GUID *Guid)
{
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  GuidString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\ATADeviceIdMappings");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
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
