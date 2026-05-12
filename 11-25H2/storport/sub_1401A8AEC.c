/*
 * XREFs of sub_1401A8AEC @ 0x1401A8AEC
 * Callers:
 *     sub_1400D1354 @ 0x1400D1354 (sub_1400D1354.c)
 * Callees:
 *     _wcsnicmp @ 0x14005655A (_wcsnicmp.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AE9F8 @ 0x1401AE9F8 (sub_1401AE9F8.c)
 */

void __fastcall sub_1401A8AEC(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[5]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str1[246]; // [rsp+64h] [rbp-9Ch] BYREF

  if ( a2 )
  {
    ResultLength = 0;
    DestinationString = 0LL;
    v3 = (void *)sub_1401AE9F8();
    if ( v3 )
    {
      RtlInitUnicodeString(&DestinationString, L"KeepAliveTimeoutInMs");
      if ( ZwQueryValueKey(v3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
        && KeyValueInformation[1] == 4
        && KeyValueInformation[3] == 4
        && !wcsnicmp(Str1, L"KeepAliveTimeoutInMs", (unsigned __int64)KeyValueInformation[4] >> 1) )
      {
        v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        if ( v4 != -1 )
          *a2 = v4;
      }
      ZwClose(v3);
    }
  }
}
