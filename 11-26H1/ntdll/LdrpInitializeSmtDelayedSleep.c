/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x1800E8EB4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800E8F74 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 */

int LdrpInitializeSmtDelayedSleep()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  result = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180170FE0);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"46", &dword_1801CBEC4);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"\"$", &dword_1801CBEC8);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, &unk_180171030, &dword_1801CBECC);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L" \"", &dword_1801CBED0);
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
