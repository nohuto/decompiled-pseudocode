/*
 * XREFs of NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400D38F4
 * Callers:
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     NvmeControllerCancelAllIoCompletionDPCs @ 0x1400F1470 (NvmeControllerCancelAllIoCompletionDPCs.c)
 *     NvmeControllerCompleteAllRequests @ 0x1400F189C (NvmeControllerCompleteAllRequests.c)
 *     NvmeControllerCompletionDpcQuiesce @ 0x1400F1914 (NvmeControllerCompletionDpcQuiesce.c)
 *     NvmeControllerCompletionQueuePollingQuiesce @ 0x1400F1A40 (NvmeControllerCompletionQueuePollingQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400FB564 (NvmeControllerSubmissionQueueQuiesce.c)
 */

__int64 __fastcall NvmeAdapterCompleteAllRequestsForSurpriseRemove(__int64 a1)
{
  NvmeControllerSubmissionQueueQuiesce(*(_QWORD *)(a1 + 1152));
  NvmeControllerCancelAllIoCompletionDPCs(*(_QWORD *)(a1 + 1152));
  NvmeControllerCompletionQueuePollingQuiesce(*(_QWORD *)(a1 + 1152));
  NvmeControllerCompletionDpcQuiesce(*(_QWORD *)(a1 + 1152));
  return NvmeControllerCompleteAllRequests(*(_QWORD *)(a1 + 1152), 0LL, 3221225486LL);
}
