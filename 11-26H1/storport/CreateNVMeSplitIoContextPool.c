/*
 * XREFs of CreateNVMeSplitIoContextPool @ 0x14011979C
 * Callers:
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 *     AllocateNewNVMeIoSplitContext @ 0x1401191E0 (AllocateNewNVMeIoSplitContext.c)
 *     DeleteNVMeSplitIoContextPool @ 0x140119B78 (DeleteNVMeSplitIoContextPool.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall CreateNVMeSplitIoContextPool(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 Pool; // rax
  ULONG i; // edi
  unsigned int NodeNumber; // ebp
  __int64 v6; // rcx
  unsigned int j; // ebp
  struct _SLIST_ENTRY *NewNVMeIoSplitContext; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+30h] [rbp-68h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+A0h] [rbp+8h] BYREF
  ULONG Length; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 0;
  Pool = RaidAllocatePool(
           72LL,
           (unsigned int)(g_RecommendedSharedDataAlignment - 1)
         + 8LL * (unsigned int)g_MaximumProcessorCount
         - ((unsigned int)(g_RecommendedSharedDataAlignment - 1)
          + 8 * (unsigned __int64)(unsigned int)g_MaximumProcessorCount)
         % (unsigned int)g_RecommendedSharedDataAlignment,
           1380147538LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 888) = Pool;
  if ( Pool )
  {
    for ( i = 0; i < g_MaximumProcessorCount; ++i )
    {
      ProcNumber = 0;
      NodeNumber = 0x80000000;
      memset_0(&Information, 0, sizeof(Information));
      Length = 80;
      if ( KeGetProcessorNumberFromIndex(i, &ProcNumber) >= 0
        && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
      {
        NodeNumber = Information.NumaNode.NodeNumber;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 888) + 8LL * i) = RaidAllocatePoolEx(
                                                       72LL,
                                                       (unsigned int)(g_RecommendedSharedDataAlignment - 1)
                                                     + 32LL
                                                     - ((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment
                                                                                       - 1)
                                                      + 32)
                                                     % (unsigned int)g_RecommendedSharedDataAlignment,
                                                       1380147538LL,
                                                       *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                       NodeNumber);
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 888) + 8LL * i);
      if ( !v6 )
        goto LABEL_13;
      *(_DWORD *)(v6 + 16) = i;
      InitializeSListHead(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 888) + 8LL * i));
      for ( j = 0; j < 0x20; ++j )
      {
        NewNVMeIoSplitContext = (struct _SLIST_ENTRY *)AllocateNewNVMeIoSplitContext(a1, i);
        if ( !NewNVMeIoSplitContext )
          goto LABEL_13;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 888) + 8LL * i), NewNVMeIoSplitContext);
      }
    }
  }
  else
  {
LABEL_13:
    v2 = -1073741670;
    DeleteNVMeSplitIoContextPool(a1);
  }
  return v2;
}
