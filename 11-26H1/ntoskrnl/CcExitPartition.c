/*
 * XREFs of CcExitPartition @ 0x1405B4ED4
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x1406F51F0 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E3B28 (CcForEachPrivateVolumeCacheMap.c)
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x1405B3FDC (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1405B4C80 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rbx
  KIRQL v4; // al
  _QWORD **v5; // rdi
  unsigned __int64 v6; // rsi
  KIRQL v7; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1[1];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
  {
    if ( a2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
      v7 = KeAcquireSpinLockRaiseToDpc(&EmpParseLock.InGlobalUpdateVpThreadPriorityList);
      *(_BYTE *)(v2 + 1294) = 2;
      KeReleaseSpinLock(&EmpParseLock.InGlobalUpdateVpThreadPriorityList, v7);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( CcEnablePerVolumeLazyWriter )
        CcForEachPrivateVolumeCacheMap(v2);
      else
        CcPostDeferredWrites(v2, 0LL);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
        (const void *)v2,
        a1);
      CcDeletePartition((char *)v2);
    }
    else
    {
      CcNotifyWriteBehindInternal(v2, 2);
      if ( CcEnablePerVolumeLazyWriter )
        CcForEachPrivateVolumeCacheMap(v2);
      else
        CcWaitForCurrentLazyWriterActivityOnPartition(v2, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
      v4 = KeAcquireSpinLockRaiseToDpc(&EmpParseLock.InGlobalUpdateVpThreadPriorityList);
      *(_BYTE *)(v2 + 1294) = 1;
      KeReleaseSpinLock(&EmpParseLock.InGlobalUpdateVpThreadPriorityList, v4);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = (_QWORD **)(v2 + 640);
      v6 = v2 + 696;
      while ( *v5 != v5 || *(_QWORD *)(v2 + 672) != v6 || *(_QWORD *)(v2 + 680) != v6 )
      {
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 672), v2);
        CcDeleteSectionsForPartition(v5, v2);
      }
    }
  }
}
