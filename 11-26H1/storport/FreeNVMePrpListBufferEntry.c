/*
 * XREFs of FreeNVMePrpListBufferEntry @ 0x140045980
 * Callers:
 *     NvmeSubmitIoToSQ @ 0x140020590 (NvmeSubmitIoToSQ.c)
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerRequeueSQPendingRequests @ 0x1400F9ED4 (NvmeControllerRequeueSQPendingRequests.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

PSLIST_ENTRY __fastcall FreeNVMePrpListBufferEntry(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi

  v3 = *(unsigned int *)(a3 + 32);
  v5 = a2;
  if ( (_DWORD)v3 )
  {
    memset_0(*(void **)(a3 + 16), 0, 8 * v3);
    *(_DWORD *)(a3 + 32) = 0;
  }
  return ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8 * v5), (PSLIST_ENTRY)a3);
}
