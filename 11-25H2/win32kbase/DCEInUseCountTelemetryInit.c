/*
 * XREFs of DCEInUseCountTelemetryInit @ 0x1401490C8
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int DCEInUseCountTelemetryInit()
{
  int result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+84h] [rbp-7Ch]
  unsigned int v24; // [rsp+8Ch] [rbp-74h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
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
      && v23 == 4 )
    {
      v3 = v24;
      if ( v24 )
      {
        if ( v3 > *(_DWORD *)(W32GetUserSessionState(v2, v1) + 19648) )
          *(_DWORD *)(W32GetUserSessionState(v5, v4) + 19648) = v3;
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
      && v23 == 4 )
    {
      v8 = v24;
      if ( v24 )
      {
        if ( v8 > *(_DWORD *)(W32GetUserSessionState(v7, v6) + 19652) )
          *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19652) = v8;
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
      && v23 == 4 )
    {
      if ( v24 )
      {
        v13 = v24;
        if ( v13 > *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19640) )
          *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19640) = v13;
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
      && v23 == 4 )
    {
      if ( v24 )
        *(_DWORD *)(W32GetUserSessionState(v17, v16) + 19656) = 1;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
