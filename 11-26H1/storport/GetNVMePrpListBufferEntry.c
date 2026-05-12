/*
 * XREFs of GetNVMePrpListBufferEntry @ 0x140047000
 * Callers:
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall GetNVMePrpListBufferEntry(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  PSLIST_ENTRY v3; // rax

  v2 = 0LL;
  v3 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8LL * a2));
  if ( v3 )
    return v3;
  return (PSLIST_ENTRY)v2;
}
