/*
 * XREFs of ImpWaitForWorkerShutdown @ 0x1400BDAA4
 * Callers:
 *     ImSessionStop @ 0x1400BD4B8 (ImSessionStop.c)
 *     ImSessionStart @ 0x1400BDFF8 (ImSessionStart.c)
 * Callees:
 *     ImpReleaseLock @ 0x1400BF30C (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1400BF35C (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 ImpWaitForWorkerShutdown()
{
  unsigned int v0; // esi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 InputMonitorSessionState; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rcx

  v0 = 0;
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v4);
  ImpAcquireLock(InputMonitorSessionState + 72);
  if ( *(_BYTE *)(InputMonitorSessionState + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  ImpReleaseLock(InputMonitorSessionState + 72);
  if ( *(struct _KTHREAD **)(InputMonitorSessionState + 40) != KeGetCurrentThread() )
    v0 = ZwWaitForSingleObject(*(HANDLE *)(InputMonitorSessionState + 32), 0, 0LL);
  ZwClose(*(HANDLE *)(InputMonitorSessionState + 32));
  v8 = *(void **)(InputMonitorSessionState + 24);
  *(_QWORD *)(InputMonitorSessionState + 32) = 0LL;
  ExFreePoolWithTag(v8, 0);
  return v0;
}
