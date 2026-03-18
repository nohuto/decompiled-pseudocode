/*
 * XREFs of ViHalPreprocessOptions @ 0x140B7923C
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140B74A38 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B74B44 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140B74BE0 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B74C74 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140B74D08 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140B74DA0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B74E40 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B74ED4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B74F60 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B74FE0 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140B75AD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B75DD0 (VfBuildScatterGatherListEx.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B76160 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B76250 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140B76C00 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B76F50 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140B77330 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B774E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B776B0 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140B780D8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140B78494 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140B78644 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140B788D0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140B78A00 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140B78FF8 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140B79670 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140B79A3C (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 */

__int64 ViHalPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  int v7; // ebx
  const CHAR *v8; // rdi
  __int64 result; // rax

  v7 = a3 & 0x10000000;
  v8 = a2;
  if ( (a3 & 0x10000000) != 0 )
    a3 = (unsigned int)a3 & 0xEFFFFFFF;
  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    if ( (unsigned int)a3 >= 0x28 )
    {
      *a1 = 4;
      goto LABEL_9;
    }
    a2 = (const char *)ViHalDefaultActions;
    result = *((unsigned int *)ViHalDefaultActions + a3);
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_9:
  VfUtilDbgPrint("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
  VfUtilDbgPrint("**\n");
  VfUtilDbgPrint("** VF: ");
  if ( v7 )
    DbgPrintEx(0x65u, 0, v8, a5, a6);
  else
    DbgPrintEx(0x65u, 0, v8, a4, a5, a6);
  VfUtilDbgPrint("\n");
  VfUtilDbgPrint("**\n");
  return VfUtilDbgPrint("*****************************************************************\n");
}
