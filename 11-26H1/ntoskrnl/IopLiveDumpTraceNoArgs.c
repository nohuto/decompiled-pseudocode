/*
 * XREFs of IopLiveDumpTraceNoArgs @ 0x1405D7BE8
 * Callers:
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CC298 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405CE230 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCollectPages @ 0x1405CE958 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x1405CED50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405CEFA0 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpStartMirroringCallback @ 0x1405D1950 (IopLiveDumpStartMirroringCallback.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1405D2554 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405D2C0C (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 */

char IopLiveDumpTraceNoArgs()
{
  char result; // al

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return IopLiveDumpTrace();
  return result;
}
