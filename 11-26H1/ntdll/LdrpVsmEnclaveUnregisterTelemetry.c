/*
 * XREFs of LdrpVsmEnclaveUnregisterTelemetry @ 0x180104C24
 * Callers:
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 */

struct _PEB *LdrpVsmEnclaveUnregisterTelemetry()
{
  struct _PEB *result; // rax
  __int64 v1; // rcx

  result = NtCurrentPeb();
  if ( VSMEnclaveProvidersRegistered )
  {
    if ( result->ProcessHeap )
    {
      v1 = qword_1801C59E8;
      qword_1801C59E8 = 0LL;
      dword_1801C59C8 = 0;
      result = (struct _PEB *)EtwNotificationUnregister(v1, 0LL);
      VSMEnclaveProvidersRegistered = 0;
    }
  }
  return result;
}
