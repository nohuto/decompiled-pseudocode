/*
 * XREFs of AllocateNewNVMePrpListBufferEntry @ 0x140058120
 * Callers:
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     NvmeAllocateContiguousMemoryWithPreferredNode @ 0x14008F590 (NvmeAllocateContiguousMemoryWithPreferredNode.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall AllocateNewNVMePrpListBufferEntry(__int64 a1, ULONG a2)
{
  __int64 v2; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int NodeNumber; // r15d
  void *v10; // rax
  void *v11; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+30h] [rbp-78h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+8h] BYREF
  ULONG Length; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 128);
  v15 = 0LL;
  v5 = *(_QWORD *)(v2 + 8);
  v6 = (unsigned int)(g_RecommendedSharedDataAlignment - 1)
     + 64LL
     - ((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment - 1) + 64)
     % (unsigned int)g_RecommendedSharedDataAlignment;
  result = ExAllocatePool2(72LL, v6, 1296982354LL);
  v8 = result;
  if ( result || !v5 )
  {
    if ( !result )
      return result;
    ProcNumber = 0;
    NodeNumber = 0x80000000;
    memset_0(&Information, 0, sizeof(Information));
    Length = 80;
    if ( KeGetProcessorNumberFromIndex(a2, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
    {
      NodeNumber = Information.NumaNode.NodeNumber;
    }
    v10 = (void *)NvmeAllocateContiguousMemoryWithPreferredNode(4096LL, *(_QWORD *)(a1 + 128), NodeNumber, &v15);
    v11 = v10;
    if ( !v10 )
    {
      ExFreePoolWithTag((PVOID)v8, 0x4D4E6152u);
      return 0LL;
    }
    memset_0(v10, 0, 0x1000uLL);
    *(_QWORD *)(v8 + 24) = v15;
    *(_QWORD *)(v8 + 16) = v11;
    *(_WORD *)(v8 + 36) = 512;
  }
  else
  {
    RaidLogAllocationFailure(v5, 72, v6, 1296982354, 0x80000000);
  }
  return v8;
}
