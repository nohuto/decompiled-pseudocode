/*
 * XREFs of ExpGetNtProductTypeFromLicenseValue @ 0x140836A7C
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     NtQueryLicenseValue @ 0x140A6A340 (NtQueryLicenseValue.c)
 */

char __fastcall ExpGetNtProductTypeFromLicenseValue(_DWORD *a1)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v4; // [rsp+58h] [rbp+18h] BYREF
  int v5; // [rsp+60h] [rbp+20h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF

  v4 = 0;
  v5 = 0;
  DestinationString = 0LL;
  v6 = 0;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ProductType");
  if ( (int)NtQueryLicenseValue(&DestinationString, &v4, &v6, 4LL, &v5) < 0
    || v4 != 4
    || v5 != 4
    || v6 != 1 && (unsigned int)(v6 - 2) > 1 )
  {
    return 0;
  }
  *a1 = v6;
  return 1;
}
