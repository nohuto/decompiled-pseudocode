/*
 * XREFs of ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x140030330
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1400302B0 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 *     ndisGetMiniportIndicateList @ 0x140030AF0 (ndisGetMiniportIndicateList.c)
 *     ndisTracePeriodicReceivesStart @ 0x14008D3F0 (ndisTracePeriodicReceivesStart.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1400C55B0 (ndisTracePeriodicReceivesEnd.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C8844 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 */

void __fastcall ndisPeriodicReceivesWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 Clock; // rbp
  char v3; // si
  PNDIS_RW_LOCK_EX v4; // rdx
  _QWORD *v5; // rdi
  KSPIN_LOCK *v6; // r14
  struct _NET_BUFFER_LIST *MiniportIndicateList; // rax
  unsigned int v8; // edi
  __int64 v9; // rcx
  KIRQL v10; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v12; // si
  int v13; // ecx
  char *v14; // rdi
  KIRQL v15; // al
  _LIST_ENTRY *v16; // rdx
  _WORK_QUEUE_ITEM *p_WorkItem; // rcx
  __int64 v18; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  char v20[24]; // [rsp+30h] [rbp-18h]

  if ( BYTE1(dword_14011EFA0) )
  {
    v3 = 1;
    ndisTracePeriodicReceivesStart(a1);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    Clock = 0LL;
    v3 = 0;
  }
  v4 = Lock;
  v5 = (_QWORD *)(*((_QWORD *)Lock + 4) + (KeGetPcr()->Prcb.Number << 12));
  ++*v5;
  _InterlockedOr(v19, 0);
  v6 = (KSPIN_LOCK *)((char *)v4 + 16);
  if ( *((_QWORD *)v4 + 2) && *v5 <= 1uLL && *((struct _KTHREAD **)v4 + 3) != KeGetCurrentThread() )
  {
    *v5 = 0LL;
    KeAcquireSpinLockAtDpcLevel(v6);
    *v5 = 1LL;
    KeReleaseSpinLockFromDpcLevel(v6);
  }
  MiniportIndicateList = (struct _NET_BUFFER_LIST *)ndisGetMiniportIndicateList(a1);
  v8 = ndisDoPeriodicReceivesIndication(a1, MiniportIndicateList);
  v9 = KeGetPcr()->Prcb.Number << 12;
  *(_QWORD *)(*((_QWORD *)Lock + 4) + (unsigned int)v9) = *(_QWORD *)(*((_QWORD *)Lock + 4) + v9) - 1LL;
  if ( v3 )
  {
    v18 = WmiGetClock(0LL, 0LL);
    ndisTracePeriodicReceivesEnd(a1, v18 - Clock, v8);
  }
  a1->PeriodicReceiveQueue.WorkItemQueued = 0;
  _InterlockedOr(v19, 0);
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    if ( !_InterlockedExchange(&a1->PeriodicReceiveQueue.WorkItemQueued, 1) )
    {
      if ( HIBYTE(word_14011EFA4) )
        ndisTraceQueueWorkItem();
      v10 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)a1->RefCountTracker;
      v12 = v10;
      if ( RefCountTracker )
        NdisReferenceWithTag(RefCountTracker, 0x4Cu);
      v13 = a1->Ref.ReferenceCount + 1;
      a1->Ref.ReferenceCount = v13;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v20 = v13;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0xDu,
          (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
          (char)a1,
          *(_QWORD *)v20);
      }
      KeReleaseSpinLock(&a1->Ref.SpinLock, v12);
      v14 = (char *)qword_14011D440 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14 + 2);
      v16 = (_LIST_ENTRY *)*((_QWORD *)v14 + 1);
      p_WorkItem = &a1->PeriodicReceiveQueue.WorkItem;
      if ( (char *)v16->Flink != v14 )
        __fastfail(3u);
      a1->PeriodicReceiveQueue.WorkItem.List.Blink = v16;
      p_WorkItem->List.Flink = (_LIST_ENTRY *)v14;
      v16->Flink = &p_WorkItem->List;
      *((_QWORD *)v14 + 1) = p_WorkItem;
      ++*((_DWORD *)v14 + 6);
      KeReleaseSpinLock((PKSPIN_LOCK)v14 + 2, v15);
      KeReleaseSemaphore((PRKSEMAPHORE)v14 + 1, 0, 1, 0);
    }
    ndisQueuePeriodicReceivesTimer();
  }
  ndisDereferenceMiniport(a1, 0x4Cu);
}
