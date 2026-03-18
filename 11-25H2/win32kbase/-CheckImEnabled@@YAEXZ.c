/*
 * XREFs of ?CheckImEnabled@@YAEXZ @ 0x140088A10
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int8 CheckImEnabled(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 InputMonitorSessionState; // rbx
  __int64 v3; // r8

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  return *(_BYTE *)(InputMonitorSessionState + 561);
}
