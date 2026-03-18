/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x1401880EC
 * Callers:
 *     InitializeTelemetryAssertsKMByName @ 0x140188094 (InitializeTelemetryAssertsKMByName.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1401C395C (InitializeTelemetryAssertsLocks.c)
 *     UninitializeTelemetryAssertsLocks @ 0x1401C5D00 (UninitializeTelemetryAssertsLocks.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402D36E4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
      qword_1402AD8F8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
      g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1402D1040);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_1402D1008);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1402D1078);
      _InterlockedIncrement(&g_AssertsOperational);
      return (unsigned int)v2;
    }
    v2 = -1073741801;
  }
  UninitializeTelemetryAssertsLocks();
  return (unsigned int)v2;
}
