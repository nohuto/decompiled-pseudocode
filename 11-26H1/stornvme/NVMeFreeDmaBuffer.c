/*
 * XREFs of NVMeFreeDmaBuffer @ 0x14000FA50
 * Callers:
 *     ScsiModeSenseRequest @ 0x140005450 (ScsiModeSenseRequest.c)
 *     FirmwareGetInfo @ 0x140005A10 (FirmwareGetInfo.c)
 *     NVMeCheckOCPCompliance @ 0x140005D10 (NVMeCheckOCPCompliance.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 *     IoQueuesFreeResources @ 0x14000D2C0 (IoQueuesFreeResources.c)
 *     NVMeAllocateAsyncEventCommands @ 0x14000EB70 (NVMeAllocateAsyncEventCommands.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     AdminQueuesFreeResources @ 0x140011A00 (AdminQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x140014D10 (IoQueuesInitialize.c)
 *     NVMeAllocateAsyncEventCommandsForMFND @ 0x140015D24 (NVMeAllocateAsyncEventCommandsForMFND.c)
 *     IoctlDeleteReservedQueuePair @ 0x14001B478 (IoctlDeleteReservedQueuePair.c)
 *     NVMeControllerAllocateLocalCommand @ 0x14001D1A8 (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerFreeLocalCommand @ 0x14001D2D0 (NVMeControllerFreeLocalCommand.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x14001E080 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x140029400 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x140029EA4 (NVMeReservedSubmissionQueueCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeDmaBuffer(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax

  if ( !a3 )
    return 3238002689LL;
  v5 = *a3;
  if ( !v5 || !a4 )
    return 3238002689LL;
  result = StorPortExtendedFunction(83LL, a1, v5, a2);
  if ( !(_DWORD)result )
    *a3 = 0LL;
  return result;
}
