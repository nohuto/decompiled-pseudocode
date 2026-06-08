/*
 * XREFs of ProcLibTracePerfStatesErrata @ 0x1400250C8
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     ProcLibTraceNoPayloadEvent @ 0x140024E2C (ProcLibTraceNoPayloadEvent.c)
 */

BOOLEAN __fastcall ProcLibTracePerfStatesErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PERF_STATES_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_PERF_STATES_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
