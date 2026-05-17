/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x1800E9CA4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800E9D64 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

NTSTATUS LdrpInitializeSmtDelayedSleep()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = NtOpenKey(&Handle, 1LL, &unk_180171FE0);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"46", &dword_1801CCE84);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"\"$", &dword_1801CCE88);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, &unk_180172030, &dword_1801CCE8C);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L" \"", &dword_1801CCE90);
  }
  if ( Handle )
    return NtClose(Handle);
  return result;
}
