/*
 * XREFs of FreeNVMeSGLBufferContext @ 0x140119DA0
 * Callers:
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall FreeNVMeSGLBufferContext(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r8

  if ( a3 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 184LL);
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(a2 + 56);
  }
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_BYTE *)(a2 + 126) = 0;
  return ExpInterlockedPushEntrySList(
           *(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * *(unsigned int *)(a2 + 120)),
           (PSLIST_ENTRY)a2);
}
