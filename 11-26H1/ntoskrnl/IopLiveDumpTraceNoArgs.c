/*
 * XREFs of IopLiveDumpTraceNoArgs @ 0x1405DA3E0
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CEAAC (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405D0A40 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x1405D1560 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405D17B0 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpStartMirroringCallback @ 0x1405D4140 (IopLiveDumpStartMirroringCallback.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1405D4D44 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405D53FC (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 */

char IopLiveDumpTraceNoArgs()
{
  char result; // al

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return IopLiveDumpTrace();
  return result;
}
