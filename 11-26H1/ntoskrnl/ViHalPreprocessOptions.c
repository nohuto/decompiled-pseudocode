/*
 * XREFs of ViHalPreprocessOptions @ 0x140C2731C
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140C2293C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140C22A54 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140C22AFC (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140C22B9C (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140C22C34 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140C22CD0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140C22D7C (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140C22E10 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140C22E9C (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C22F1C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140C23A10 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C23D40 (VfBuildScatterGatherListEx.c)
 *     VfCreateCommonBufferFromMdl @ 0x140C240E0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140C241D0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140C24B80 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C24F00 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140C252F0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C254B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C25690 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140C2618C (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140C26560 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140C26718 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140C269A0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140C26AD4 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140C270C4 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140C27768 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140C27B3C (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
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
