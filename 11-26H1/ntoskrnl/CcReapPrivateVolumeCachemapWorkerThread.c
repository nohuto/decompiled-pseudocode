/*
 * XREFs of CcReapPrivateVolumeCachemapWorkerThread @ 0x14038BCD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 *     CcReapPrivateVolumeCachemap @ 0x14038BB90 (CcReapPrivateVolumeCachemap.c)
 */

char __fastcall CcReapPrivateVolumeCachemapWorkerThread(_QWORD *a1)
{
  __int64 v1; // rsi
  struct _KEVENT **v3; // r14
  struct _KEVENT *v4; // rbx
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *Flink; // rax
  _QWORD *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[7];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (struct _KEVENT **)(v1 + 80);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    v4 = *v3;
    if ( *v3 == (struct _KEVENT *)v3 )
      break;
    v5 = *(struct _LIST_ENTRY **)&v4->Header.Lock;
    if ( *(struct _KEVENT **)(*(_QWORD *)&v4->Header.Lock + 8LL) != v4 )
      goto LABEL_7;
    Flink = v4->Header.WaitListHead.Flink;
    if ( (struct _KEVENT *)Flink->Flink != v4 )
      goto LABEL_7;
    Flink->Flink = v5;
    v5->Blink = Flink;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    CcReapPrivateVolumeCachemap(v4 - 24);
  }
  v7 = *(_QWORD **)(v1 + 104);
  if ( *v7 != v1 + 96 )
LABEL_7:
    __fastfail(3u);
  a1[1] = v7;
  *a1 = v1 + 96;
  *v7 = a1;
  *(_QWORD *)(v1 + 104) = a1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcDereferencePartition(v1);
}
