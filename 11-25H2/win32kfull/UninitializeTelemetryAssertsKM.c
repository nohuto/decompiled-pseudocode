/*
 * XREFs of UninitializeTelemetryAssertsKM @ 0x1403420AC
 * Callers:
 *     UninitializeWin32kFullTelemetryAsserts @ 0x140285BC0 (UninitializeWin32kFullTelemetryAsserts.c)
 * Callees:
 *     TakeTelemetryAssertsLock @ 0x14021A760 (TakeTelemetryAssertsLock.c)
 *     UninitializeTelemetryAssertsLocks @ 0x1403421D0 (UninitializeTelemetryAssertsLocks.c)
 */

NTSTATUS UninitializeTelemetryAssertsKM()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  __int64 v2; // rax
  REGHANDLE v3; // rcx
  REGHANDLE v4; // rcx
  REGHANDLE v5; // rcx

  result = _InterlockedExchangeAdd(&g_AssertsOperational, 0);
  if ( result )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    if ( !(unsigned int)TakeTelemetryAssertsLock() )
    {
      while ( 1 )
      {
        v1 = g_MicrosoftTelemetryAssertsTriggeredList;
        if ( (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList == &g_MicrosoftTelemetryAssertsTriggeredList )
          break;
        if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList
          || (v2 = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList,
              *(_QWORD *)(*(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList + 8LL) != g_MicrosoftTelemetryAssertsTriggeredList) )
        {
          __fastfail(3u);
        }
        g_MicrosoftTelemetryAssertsTriggeredList = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList;
        *(_QWORD *)(v2 + 8) = &g_MicrosoftTelemetryAssertsTriggeredList;
        ExFreePoolWithTag((PVOID)(v1 - 32), 0x74727341u);
      }
      ExReleaseFastMutex(g_AssertFastMutex);
    }
    UninitializeTelemetryAssertsLocks();
    if ( g_ModuleName )
    {
      ExFreePoolWithTag(g_ModuleName, 0x74727341u);
      g_ModuleName = 0LL;
    }
    v3 = qword_1403D2098;
    qword_1403D2098 = 0LL;
    dword_1403D2078 = 0;
    EtwUnregister(v3);
    v4 = qword_1403D2028;
    qword_1403D2028 = 0LL;
    dword_1403D2008 = 0;
    EtwUnregister(v4);
    v5 = qword_1403D2060;
    qword_1403D2060 = 0LL;
    dword_1403D2040 = 0;
    return EtwUnregister(v5);
  }
  return result;
}
