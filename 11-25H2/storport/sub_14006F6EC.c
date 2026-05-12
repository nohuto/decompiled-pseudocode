/*
 * XREFs of sub_14006F6EC @ 0x14006F6EC
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14006F36C @ 0x14006F36C (sub_14006F36C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void sub_14006F6EC()
{
  ULONG Length; // esi
  __int64 v1; // rbx
  ULONG v2; // edi
  NTSTATUS v3; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  GUID Guid; // [rsp+98h] [rbp+37h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  Guid = 0LL;
  DestinationString = 0LL;
  GuidString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\ATADeviceIdMappings");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    Length = 20;
    v1 = sub_1400143E0(64LL, 20LL, 1213423954LL, 0LL);
    if ( v1 )
    {
      v2 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v3 = ZwEnumerateValueKey(KeyHandle, v2, KeyValueFullInformation, (PVOID)v1, Length, &ResultLength);
          if ( v3 < 0 )
            break;
          if ( *(_DWORD *)(v1 + 16) == 76 )
          {
            *(_DWORD *)&GuidString.Length = 4980812;
            GuidString.Buffer = (PWSTR)(v1 + 20);
            if ( RtlGUIDFromString(&GuidString, &Guid) >= 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&stru_1401692A0.DeviceExtension, 1u);
              sub_14006F36C(v1 + *(unsigned int *)(v1 + 8), *(_DWORD *)(v1 + 12), (struct _STRING *)&Guid);
              ExReleaseResourceLite((PERESOURCE)&stru_1401692A0.DeviceExtension);
            }
          }
          ++v2;
        }
        if ( v3 != -2147483643 && v3 != -1073741789 )
          break;
        Length = ResultLength;
        ExFreePoolWithTag((PVOID)v1, 0x48536152u);
        v1 = sub_1400143E0(64LL, Length, 1213423954LL, 0LL);
        if ( !v1 )
          goto LABEL_14;
      }
      ExFreePoolWithTag((PVOID)v1, 0x48536152u);
    }
  }
LABEL_14:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
