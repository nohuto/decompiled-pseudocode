/*
 * XREFs of CcPostWorkQueueAsyncLazywrite @ 0x140389E24
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x1405B6238 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14038B878 (CcPerfLogWorkItemEnqueue.c)
 */

void __fastcall CcPostWorkQueueAsyncLazywrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // r14
  __int64 v7; // r15
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 152);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
  {
    LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4, LockHandle.LockQueue.Next);
  }
  v10 = *(_DWORD *)(a1 + 128);
  if ( v10 != 7 && v10 != 4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
    v15 = *(_QWORD **)(v5 + 392);
    if ( *v15 == v5 + 384 )
    {
      *(_QWORD *)(a1 + 8) = v15;
      *(_QWORD *)a1 = v5 + 384;
      *v15 = a1;
      v16 = (_QWORD *)(v5 + 360);
      *(_QWORD *)(v5 + 392) = a1;
      v17 = *(_QWORD **)(v5 + 360);
      if ( v17 == (_QWORD *)(v5 + 360) )
        goto LABEL_14;
      if ( (_QWORD *)v17[1] == v16 )
      {
        v18 = *v17;
        if ( *(_QWORD **)(*v17 + 8LL) == v17 )
        {
          *v16 = v18;
          *(_QWORD *)(v18 + 8) = v16;
          v6 = v17;
          ++*(_DWORD *)(v5 + 376);
          CcReferencePartitionAndPrivateVolumeCacheMap(v4, v7);
          goto LABEL_14;
        }
      }
    }
LABEL_5:
    __fastfail(3u);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
  v11 = *(_QWORD **)(a2 + 8);
  if ( *v11 != a2 )
    goto LABEL_5;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v11;
  *v11 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( !*(_BYTE *)(v5 + 196) )
  {
    v12 = (_QWORD *)(v5 + 288);
    v13 = *(_QWORD **)(v5 + 288);
    if ( v13 != (_QWORD *)(v5 + 288) )
    {
      if ( (_QWORD *)v13[1] != v12 )
        goto LABEL_5;
      v14 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 )
        goto LABEL_5;
      *v12 = v14;
      v6 = v13;
      *(_QWORD *)(v14 + 8) = v12;
      ++*(_DWORD *)(v5 + 304);
      CcReferencePartitionAndPrivateVolumeCacheMap(v4, v7);
    }
  }
  if ( !*(_BYTE *)(v5 + 196) && (*(_DWORD *)(v7 + 1616) & 2) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 328), 0, 0);
LABEL_14:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
  {
    *v6 = 0LL;
    ExQueueWorkItemToPartition(v6, 0, *(_DWORD *)(v5 + 24));
  }
}
