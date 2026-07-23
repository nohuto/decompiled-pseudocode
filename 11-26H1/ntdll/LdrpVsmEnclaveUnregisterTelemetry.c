/*
 * XREFs of LdrpVsmEnclaveUnregisterTelemetry @ 0x180103FA4
 * Callers:
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 */

int LdrpVsmEnclaveUnregisterTelemetry()
{
  struct _PEB *v0; // rax
  REGHANDLE v1; // rcx

  v0 = NtCurrentPeb();
  if ( VSMEnclaveProvidersRegistered && v0->ProcessHeap )
  {
    v1 = qword_1801C49E8;
    qword_1801C49E8 = 0LL;
    dword_1801C49C8 = 0;
    LODWORD(v0) = EtwNotificationUnregister(v1, 0LL);
    VSMEnclaveProvidersRegistered = 0;
  }
  return (int)v0;
}
