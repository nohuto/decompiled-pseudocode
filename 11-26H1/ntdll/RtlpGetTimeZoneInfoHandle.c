/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x1800FC8F8
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1800FC670 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x180123C1C (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x18003E210 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x18005A6B8 (RtlpGetRegistryHandle.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, const wchar_t **a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-238h] BYREF
  wchar_t v6[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_1801C760C == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(
             (wchar_t *)L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             0,
             v6,
             0x208u,
             (unsigned int *)&v5);
  if ( (int)result >= 0 )
  {
    dword_1801C760C = 1;
    result = RtlpGetRegistryHandle(0, v6, a1, a2);
    if ( (_DWORD)result == -1073741772 )
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  else if ( (_DWORD)result == -1073741772 )
  {
    dword_1801C760C = 2;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}
