/*
 * XREFs of DbgkpWerIsFullLiveDumpDisabled @ 0x140B43FCC
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1405B6A88 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B43D70 (DbgkWerCaptureLiveKernelDump2.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

bool DbgkpWerIsFullLiveDumpDisabled()
{
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  int v7; // [rsp+A0h] [rbp+47h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v7 = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v3[0] = 11272362LL;
  v3[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\FullLiveKernelReports";
  *(_QWORD *)&ValueName.Length = 2490404LL;
  ValueName.Buffer = L"FullLiveReportsMax";
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  KeyValueInformation = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      ZwClose(KeyHandle);
      return HIDWORD(KeyValueInformation) == 0;
    }
    ZwClose(KeyHandle);
  }
  return 0;
}
