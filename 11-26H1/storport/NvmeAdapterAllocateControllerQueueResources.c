/*
 * XREFs of NvmeAdapterAllocateControllerQueueResources @ 0x1400E47BC
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E661C (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeAdapterAllocateContiguousIoResources @ 0x1400D30CC (NvmeAdapterAllocateContiguousIoResources.c)
 *     NvmeAdapterFreeControllerQueueResources @ 0x1400E8E54 (NvmeAdapterFreeControllerQueueResources.c)
 */

__int64 __fastcall NvmeAdapterAllocateControllerQueueResources(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 Pool; // rax
  unsigned int v5; // eax
  unsigned int i; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  unsigned int v12; // esi
  __int64 ContiguousIoResources; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL);
  Pool = RaidAllocatePool(64LL, (unsigned int)(16 * *(_DWORD *)(a1 + 124)), 1380147538LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a1 + 24) = Pool;
  if ( !Pool )
    goto LABEL_11;
  v5 = *(_DWORD *)(a1 + 124);
  for ( i = 0; i < v5; v5 = *(_DWORD *)(a1 + 124) )
  {
    v7 = i++;
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 16 * v7 + 8) = -1;
  }
  v8 = RaidAllocatePool(64LL, v5 << 7, 1380147538LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a1 + 32) = v8;
  if ( v8 )
  {
    InitializeSListHead((PSLIST_HEADER)(a1 + 64));
    v9 = 316LL;
    v10 = 524LL;
    v11 = 0;
    if ( *(_DWORD *)v3 != 1314275652 )
      v9 = 524LL;
    v12 = (*(_DWORD *)(v9 + v3) + 7) & 0xFFFFFFF8;
    while ( v11 < *(_DWORD *)(a1 + 124) )
    {
      ContiguousIoResources = NvmeAdapterAllocateContiguousIoResources(v10, v12 + 1200);
      v14 = (unsigned __int64)v11 << 7;
      *(_QWORD *)(v14 + *(_QWORD *)(a1 + 32) + 16) = ContiguousIoResources;
      v15 = *(_QWORD *)(a1 + 32);
      if ( !*(_QWORD *)(v14 + v15 + 16) )
        goto LABEL_11;
      *(_WORD *)(v14 + v15 + 54) = v11;
      *(_WORD *)(v14 + *(_QWORD *)(a1 + 32) + 56) = -1;
      *(_DWORD *)(v14 + *(_QWORD *)(a1 + 32) + 80) = 0;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 64), (PSLIST_ENTRY)(*(_QWORD *)(a1 + 32) + v14));
      ++v11;
    }
  }
  else
  {
LABEL_11:
    v2 = -1073741801;
    NvmeAdapterFreeControllerQueueResources(a1);
  }
  return v2;
}
