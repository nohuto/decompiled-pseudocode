/*
 * XREFs of PopSystemTimeToLocalTime @ 0x140526EE8
 * Callers:
 *     PopDiagTraceSmartSuspendPrediction @ 0x1407D7EDC (PopDiagTraceSmartSuspendPrediction.c)
 *     PopDiagTraceSmartSuspendValidation @ 0x1407D8240 (PopDiagTraceSmartSuspendValidation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 */

struct _LIST_ENTRY *PopSystemTimeToLocalTime()
{
  struct _LIST_ENTRY *result; // rax
  __int64 v1; // r8
  _QWORD *v2; // r9

  result = PsGetCurrentServerSiloGlobals();
  *v2 = v1 - (unsigned __int64)result[76].Blink[27].Blink;
  return result;
}
