/*
 * XREFs of DCEInUseCountTelemetryInit @ 0x140185858
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

int DCEInUseCountTelemetryInit()
{
  int result; // eax
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+84h] [rbp-7Ch]
  unsigned int v31; // [rsp+8Ch] [rbp-74h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"GlobalDCEsInUseThreshold");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v30 == 4 )
    {
      v4 = v31;
      if ( v31 )
      {
        if ( v4 > *(_DWORD *)(W32GetUserSessionState(v2, v1, v3) + 19680) )
          *(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 19680) = v4;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"ProcessDCEsInUseThreshold");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v30 == 4 )
    {
      v11 = v31;
      if ( v31 )
      {
        if ( v11 > *(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 19684) )
          *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 19684) = v11;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"EventIntervalMinute");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v30 == 4 )
    {
      if ( v31 )
      {
        v18 = v31;
        if ( v18 > *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 19672) )
          *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 19672) = v18;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"DCEInUseTelemetryDisabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v30 == 4 )
    {
      if ( v31 )
        *(_DWORD *)(W32GetUserSessionState(v23, v22, v24) + 19688) = 1;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
