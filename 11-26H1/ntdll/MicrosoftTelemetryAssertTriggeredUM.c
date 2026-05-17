/*
 * XREFs of MicrosoftTelemetryAssertTriggeredUM @ 0x180108000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall MicrosoftTelemetryAssertTriggeredUM(__int64 a1, __int64 a2)
{
  struct _TEB *result; // rax

  if ( *(_DWORD *)a1 == 11 )
    return MicrosoftTelemetryAssertTriggeredWorker(a1, a2);
  return result;
}
