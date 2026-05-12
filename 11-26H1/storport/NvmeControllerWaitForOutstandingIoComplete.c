/*
 * XREFs of NvmeControllerWaitForOutstandingIoComplete @ 0x1400FB8F0
 * Callers:
 *     NvmeControllerSendNonReadWriteCommand @ 0x14004CB10 (NvmeControllerSendNonReadWriteCommand.c)
 *     NvmeAdapterStorMQRemoveController @ 0x1400DF6F8 (NvmeAdapterStorMQRemoveController.c)
 *     NvmeControllerIoQueuesDeletion @ 0x1400F6E60 (NvmeControllerIoQueuesDeletion.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019F188 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     NvmeControllerIsOutstandingRequest @ 0x1400E1624 (NvmeControllerIsOutstandingRequest.c)
 */

char __fastcall NvmeControllerWaitForOutstandingIoComplete(__int64 a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  ULONG v5; // ebx
  char v6; // di

  v2 = 0;
  v4 = 1000000 * a2;
  v5 = 1000;
  while ( 1 )
  {
    v6 = 1;
    if ( !NvmeControllerIsOutstandingRequest(a1) )
      break;
    StorDelayExecution(v5);
    v2 += v5;
    if ( v4 && v2 >= v4 )
      return 0;
    if ( v5 < 0x186A0 )
    {
      v5 *= 2;
      if ( v5 >= 0x186A0 )
        v5 = 100000;
    }
  }
  return v6;
}
