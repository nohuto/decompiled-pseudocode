/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x14002C7B8
 * Callers:
 *     ProcLibTraceIdleStatesErrata @ 0x14002C78C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x14002C810 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x14002CA54 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002CB44 (ProcLibTraceThrottleStatesErrata.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor, 0LL, (ULONG)0, 0LL);
  return result;
}
