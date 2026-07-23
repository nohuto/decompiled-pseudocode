/*
 * XREFs of CcProcessDelayedDeletePVCM @ 0x140506DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostPVCMForDeleteToPartition @ 0x14039EC94 (CcPostPVCMForDeleteToPartition.c)
 */

void __fastcall CcProcessDelayedDeletePVCM(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // r14
  _QWORD *v5; // rsi
  struct _KEVENT *v6; // r15
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = MEMORY[0xFFFFF78000000320];
  v3 = CcDelayedDeletePVCMLifetime / KeMaximumIncrement;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v4 = (_QWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 1504) = 0;
  v5 = *(_QWORD **)(a1 + 112);
  if ( v5 != (_QWORD *)(a1 + 112) )
  {
    do
    {
      v6 = (struct _KEVENT *)(v5 - 72);
      v7 = v5;
      v8 = v5[131];
      v5 = (_QWORD *)*v5;
      if ( v2 >= v3 + v8 || *(_BYTE *)(a1 + 1294) )
      {
        if ( (_QWORD *)v5[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
          __fastfail(3u);
        *v9 = v5;
        v5[1] = v9;
        KeSetEvent(v6 + 49, 0, 0);
        CcPostPVCMForDeleteToPartition((__int64)v6, 1, 0LL);
      }
    }
    while ( v5 != v4 );
    if ( (_QWORD *)*v4 != v4 )
    {
      KeSetCoalescableTimer((PKTIMER)(a1 + 1376), CcDelayedDeletePVCMInterval, 0, 0x3E8u, (PKDPC)(a1 + 1440));
      *(_BYTE *)(a1 + 1504) = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
