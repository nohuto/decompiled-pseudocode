/*
 * XREFs of AllocateNewNVMeIoSplitContext @ 0x1401191E0
 * Callers:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     CreateNVMeSplitIoContextPool @ 0x14011979C (CreateNVMeSplitIoContextPool.c)
 * Callees:
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall AllocateNewNVMeIoSplitContext(__int64 a1, ULONG a2)
{
  unsigned int NodeNumber; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+30h] [rbp-58h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp+8h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+18h] BYREF

  ProcNumber = 0;
  NodeNumber = 0x80000000;
  memset_0(&Information, 0, sizeof(Information));
  Length = 80;
  if ( KeGetProcessorNumberFromIndex(a2, &ProcNumber) >= 0
    && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
  {
    NodeNumber = Information.NumaNode.NodeNumber;
  }
  return RaidAllocatePoolEx(72LL, 128LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL), NodeNumber);
}
