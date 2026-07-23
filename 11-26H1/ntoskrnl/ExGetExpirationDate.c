/*
 * XREFs of ExGetExpirationDate @ 0x14083DE1C
 * Callers:
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 *     ExInitializeTimeRefresh @ 0x140CEA100 (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  NTSTATUS v2; // ebx
  ULONG ResultDataSize; // [rsp+34h] [rbp-5h] BYREF
  ULONG Type; // [rsp+38h] [rbp-1h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  __int128 Buf1; // [rsp+60h] [rbp+27h] BYREF
  __int128 Data; // [rsp+70h] [rbp+37h] BYREF

  *(_DWORD *)&TimeFields.Milliseconds = 0;
  Type = 0;
  ResultDataSize = 0;
  DestinationString = 0LL;
  Data = 0LL;
  Buf1 = 0LL;
  if ( Time )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
    v2 = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 0x10u, &ResultDataSize);
    if ( v2 >= 0 && memcmp(&Buf1, &Data, 0x10uLL) )
    {
      *(_QWORD *)&TimeFields.Year = Data;
      *(_DWORD *)&TimeFields.Minute = DWORD2(Data);
      if ( RtlTimeFieldsToTime(&TimeFields, Time) )
        return (unsigned int)v2;
      v2 = -1073741823;
    }
    Time->QuadPart = 0LL;
    return (unsigned int)v2;
  }
  return (unsigned int)-1073741811;
}
