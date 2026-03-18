/*
 * XREFs of ExpWnfDeletePermanentName @ 0x140947D84
 * Callers:
 *     NtDeleteWnfStateName @ 0x140949660 (NtDeleteWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwDeleteValueKey @ 0x140724FD0 (ZwDeleteValueKey.c)
 *     ExpWnfComposeValueName @ 0x14094BF5C (ExpWnfComposeValueName.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14094D70C (ExpWnfGetNameStoreRegistryRoot.c)
 */

NTSTATUS __fastcall ExpWnfDeletePermanentName(unsigned __int64 a1)
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-50h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v5;
  ExpWnfComposeValueName(a1, &ValueName);
  result = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, &KeyHandle);
  if ( result >= 0 )
    return ZwDeleteValueKey(KeyHandle, &ValueName);
  return result;
}
