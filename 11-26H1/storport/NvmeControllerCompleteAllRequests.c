/*
 * XREFs of NvmeControllerCompleteAllRequests @ 0x1400F189C
 * Callers:
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400D38F4 (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeAdapterStorMQRemoveController @ 0x1400DF6F8 (NvmeAdapterStorMQRemoveController.c)
 *     NvmeControllerProcessPendingRequestForResetRecovery @ 0x14012BA9C (NvmeControllerProcessPendingRequestForResetRecovery.c)
 * Callees:
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 */

char __fastcall NvmeControllerCompleteAllRequests(__int64 a1, char a2, int a3)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
    NvmeCompleteSubmissionQueueRequests(*(_QWORD *)(a1 + 728) + 192 * i, a2, a3);
  return NvmeCompleteSubmissionQueueRequests(*(_QWORD *)(a1 + 712), a2, a3);
}
