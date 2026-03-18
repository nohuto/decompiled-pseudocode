/*
 * XREFs of ImpCleanupWork @ 0x1400BDA18
 * Callers:
 *     ImSessionStop @ 0x1400BD4B8 (ImSessionStop.c)
 *     ImSessionStart @ 0x1400BDFF8 (ImSessionStart.c)
 * Callees:
 *     ImpCleanupLock @ 0x1400BD1D4 (ImpCleanupLock.c)
 *     ImpReleaseLock @ 0x1400BF30C (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1400BF35C (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 ImpCleanupWork()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 InputMonitorSessionState; // rbx
  __int64 v3; // r8
  PERESOURCE *v4; // rdi
  _QWORD **v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v10; // rax

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  v4 = (PERESOURCE *)(InputMonitorSessionState + 72);
  ImpAcquireLock(InputMonitorSessionState + 72);
  v5 = (_QWORD **)(InputMonitorSessionState + 56);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v10 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v10;
    v10[1] = v5;
    ExFreePoolWithTag(v6, 0);
  }
  ImpReleaseLock(v4);
  return ImpCleanupLock(v4, v7, v8);
}
