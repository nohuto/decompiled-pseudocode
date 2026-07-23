/*
 * XREFs of RtlGetUnloadEventTrace @ 0x18015BF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_UNLOAD_EVENT_TRACE RtlGetUnloadEventTrace(void)
{
  return (PRTL_UNLOAD_EVENT_TRACE)RtlpUnloadEventTrace;
}
