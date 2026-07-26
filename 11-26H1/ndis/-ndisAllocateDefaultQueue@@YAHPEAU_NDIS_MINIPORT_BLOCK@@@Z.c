/*
 * XREFs of ?ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400733E0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocateDefaultQueue(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_RECEIVE_QUEUE_BLOCK *Pool2; // rax
  _LIST_ENTRY *p_FilterList; // rax
  _LIST_ENTRY *p_SharedMemoryList; // rax

  Pool2 = (_NDIS_RECEIVE_QUEUE_BLOCK *)ExAllocatePool2(64LL, 1224LL, 1970357326LL);
  a1->DefaultReceiveQueue = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  p_FilterList = &Pool2->FilterList;
  p_FilterList->Blink = p_FilterList;
  p_FilterList->Flink = p_FilterList;
  p_SharedMemoryList = &a1->DefaultReceiveQueue->SharedMemoryList;
  p_SharedMemoryList->Blink = p_SharedMemoryList;
  p_SharedMemoryList->Flink = p_SharedMemoryList;
  a1->DefaultReceiveQueue->QueueId = 0;
  a1->DefaultReceiveQueue->QueuePnPState = NdisReceiveQueuePnPStateAllocated;
  a1->DefaultReceiveQueue->QueueState = NdisReceiveQueueOperationalStateRunning;
  a1->DefaultReceiveQueue->Miniport = a1;
  a1->DefaultReceiveQueue->Reference = 1;
  return 0LL;
}
