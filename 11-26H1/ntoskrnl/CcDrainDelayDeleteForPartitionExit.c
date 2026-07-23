/*
 * XREFs of CcDrainDelayDeleteForPartitionExit @ 0x1405B487C
 * Callers:
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 */

void __fastcall CcDrainDelayDeleteForPartitionExit(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  struct _KEVENT *v5; // rsi
  _QWORD *v6; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 768);
  v2 = (_QWORD *)(a1 + 112);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v4 = v3;
    v5 = (struct _KEVENT *)(v3 - 72);
    v3 = (_QWORD *)*v3;
    if ( (_QWORD *)v3[1] != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v3;
    v3[1] = v6;
    KeSetEvent(v5 + 49, 0, 0);
    LODWORD(v5[67].Header.WaitListHead.Flink) |= 4u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    CcDeletePrivateVolumeCacheMap((char *)v5);
    KeAcquireInStackQueuedSpinLock(v1, &LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
