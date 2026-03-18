/*
 * XREFs of PopSystemTimeToLocalTime @ 0x140524878
 * Callers:
 *     PopDiagTraceSmartSuspendPrediction @ 0x1407D4D24 (PopDiagTraceSmartSuspendPrediction.c)
 *     PopDiagTraceSmartSuspendValidation @ 0x1407D5088 (PopDiagTraceSmartSuspendValidation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
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
