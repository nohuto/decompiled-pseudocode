/*
 * XREFs of CcPostPVCMForDeleteToPartition @ 0x14039EC94
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E3B28 (CcForEachPrivateVolumeCacheMap.c)
 *     CcProcessDelayedDeletePVCM @ 0x140506DE0 (CcProcessDelayedDeletePVCM.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcPostPVCMDelayedDelete @ 0x1404F07E4 (CcPostPVCMDelayedDelete.c)
 */

void __fastcall CcPostPVCMForDeleteToPartition(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_BYTE)a3 && !*(_BYTE *)(v3 + 1294) )
  {
    LOBYTE(a3) = a2;
    CcPostPVCMDelayedDelete(v3, a1, a3);
    return;
  }
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 768), &LockHandle);
  v7 = *(_QWORD **)(v3 + 88);
  v8 = (_QWORD *)(a1 + 576);
  if ( *v7 != v3 + 80 )
LABEL_8:
    __fastfail(3u);
  *v8 = v3 + 80;
  *(_QWORD *)(a1 + 584) = v7;
  *v7 = v8;
  *(_QWORD *)(v3 + 88) = v8;
  v9 = (_QWORD *)(v3 + 96);
  *(_DWORD *)(a1 + 1616) |= 4u;
  v10 = *(_QWORD **)(v3 + 96);
  if ( v10 != (_QWORD *)(v3 + 96) )
  {
    if ( (_QWORD *)v10[1] != v9 )
      goto LABEL_8;
    v11 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      goto LABEL_8;
    *v9 = v11;
    v4 = v10;
    *(_QWORD *)(v11 + 8) = v9;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1296)) <= 1 )
      __fastfail(0xEu);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    *v4 = 0LL;
    ExQueueWorkItemToPartition(v4, 0, 0xFFFFFFFF);
  }
}
