/*
 * XREFs of MicrosoftTelemetryAssertTriggeredUM @ 0x180107A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MicrosoftTelemetryAssertTriggeredUM(__int64 a1)
{
  if ( *(_DWORD *)a1 == 11 )
    MicrosoftTelemetryAssertTriggeredWorker(a1);
}
