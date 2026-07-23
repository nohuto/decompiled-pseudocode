/*
 * XREFs of CcFindPrivateVolumeCacheMap @ 0x1403E530C
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E51AC (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403E6E08 (CcInsertPrivateVolumeCacheMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall CcFindPrivateVolumeCacheMap(__int64 a1, __int64 a2, __int64 a3)
{
  volatile __int64 *v3; // rdi
  char v4; // r13
  _QWORD *v5; // rbx
  __int64 v7; // r15
  _QWORD *v8; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rdx
  _QWORD *i; // rax
  _QWORD *j; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+48h] [rbp-18h] BYREF
  char v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+50h] BYREF

  v3 = (volatile __int64 *)(a1 + 768);
  v4 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 768);
  v5 = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  memset(&v20, 0, sizeof(v20));
  v22 = 0LL;
  v21 = 0;
  v7 = a1;
  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v10 = _InterlockedExchange64(v3, (__int64)&LockHandle);
    if ( v10 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v10, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v3);
  }
  for ( i = *(_QWORD **)(v7 + 32); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(v7 + 32) )
    {
      for ( j = *(_QWORD **)(v7 + 112); ; j = (_QWORD *)*j )
      {
        if ( j == (_QWORD *)(v7 + 112) )
          goto LABEL_13;
        v14 = (_QWORD *)*j;
        v5 = j - 72;
        if ( *(j - 70) == a2 )
          break;
      }
      if ( (_QWORD *)v14[1] == j )
      {
        v18 = (_QWORD *)j[1];
        if ( (_QWORD *)*v18 == j )
        {
          *v18 = v14;
          v14[1] = v18;
          ++*((_DWORD *)v5 + 1);
          v8 = j - 72;
          CcInsertPrivateVolumeCacheMap(v7, (_DWORD)v5, (unsigned int)&v22, 1, 1, (__int64)&v21);
          v4 = v21;
          goto LABEL_13;
        }
      }
LABEL_23:
      __fastfail(3u);
    }
    v5 = i - 72;
    if ( *(i - 70) == a2 )
      break;
  }
  ++*((_DWORD *)v5 + 1);
  v8 = i - 72;
LABEL_13:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    v15 = v5[5];
    if ( v15 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v20);
      v16 = v5 + 74;
      v17 = *(_QWORD **)(v15 + 224);
      if ( *v17 != v15 + 216 )
        goto LABEL_23;
      v16[1] = v17;
      *v16 = v15 + 216;
      *v17 = v16;
      *(_QWORD *)(v15 + 224) = v16;
      KeReleaseInStackQueuedSpinLock(&v20);
    }
  }
  return v8;
}
