/*
 * XREFs of WerpEscalationReadUlongFromKey @ 0x1800D3D64
 * Callers:
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D3C8C (WerpEscalationIsWMRSendStringSet.c)
 *     WerpEscalationIsDisabled @ 0x18013AC5C (WerpEscalationIsDisabled.c)
 * Callees:
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WerpEscalationReadUlongFromKey(HANDLE KeyHandle, wchar_t *String, _DWORD *a3)
{
  size_t v5; // rax
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp-18h]

  ValueName.Buffer = String;
  v10 = 0;
  ResultLength = 0;
  *a3 = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  KeyValueInformation = 0LL;
  if ( String )
  {
    v5 = 2 * wcslen(String);
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    ValueName.Length = v5;
    ValueName.MaximumLength = v5 + 2;
  }
  result = NtQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result == -1073741772 )
    return -1073741772;
  if ( result >= 0 )
  {
    if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      *a3 = HIDWORD(KeyValueInformation);
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
