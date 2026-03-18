/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x14004332C
 * Callers:
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x140043224 (InitializeTelemetryAssertsKMByDriverObject.c)
 * Callees:
 *     memmove @ 0x1400468C0 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140093DA8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  KeInitializeSpinLock(&g_AssertSpinLock);
  v2 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL);
  g_ModuleName = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
    qword_140070D28 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140077078);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140077008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140077040);
    _InterlockedIncrement(&g_AssertsOperational);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
