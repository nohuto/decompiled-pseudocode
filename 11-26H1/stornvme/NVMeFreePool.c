/*
 * XREFs of NVMeFreePool @ 0x140017DB8
 * Callers:
 *     AdminQueueInitialize @ 0x1400067B0 (AdminQueueInitialize.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 *     IoQueuesFreeResources @ 0x14000D2C0 (IoQueuesFreeResources.c)
 *     AdminQueuesFreeResources @ 0x140011A00 (AdminQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x140014D10 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x140015460 (IoReservedQueuesInitialize.c)
 *     IoctlDeleteReservedQueuePair @ 0x14001B478 (IoctlDeleteReservedQueuePair.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x140029EA4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeIceInitPart2 @ 0x140031A48 (NVMeIceInitPart2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreePool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 )
    return StorPortExtendedFunction(1LL, a1, a2, a4);
  return result;
}
