/*
 * XREFs of ProcLibTracePerfStatesErrata @ 0x14002CA54
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     ProcLibTraceNoPayloadEvent @ 0x14002C7B8 (ProcLibTraceNoPayloadEvent.c)
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
