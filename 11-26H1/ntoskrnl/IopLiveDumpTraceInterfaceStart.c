/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x1405D4D44
 * Callers:
 *     IoDiscardDeferredLiveDumpData @ 0x1405CE89C (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CEAAC (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405DA3E0 (IopLiveDumpTraceNoArgs.c)
 */

char IopLiveDumpTraceInterfaceStart()
{
  char result; // al
  int v1; // edx
  __int64 *v2; // rcx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_START;
    if ( v1 != 1 )
      v2 = LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_START;
    return IopLiveDumpTraceNoArgs(v2);
  }
  return result;
}
