/*
 * XREFs of ExGetExpirationDate @ 0x140837BDC
 * Callers:
 *     sub_140A7DC40 @ 0x140A7DC40 (sub_140A7DC40.c)
 *     ExInitializeTimeRefresh @ 0x140CE3D60 (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x1404522E0 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  int LicenseValue; // ebx
  int v4; // [rsp+38h] [rbp-1h] BYREF
  TIME_FIELDS TimeFields; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  __int128 Buf1; // [rsp+60h] [rbp+27h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp+37h] BYREF

  *(_DWORD *)&TimeFields.Milliseconds = 0;
  v4 = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( Time )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
    LicenseValue = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v4);
    if ( LicenseValue >= 0 && memcmp(&Buf1, &Buf2, 0x10uLL) )
    {
      *(_QWORD *)&TimeFields.Year = Buf2;
      *(_DWORD *)&TimeFields.Minute = DWORD2(Buf2);
      if ( RtlTimeFieldsToTime(&TimeFields, Time) )
        return (unsigned int)LicenseValue;
      LicenseValue = -1073741823;
    }
    Time->QuadPart = 0LL;
    return (unsigned int)LicenseValue;
  }
  return (unsigned int)-1073741811;
}
