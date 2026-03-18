/*
 * XREFs of RIMRegQueryDWordFromKey @ 0x1400EC2B8
 * Callers:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1400EC170 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1400EC23C (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     RIMRegQueryDWord @ 0x1400EDB14 (RIMRegQueryDWord.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall RIMRegQueryDWordFromKey(HANDLE KeyHandle, const WCHAR *a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-40h] BYREF
  int v12; // [rsp+4Ch] [rbp-3Ch]
  int v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+54h] [rbp-34h]

  v4 = 0;
  if ( KeyHandle )
  {
    ResultLength = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v12 == 4
      && v13 == 4 )
    {
      a3 = v14;
      v4 = 1;
    }
  }
  *a4 = a3;
  return v4;
}
