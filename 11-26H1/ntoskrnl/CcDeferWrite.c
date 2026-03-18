/*
 * XREFs of CcDeferWrite @ 0x1403E0210
 * Callers:
 *     DifCcDeferWriteWrapper @ 0x14064D7D0 (DifCcDeferWriteWrapper.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1403843F0 (CcDereferencePartition.c)
 *     KeRcuReadLock @ 0x140384590 (KeRcuReadLock.c)
 *     CcReferencePartitionFromFileObject @ 0x14038462C (CcReferencePartitionFromFileObject.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140386DD4 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcPostDeferredWrites @ 0x14039B61C (CcPostDeferredWrites.c)
 *     ExInterlockedInsertHeadList @ 0x1403DE3D0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1403DE450 (ExInterlockedInsertTailList.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x1403E03E0 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E07DC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E0844 (CcNotifyWriteBehindVolume.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  __int64 v10; // rcx
  char *PoolWithTag; // rsi
  __int64 v12; // rbx
  __int64 PrivateVolumeCacheMapFromFileObject; // rdi
  KSPIN_LOCK *v14; // r8
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeRcuReadLock(v10);
    v12 = CcReferencePartitionFromFileObject((__int64)FileObject);
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(FileObject, v12);
    KeRcuReadUnlock();
    CcReferencePartitionAndPrivateVolumeCacheMap(v12, PrivateVolumeCacheMapFromFileObject);
    v14 = (KSPIN_LOCK *)(v12 + 1216);
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    v15 = (struct _LIST_ENTRY *)(PoolWithTag + 24);
    *((_QWORD *)PoolWithTag + 9) = v12;
    *((_QWORD *)PoolWithTag + 10) = PrivateVolumeCacheMapFromFileObject;
    v16 = (struct _LIST_ENTRY *)(PrivateVolumeCacheMapFromFileObject + 1104);
    *(_DWORD *)PoolWithTag = 6816508;
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    *((_QWORD *)PoolWithTag + 12) = MEMORY[0xFFFFF78000000320];
    if ( !PrivateVolumeCacheMapFromFileObject )
      v16 = (struct _LIST_ENTRY *)(v12 + 1168);
    PoolWithTag[88] = 0;
    if ( Retrying )
      ExInterlockedInsertHeadList(v16, v15, v14);
    else
      ExInterlockedInsertTailList(v16, v15, v14);
    CcPostDeferredWrites(v12, PrivateVolumeCacheMapFromFileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &LockHandle);
    if ( CcEnablePerVolumeLazyWriter )
    {
      CcNotifyWriteBehindVolume(
        PrivateVolumeCacheMapFromFileObject,
        *(_BYTE *)(PrivateVolumeCacheMapFromFileObject + 1172) != 0 ? 16 : 4);
      if ( !*(_BYTE *)(PrivateVolumeCacheMapFromFileObject + 1172) )
        *(_BYTE *)(PrivateVolumeCacheMapFromFileObject + 985) = 1;
    }
    else
    {
      CcNotifyWriteBehindInternal(v12, *(_BYTE *)(v12 + 1292) != 0 ? 16 : 4);
      if ( !*(_BYTE *)(v12 + 1292) )
        *(_BYTE *)(v12 + 1049) = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    CcDereferencePartition(v12);
  }
  else
  {
    guard_dispatch_icall_no_overrides(Context1, Context2);
  }
}
