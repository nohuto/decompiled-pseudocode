/*
 * XREFs of SmpQueryDedicatedDumpSetting @ 0x1400121D0
 * Callers:
 *     SmpPagefileInitialize @ 0x140010F40 (SmpPagefileInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

bool SmpQueryDedicatedDumpSetting()
{
  ULONG ResultLength; // [rsp+30h] [rbp-248h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-240h] BYREF
  _BYTE KeyValueInformation[528]; // [rsp+50h] [rbp-228h] BYREF

  *(_QWORD *)&ValueName.Length = 2359330LL;
  ResultLength = 528;
  ValueName.Buffer = L"DedicatedDumpFile";
  return NtQueryValueKey(
           SmpCrashDumpKey,
           &ValueName,
           KeyValueBasicInformation,
           KeyValueInformation,
           0x210u,
           &ResultLength) >= 0;
}
