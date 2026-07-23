/*
 * XREFs of CcPostWorkQueueSpecial @ 0x1404E8124
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140389220 (CcQueueLazyWriteScanThreadForVolume.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14038B878 (CcPerfLogWorkItemEnqueue.c)
 */

char __fastcall CcPostWorkQueueSpecial(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // r15
  char v6; // si
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  char v13; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 144);
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 128);
    v13 = v12 == 2 || v12 == 4;
    CcPerfLogWorkItemEnqueue(a2, a1, 0, v13);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
  if ( !*(_BYTE *)(v3 + 196) )
  {
    v9 = (_QWORD *)(v5 + 1560);
    v10 = *(_QWORD **)(v5 + 1560);
    if ( v10 != (_QWORD *)(v5 + 1560) )
    {
      if ( (_QWORD *)v10[1] != v9 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
        __fastfail(3u);
      *v9 = v11;
      *(_QWORD *)(v11 + 8) = v9;
      v4 = v10;
      v6 = 1;
      CcReferencePartitionAndPrivateVolumeCacheMap(v2, v5);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    v4[6] = a1;
    *v4 = 0LL;
    ExQueueWorkItemToPartition(v4, 0, *(_DWORD *)(v3 + 24));
  }
  return v6;
}
