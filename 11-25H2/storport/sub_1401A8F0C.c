/*
 * XREFs of sub_1401A8F0C @ 0x1401A8F0C
 * Callers:
 *     sub_1400444A0 @ 0x1400444A0 (sub_1400444A0.c)
 * Callees:
 *     _wcsnicmp @ 0x14005655A (_wcsnicmp.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_1401A8F0C(HANDLE KeyHandle, unsigned int *a2)
{
  unsigned int v4; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int KeyValueInformation; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+54h] [rbp-ACh]
  unsigned int v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+5Ch] [rbp-A4h]
  unsigned int v12; // [rsp+60h] [rbp-A0h]
  wchar_t Str1[246]; // [rsp+64h] [rbp-9Ch] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"LinkTimeout");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         &KeyValueInformation,
         0x200u,
         &ResultLength) < 0
    || v9 == 4 && v11 != 4
    || wcsnicmp(Str1, L"LinkTimeout", (unsigned __int64)v12 >> 1)
    || !v11
    || v9 != 4 )
  {
    return 0;
  }
  v4 = *(int *)((char *)&KeyValueInformation + v10);
  *a2 = v4;
  if ( v4 > 0x258 )
    *a2 = 600;
  return 1;
}
