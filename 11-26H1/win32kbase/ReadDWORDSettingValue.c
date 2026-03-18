/*
 * XREFs of ReadDWORDSettingValue @ 0x1401DF534
 * Callers:
 *     ReadInputHapticSettings @ 0x1401DF5F0 (ReadInputHapticSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ReadDWORDSettingValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+4Ch] [rbp-2Ch]
  int v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+54h] [rbp-24h]

  if ( !KeyHandle || !a2 )
    return -1073741816;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ResultLength = 0;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result >= 0 && v9 == 4 && v10 == 4 )
    *a3 = v11;
  return result;
}
