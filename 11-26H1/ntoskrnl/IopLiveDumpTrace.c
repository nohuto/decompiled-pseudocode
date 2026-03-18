/*
 * XREFs of IopLiveDumpTrace @ 0x1405D78B4
 * Callers:
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x1404E4B64 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x1405CD8A4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405CE230 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCaptureDumpStart @ 0x1405CE660 (IopLiveDumpCaptureDumpStart.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405CF098 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1405D035C (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x1405D0C1C (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x1405D0DF0 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x1405D153C (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1405D1990 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x1405D1A9C (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x1405D1C0C (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x1405D1D2C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x1405D1E0C (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x1405D1F3C (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x1405D20FC (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1405D21E4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x1405D2308 (IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405D236C (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x1405D258C (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x1405D26BC (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x1405D27EC (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x1405D2880 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1405D29D8 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x1405D2A4C (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405D7A30 (IopLiveDumpTraceEventGeneric.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405D7BE8 (IopLiveDumpTraceNoArgs.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTrace()
{
  char result; // al
  ULONG UserDataCount; // edx
  const EVENT_DESCRIPTOR *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // r8

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0x201u, 0LL, 0LL, UserDataCount, UserData);
  return result;
}
