/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140387494
 * Callers:
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcChargeDirtyPages @ 0x14039FBB0 (CcChargeDirtyPages.c)
 *     CcChargeDirtyPagesInternal @ 0x1404B349C (CcChargeDirtyPagesInternal.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B3580 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140385398 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcGetCurrentNumaNode @ 0x1404C70F0 (CcGetCurrentNumaNode.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404EA98C (CcBoostLowPriorityWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1405B34A4 (CcAdjustWriteBehindThreadPool.c)
 */

void __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  char v2; // si
  __int64 v5; // rcx
  __int64 CurrentNumaNode; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( CcEnablePerVolumeLazyWriter || (_BYTE)dword_140FBF22C || (unsigned int)CcNumberNumaNodes > 1 )
    return;
  CurrentNumaNode = CcGetCurrentNumaNode(a1, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 872) )
  {
    if ( !CcIsWriteBehindThreadpoolAtLowPriority(a1) )
      goto LABEL_18;
    v2 = 1;
    v7 = 0LL;
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a1 + 1056) > 0x2000uLL || a2 )
  {
    if ( CcIsWriteBehindThreadpoolAtLowPriority(a1) )
    {
      CcAdjustWriteBehindThreadPool(v9, 0LL);
      v2 = 1;
    }
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(CurrentNumaNode + 188)
    && !*(_DWORD *)(CurrentNumaNode + 176)
    && *(_QWORD *)(CurrentNumaNode + 104) == CurrentNumaNode + 104
    && *(_QWORD *)(CurrentNumaNode + 120) == CurrentNumaNode + 120 )
  {
    LOBYTE(v7) = 1;
    v8 = a1;
LABEL_15:
    CcAdjustWriteBehindThreadPool(v8, v7);
  }
LABEL_18:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() < 2u )
      CcBoostLowPriorityWorkerThread(a1, 0LL);
  }
}
