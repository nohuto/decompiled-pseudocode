/*
 * XREFs of ?CheckImEnabled@@YAEXZ @ 0x1401596C0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int8 CheckImEnabled(void)
{
  __int64 InputMonitorSessionState; // rbx

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  return *(_BYTE *)(InputMonitorSessionState + 561);
}
