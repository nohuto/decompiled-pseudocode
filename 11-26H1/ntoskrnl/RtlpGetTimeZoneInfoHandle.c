/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x140A13574
 * Callers:
 *     RtlSetActiveTimeBias @ 0x140804C34 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1408051C8 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140A13354 (RtlpQueryTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, HANDLE *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-238h] BYREF
  WCHAR v6[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140E67938 == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             0,
             v6,
             0x208u,
             (unsigned int *)&v5);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
    {
      dword_140E67938 = 2;
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
    }
  }
  else
  {
    dword_140E67938 = 1;
    result = RtlpGetRegistryHandle(0, v6, a1, a2);
    if ( (_DWORD)result == -1073741772 )
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}
