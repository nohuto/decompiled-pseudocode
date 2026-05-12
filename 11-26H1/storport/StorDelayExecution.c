/*
 * XREFs of StorDelayExecution @ 0x140032790
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     StorReset @ 0x140050A30 (StorReset.c)
 *     NvmeAdapterWaitForOutstandingIoComplete @ 0x1400E0D70 (NvmeAdapterWaitForOutstandingIoComplete.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E7904 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E80DC (NvmeAdapterEnableFabricController.c)
 *     NvmeControllerCompletionDpcQuiesce @ 0x1400F1914 (NvmeControllerCompletionDpcQuiesce.c)
 *     NvmeControllerCompletionQueuePollingQuiesce @ 0x1400F1A40 (NvmeControllerCompletionQueuePollingQuiesce.c)
 *     NvmeControllerPowerDown @ 0x1400F7FE8 (NvmeControllerPowerDown.c)
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 *     NvmeControllerStorMQQuiesceCompletionDPCs @ 0x1400FAFEC (NvmeControllerStorMQQuiesceCompletionDPCs.c)
 *     NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400FB2AC (NvmeControllerSubmissionQueueCompletionQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400FB564 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400FB8F0 (NvmeControllerWaitForOutstandingIoComplete.c)
 *     NvmeNamespaceWaitForOutstandingIoComplete @ 0x140116210 (NvmeNamespaceWaitForOutstandingIoComplete.c)
 *     NvmeNamespaceWaitForPendingRequestsDrain @ 0x14011629C (NvmeNamespaceWaitForPendingRequestsDrain.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDelayExecution(ULONG MicroSeconds)
{
  __int64 v1; // rbx
  __int64 Timer; // rax
  void *v3; // rbx
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v1 = MicroSeconds;
  if ( KeGetCurrentIrql() >= 2u || (unsigned int)v1 < StorMinimumTimeInterval / 0xAu )
  {
    KeStallExecutionProcessor(v1);
  }
  else
  {
    Interval.QuadPart = -10 * v1;
    if ( (unsigned int)v1 < StorMaximumTimeInterval / 0xAu
      && (Timer = ExAllocateTimer(0LL, 0LL, 4LL), (v3 = (void *)Timer) != 0LL) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
        Timer,
        (union _LARGE_INTEGER)Interval.QuadPart,
        0LL,
        0LL);
      KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
      ExDeleteTimer(v3, 0LL, 0LL, 0LL);
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
}
