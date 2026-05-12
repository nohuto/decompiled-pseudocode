/*
 * XREFs of RaidLoadATADeviceIdMappings @ 0x1400764E4
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAddATADeviceIdMapping @ 0x14007625C (RaidAddATADeviceIdMapping.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void RaidLoadATADeviceIdMappings()
{
  ULONG Length; // esi
  __int64 Pool; // rbx
  ULONG v2; // edi
  NTSTATUS v3; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  GUID Guid; // [rsp+98h] [rbp+37h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Guid = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  GuidString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\ATADeviceIdMappings");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    Length = 20;
    Pool = RaidAllocatePool(64LL, 20LL, 1213423954LL, 0LL);
    if ( Pool )
    {
      v2 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v3 = ZwEnumerateValueKey(KeyHandle, v2, KeyValueFullInformation, (PVOID)Pool, Length, &ResultLength);
          if ( v3 < 0 )
            break;
          if ( *(_DWORD *)(Pool + 16) == 76 )
          {
            *(_DWORD *)&GuidString.Length = 4980812;
            GuidString.Buffer = (wchar_t *)(Pool + 20);
            if ( RtlGUIDFromString(&GuidString, &Guid) >= 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension, 1u);
              RaidAddATADeviceIdMapping(
                (NTSTRSAFE_PCSTR)(Pool + *(unsigned int *)(Pool + 8)),
                *(_DWORD *)(Pool + 12),
                (struct _STRING *)&Guid);
              ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
            }
          }
          ++v2;
        }
        if ( v3 != -2147483643 && v3 != -1073741789 )
          break;
        Length = ResultLength;
        ExFreePoolWithTag((PVOID)Pool, 0x48536152u);
        Pool = RaidAllocatePool(64LL, Length, 1213423954LL, 0LL);
        if ( !Pool )
          goto LABEL_14;
      }
      ExFreePoolWithTag((PVOID)Pool, 0x48536152u);
    }
  }
LABEL_14:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
