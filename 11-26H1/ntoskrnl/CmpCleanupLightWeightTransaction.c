/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1408B5128
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x1408B4958 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x1408B4A8C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpTransDereferenceTransaction @ 0x1408F31C8 (CmpTransDereferenceTransaction.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive(v2);
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2);
  CmpUnlockRegistry(v3);
  CmpDetachFromRegistryProcess(&ApcState);
  LOCK_TRANSACTION_LIST();
  v4 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v5 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v5 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( BugCheckParameter2[7] )
    CmpTransDereferenceTransaction(BugCheckParameter2[7]);
}
