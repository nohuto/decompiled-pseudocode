/*
 * XREFs of FsRtlUninitializeFileLock @ 0x1403BE8B0
 * Callers:
 *     FsRtlFreeFileLock @ 0x1403BE880 (FsRtlFreeFileLock.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     RtlDeleteNoSplay @ 0x1403C0570 (RtlDeleteNoSplay.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403FA128 (FsRtlCompleteLockIrpReal.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rbx
  KIRQL v3; // r12
  _RTL_SPLAY_LINKS **v4; // r14
  _RTL_SPLAY_LINKS *v5; // rdi
  PRTL_SPLAY_LINKS *v6; // rsi
  PRTL_SPLAY_LINKS v7; // rdi
  _QWORD *i; // rdi
  _RTL_SPLAY_LINKS *v9; // rsi
  _RTL_SPLAY_LINKS *Parent; // rdx
  __int64 v11; // rsi
  KIRQL v12; // dl
  char v13; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (char *)FileLock->LockInformation;
  if ( LockInformation )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    v4 = (_RTL_SPLAY_LINKS **)(LockInformation + 32);
    while ( 1 )
    {
      v5 = *v4;
      if ( !*v4 )
        break;
      v9 = v5 - 1;
      while ( v9->Parent )
      {
        Parent = v9->Parent;
        v9->Parent = v9->Parent->Parent;
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, Parent);
      }
      RtlDeleteNoSplay(v5, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, &v5[-1]);
    }
    v6 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      RtlDeleteNoSplay(*v6, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlExclusiveLockLookasideList, v7);
    }
    for ( i = (_QWORD *)*((_QWORD *)LockInformation + 6); i; i = (_QWORD *)*((_QWORD *)LockInformation + 6) )
    {
      *((_QWORD *)LockInformation + 6) = *i;
      v11 = i[3];
      KxReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3);
      *(_BYTE *)(v11 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL);
      v12 = *(_BYTE *)(v11 + 69);
      if ( *(_BYTE *)(v11 + 68) )
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        *i = FsRtlFileLockCancelCollideList;
        FsRtlFileLockCancelCollideList = (__int64)i;
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        KeReleaseSpinLock(&FsRtlFileLockCancelCollideLock, v3);
        *(_QWORD *)(v11 + 56) = 0LL;
        FsRtlCompleteLockIrpReal(*((_QWORD *)LockInformation + 1), i[2], v11, 3221225598LL, &v13, 0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, i);
        v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3);
    KeReleaseSpinLock(&FsRtlFileLockCancelCollideLock, v3);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    FileLock->LockInformation = 0LL;
  }
}
