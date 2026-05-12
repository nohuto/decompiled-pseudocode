/*
 * XREFs of FreeNVMeChainedIoSplitContext @ 0x140057B10
 * Callers:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeProcessIoForResetRecovery @ 0x1400FFB24 (NvmeProcessIoForResetRecovery.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall FreeNVMeChainedIoSplitContext(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  __int64 v6; // r9
  PSLIST_ENTRY result; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx

  if ( a4 )
  {
    v5 = *(_QWORD *)(a4 + 184);
    v6 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v6 + 64);
    result = *(PSLIST_ENTRY *)(v6 + 72);
    *(_QWORD *)(v5 + 24) = result;
  }
  if ( a3 )
  {
    v8 = 8LL * a2;
    do
    {
      v9 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a3 + 88) = 0LL;
      *(_DWORD *)(a3 + 108) = 0;
      *(_DWORD *)(a3 + 104) = 0;
      result = ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 888) + v8), (PSLIST_ENTRY)a3);
      a3 = v9;
    }
    while ( v9 );
  }
  return result;
}
