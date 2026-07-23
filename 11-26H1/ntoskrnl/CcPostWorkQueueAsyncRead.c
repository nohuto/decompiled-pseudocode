/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x140389A38
 * Callers:
 *     CcAsyncCopyRead @ 0x140389580 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140389F7C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14038B878 (CcPerfLogWorkItemEnqueue.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r13
  __int64 v6; // rsi
  _QWORD *v8; // r14
  _SLIST_ENTRY *Next; // rax
  unsigned int Next_high; // ecx
  unsigned __int64 *v11; // rbx
  char v12; // r14
  AutoBoost *v13; // rax
  AutoBoost *v14; // rbp
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 PoolWithTagFromNode; // rax
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 v22; // r15
  AutoBoost *v23; // rax
  AutoBoost *v24; // rdi
  signed __int64 v25; // r9
  signed __int64 v26; // rax
  signed __int64 v27; // rdx
  unsigned __int64 v28; // rtt
  signed __int64 v29; // rax
  signed __int64 v30; // rdx
  unsigned __int64 v31; // rtt
  char ShouldSpinAsyncReadWorkerThread; // al
  _QWORD *v33; // rcx
  AutoBoost *v34; // rax
  volatile unsigned __int8 *v35; // rdx
  unsigned int v36; // r9d
  AutoBoost *v37; // rbp
  __int64 v38; // rdx
  char v39; // r15
  _QWORD *v40; // rax
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  unsigned __int64 v43; // rtt
  __int64 v44; // [rsp+20h] [rbp-48h]
  unsigned int v45; // [rsp+80h] [rbp+18h]
  __int64 v46; // [rsp+88h] [rbp+20h] BYREF

  v4 = *((_QWORD *)&ListEntry[8].Next + 1);
  v6 = *((_QWORD *)&ListEntry[9].Next + 1);
  v46 = 0LL;
  v8 = 0LL;
  Next = ListEntry[9].Next;
  Next_high = HIDWORD(ListEntry[7].Next);
  v44 = (__int64)Next;
  v45 = Next_high;
  v11 = (unsigned __int64 *)(&Next[72].Next + 1);
  if ( !CcEnablePerVolumeLazyWriter )
    v11 = (unsigned __int64 *)(v4 + 1224);
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
  {
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL, Next);
    Next_high = v45;
  }
  if ( LODWORD(ListEntry[8].Next) == 5 )
  {
    v12 = 0;
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, a4);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v14 + 33) |= 2u;
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v15 = *(_QWORD **)(a2 + 8);
    if ( *v15 != a2 )
LABEL_12:
      __fastfail(3u);
    ListEntry->Next = (_SLIST_ENTRY *)a2;
    *((_QWORD *)&ListEntry->Next + 1) = v15;
    *v15 = ListEntry;
    *(_QWORD *)(a2 + 8) = ListEntry;
    v33 = (_QWORD *)(*(_QWORD *)(v6 + 264) + 16LL * v45);
    if ( (_QWORD *)*v33 == v33 || *(_DWORD *)(*(_QWORD *)(v6 + 240) + 4LL * v45) <= 1u )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v6 + 272) + 24LL * v45), 0, 0);
    else
      v12 = 1;
    _m_prefetchw(v11);
    v29 = *v11;
    v30 = *v11 - 16;
    if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v30 = 0LL;
    if ( (v29 & 2) != 0 || (v31 = *v11, v31 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v30, v29)) )
      ExfReleasePushLock(v11);
    KeAbPostRelease((unsigned __int64)v11);
    if ( !v12 )
    {
      ShouldSpinAsyncReadWorkerThread = CcShouldSpinAsyncReadWorkerThread(v4, v6, &v46, v45);
      v8 = (_QWORD *)v46;
      if ( ShouldSpinAsyncReadWorkerThread )
      {
        if ( !v46 )
          return;
        *(_DWORD *)(*(_QWORD *)(v6 + 280) + 4 * (101LL * v45 + *(unsigned int *)(v46 + 40))) = 0;
      }
      goto LABEL_34;
    }
  }
  else
  {
    v16 = (_QWORD *)(*(_QWORD *)(v6 + 264) + 16LL * Next_high);
    v17 = Next_high;
    if ( (_QWORD *)*v16 == v16 )
    {
      v18 = *(unsigned int *)(*(_QWORD *)(v6 + 248) + 4LL * Next_high);
      if ( (unsigned int)v18 < CcMaxNumberCompleteAsyncReadExWorkItems )
        goto LABEL_15;
    }
    v34 = (AutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, a4);
    v37 = v34;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v34, (__int64)v11);
    if ( v37 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v35) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v37 + 33), v35, 1u, v36);
      }
      else
      {
        *((_BYTE *)v37 + 10) = 1;
      }
    }
    v17 = v45;
    v38 = *(_QWORD *)(v6 + 264) + 16LL * v45;
    if ( *(_QWORD *)v38 == v38
      && *(_DWORD *)(*(_QWORD *)(v6 + 248) + 4LL * v45) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v39 = 0;
    }
    else
    {
      v40 = *(_QWORD **)(v38 + 8);
      if ( *v40 != v38 )
        goto LABEL_12;
      ListEntry->Next = (_SLIST_ENTRY *)v38;
      v39 = 1;
      *((_QWORD *)&ListEntry->Next + 1) = v40;
      *v40 = ListEntry;
      *(_QWORD *)(v38 + 8) = ListEntry;
    }
    _m_prefetchw(v11);
    v41 = *v11;
    v42 = *v11 - 16;
    if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v42 = 0LL;
    if ( (v41 & 2) != 0 || (v43 = *v11, v43 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v42, v41)) )
      ExfReleasePushLock(v11);
    KeAbPostRelease((unsigned __int64)v11);
    if ( !v39 )
    {
LABEL_15:
      v19 = *(unsigned int *)(v6 + 24);
      LODWORD(v19) = v19 | 0x80000000;
      PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(v18, 80LL, 1901552451LL, v19);
      v22 = PoolWithTagFromNode;
      if ( !PoolWithTagFromNode )
      {
        **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
        CcCompleteAsyncRead(ListEntry);
        CcFreeWorkQueueEntry(ListEntry);
        return;
      }
      *(_DWORD *)(PoolWithTagFromNode + 32) = 4;
      *(_QWORD *)(PoolWithTagFromNode + 56) = v4;
      *(_QWORD *)(PoolWithTagFromNode + 64) = v44;
      *(_DWORD *)(PoolWithTagFromNode + 36) = v45;
      *(_QWORD *)(PoolWithTagFromNode + 72) = v6;
      *(_QWORD *)(PoolWithTagFromNode + 48) = ListEntry;
      *(_QWORD *)PoolWithTagFromNode = 0LL;
      *(_QWORD *)(PoolWithTagFromNode + 16) = CcCompleteAsyncReadWorker;
      *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
      v23 = (AutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, v21);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v23, (__int64)v11);
      if ( v24 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          *((_BYTE *)v24 + 33) |= 2u;
        else
          *((_BYTE *)v24 + 10) = 1;
      }
      *(_DWORD *)(v22 + 40) = (*(_DWORD *)(*(_QWORD *)(v6 + 248) + 4 * v17))++;
      CcReferencePartitionAndPrivateVolumeCacheMap(v4, v44);
      _m_prefetchw(v11);
      v26 = *v11;
      v27 = *v11 - 16;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v27 = v25;
      if ( (v26 & 2) != 0
        || (v28 = *v11, v28 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v27, v26)) )
      {
        ExfReleasePushLock(v11);
      }
      KeAbPostRelease((unsigned __int64)v11);
      *(_QWORD *)v22 = 0LL;
      ExQueueWorkItemToPartition((_QWORD *)v22, 46, *(_DWORD *)(v6 + 24));
LABEL_34:
      if ( v8 )
      {
        *v8 = 0LL;
        ExQueueWorkItemToPartition(v8, 0, *(_DWORD *)(v6 + 24));
      }
    }
  }
}
