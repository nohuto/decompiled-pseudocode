/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x140005C10
 * Callers:
 *     FirmwareGetInfo @ 0x140005A10 (FirmwareGetInfo.c)
 *     NVMeCheckOCPCompliance @ 0x140005D10 (NVMeCheckOCPCompliance.c)
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 *     NVMeAllocateAsyncEventCommands @ 0x14000EB70 (NVMeAllocateAsyncEventCommands.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     IoQueuesInitialize @ 0x140014D10 (IoQueuesInitialize.c)
 *     NVMeAllocateAsyncEventCommandsForMFND @ 0x140015D24 (NVMeAllocateAsyncEventCommandsForMFND.c)
 *     NVMeControllerAllocateLocalCommand @ 0x14001D1A8 (NVMeControllerAllocateLocalCommand.c)
 *     NVMeReservedCompletionQueueCreate @ 0x140029A20 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x140029EA4 (NVMeReservedSubmissionQueueCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  __int64 v4; // r12
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 244);
  v4 = a2;
  result = StorPortExtendedFunction(82LL, a1, a2, 0LL);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(82LL, a1, v4, 0LL);
  }
  return result;
}
