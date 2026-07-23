/*
 * XREFs of KitpReadUlongFromKey @ 0x1408477F4
 * Callers:
 *     KitpInitAitSampleRate @ 0x140CED130 (KitpInitAitSampleRate.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall KitpReadUlongFromKey(void *a1, __int64 a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+48h] [rbp-20h]

  *a3 = 0;
  v7 = 0;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  result = ZwQueryValueKey(
             a1,
             (PUNICODE_STRING)&SbtSamplingRateValue,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      *a3 = HIDWORD(KeyValueInformation);
      return 0;
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
