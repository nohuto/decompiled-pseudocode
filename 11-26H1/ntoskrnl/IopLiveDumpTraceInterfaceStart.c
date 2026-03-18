/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x1405D2554
 * Callers:
 *     IoDiscardDeferredLiveDumpData @ 0x1405CC088 (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CC298 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405D7BE8 (IopLiveDumpTraceNoArgs.c)
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
