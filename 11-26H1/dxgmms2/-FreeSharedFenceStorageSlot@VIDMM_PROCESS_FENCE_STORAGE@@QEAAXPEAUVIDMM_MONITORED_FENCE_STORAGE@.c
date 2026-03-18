/*
 * XREFs of ?FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036E7C
 * Callers:
 *     VidMmFreeFenceStorageSlot @ 0x140036E30 (VidMmFreeFenceStorageSlot.c)
 * Callees:
 *     ?DestroyFenceStoragePage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140037030 (-DestroyFenceStoragePage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::FreeSharedFenceStorageSlot(
        KSPIN_LOCK *this,
        VIDMM_FENCE_STORAGE_PAGE **a2)
{
  VIDMM_FENCE_STORAGE_PAGE *v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
  v3 = *a2;
  v4 = (_QWORD *)((char *)*a2 + 8);
  *((_QWORD *)*a2 + 13) &= ~(1LL << ((unsigned __int64)*((unsigned int *)a2 + 4) >> 6));
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( ((_BYTE)a2[5] & 1) != 0 )
  {
    if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedNativeFence )
      --VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedNativeFence;
  }
  else if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedMonitoredFence )
  {
    --VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedMonitoredFence;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VIDMM_FENCE_STORAGE_PAGE::DestroyFenceStoragePage(v3);
}
