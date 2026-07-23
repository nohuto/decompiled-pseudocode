/*
 * XREFs of CcPostWorkQueueRegular @ 0x1403881CC
 * Callers:
 *     CcPostWorkQueue @ 0x1403881A0 (CcPostWorkQueue.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140385398 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14038B878 (CcPerfLogWorkItemEnqueue.c)
 */

void __fastcall CcPostWorkQueueRegular(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // r13
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 152);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 128);
    if ( v10 == 2 || v10 == 4 )
      LOBYTE(a4) = 1;
    else
      a4 = 0LL;
    CcPerfLogWorkItemEnqueue(
      a2,
      a1,
      0LL,
      a4,
      LockHandle.LockQueue.Next,
      LockHandle.LockQueue.Lock,
      *(_QWORD *)&LockHandle.OldIrql);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 128) == 3
    && *(_QWORD *)(v5 + 104) != v5 + 104
    && (*(_QWORD *)(v4 + 1056) >= *(_QWORD *)(v4 + 1080) >> 2
     || *(_QWORD *)(v4 + 1056) > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 22464LL) >> 1)
    && !CcIsWriteBehindThreadpoolAtLowPriority(v4) )
  {
    *(_BYTE *)(v5 + 224) = 1;
  }
  v11 = *(_QWORD **)(a2 + 8);
  if ( *v11 != a2 )
LABEL_8:
    __fastfail(3u);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v11;
  *v11 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( !*(_BYTE *)(v5 + 196) )
  {
    v12 = v5 + 56;
    if ( *(_QWORD *)v12 != v12
      && (*(_DWORD *)(a1 + 128) != 2 || (unsigned int)(*(_DWORD *)(v5 + 188) + 1) <= *(_DWORD *)(v4 + 1288)) )
    {
      v6 = *(_QWORD **)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
        goto LABEL_8;
      v13 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_8;
      *(_QWORD *)v12 = v13;
      *(_QWORD *)(v13 + 8) = v12;
      ++*(_DWORD *)(v5 + 48);
      CcReferencePartitionAndPrivateVolumeCacheMap(v4, v7);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
  {
    *v6 = 0LL;
    ExQueueWorkItemToPartition(v6, 0, *(_DWORD *)(v5 + 24));
  }
}
