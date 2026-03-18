/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x140341F7C
 * Callers:
 *     InitializeWin32kFullTelemetryAsserts @ 0x140285B60 (InitializeWin32kFullTelemetryAsserts.c)
 * Callees:
 *     UninitializeTelemetryAssertsLocks @ 0x1403421D0 (UninitializeTelemetryAssertsLocks.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403D3280 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  struct _FAST_MUTEX *Pool2; // rax
  unsigned int v3; // ebx
  void *v4; // rax

  Pool2 = (struct _FAST_MUTEX *)ExAllocatePool2(66LL, 56LL, 1953657665LL);
  v3 = 0;
  g_AssertFastMutex = Pool2;
  if ( Pool2
    && (Pool2->Count = 1,
        Pool2->Owner = 0LL,
        Pool2->Contention = 0,
        KeInitializeEvent(&Pool2->Event, SynchronizationEvent, 0),
        v4 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL),
        (g_ModuleName = v4) != 0LL) )
  {
    memmove(v4, a1[1], *(unsigned __int16 *)a1);
    qword_14039C558 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1403D2040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1403D2008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1403D2078);
    _InterlockedIncrement(&g_AssertsOperational);
  }
  else
  {
    v3 = -1073741801;
    UninitializeTelemetryAssertsLocks();
  }
  return v3;
}
