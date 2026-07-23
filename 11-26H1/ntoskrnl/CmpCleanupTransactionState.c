/*
 * XREFs of CmpCleanupTransactionState @ 0x1408B3328
 * Callers:
 *     CmObliterateRMTxArray @ 0x140861EC4 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140861FB0 (CmpLazyCommitWorker.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 *     CmpRunDownCmRM @ 0x1408B55A0 (CmpRunDownCmRM.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     LockRMLog @ 0x1408B3D64 (LockRMLog.c)
 *     CmpLogCheckpoint @ 0x1408B3F84 (CmpLogCheckpoint.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpTransDereferenceTransaction @ 0x1408F31C8 (CmpTransDereferenceTransaction.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  void **v10; // rax
  void *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive(v7);
  CmpTransMgrFreeVolatileData((ULONG_PTR)a2);
  CmpUnlockRegistry(v8);
  CmpDetachFromRegistryProcess(&ApcState);
  LOCK_TRANSACTION_LIST();
  v9 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (void **)a2[1], *v10 != a2) )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = v10;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v11 = (void *)a2[9];
  if ( v11 )
    ObDereferenceObjectDeferDelete(v11);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry();
    LockRMLog(a1);
    LOBYTE(v12) = 1;
    CmpLogCheckpoint(a1, v13, v12);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegion();
    CmpUnlockRegistry(v14);
  }
}
