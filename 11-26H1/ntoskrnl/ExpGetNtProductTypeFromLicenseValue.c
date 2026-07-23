/*
 * XREFs of ExpGetNtProductTypeFromLicenseValue @ 0x14083CCBC
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     NtQueryLicenseValue @ 0x140A76CE0 (NtQueryLicenseValue.c)
 */

char __fastcall ExpGetNtProductTypeFromLicenseValue(_DWORD *a1)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG Type; // [rsp+58h] [rbp+18h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+20h] BYREF
  int Data; // [rsp+68h] [rbp+28h] BYREF

  Type = 0;
  ResultDataSize = 0;
  DestinationString = 0LL;
  Data = 0;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ProductType");
  if ( NtQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) < 0
    || Type != 4
    || ResultDataSize != 4
    || Data != 1 && (unsigned int)(Data - 2) > 1 )
  {
    return 0;
  }
  *a1 = Data;
  return 1;
}
