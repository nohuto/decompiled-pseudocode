/*
 * XREFs of ndisGetSharedMemoryAllocationDetails @ 0x140090EE0
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1400621F0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400AC73C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

__int64 __fastcall ndisGetSharedMemoryAllocationDetails(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r8d
  unsigned int *v7; // r9
  struct _NDIS_RECEIVE_QUEUE_BLOCK *ReceiveQueueByQueueId; // rax
  __int64 v9; // rcx
  KIRQL v10; // dl
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225659LL;
  if ( a1->Header.Type == 17 )
  {
    *(_QWORD *)(a3 + 8) = a1;
  }
  else
  {
    if ( a1->Header.Type != 18 )
      return 3221225485LL;
    *(_QWORD *)(a3 + 16) = a1;
    a1 = a1->BaseMiniport;
    *(_QWORD *)(a3 + 8) = a1;
    if ( !a1 )
    {
LABEL_11:
      *(_DWORD *)a3 = 1;
      return 0LL;
    }
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    v11 = 0;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v11);
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(
                              *(struct _NDIS_MINIPORT_BLOCK **)(a3 + 8),
                              *(_DWORD *)(a2 + 8),
                              v6,
                              v7);
    v9 = *(_QWORD *)(a3 + 8);
    v10 = v11;
    *(_QWORD *)(a3 + 24) = ReceiveQueueByQueueId;
    *(_QWORD *)(v9 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 96), v10);
  }
  else
  {
    *(_QWORD *)(a3 + 24) = a1->DefaultReceiveQueue;
  }
  if ( *(_QWORD *)(a3 + 24) )
    goto LABEL_11;
  return 3221225485LL;
}
