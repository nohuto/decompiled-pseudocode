/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x14014AC88
 * Callers:
 *     InitializeTelemetryAssertsKMByName @ 0x14014AC30 (InitializeTelemetryAssertsKMByName.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1401A0678 (InitializeTelemetryAssertsLocks.c)
 *     UninitializeTelemetryAssertsLocks @ 0x1401A1ED8 (UninitializeTelemetryAssertsLocks.c)
 *     memmove @ 0x140243540 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402CA314 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  int v2; // ebx
  void *Pool2; // rax

  v2 = InitializeTelemetryAssertsLocks();
  if ( v2 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL);
    g_ModuleName = (__int64)Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
      qword_1402A3BF8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
      g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1402C8078);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_1402C8008);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1402C8040);
      _InterlockedIncrement(&g_AssertsOperational);
      return (unsigned int)v2;
    }
    v2 = -1073741801;
  }
  UninitializeTelemetryAssertsLocks();
  return (unsigned int)v2;
}
