/*
 * XREFs of ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036CC8
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400369B8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORE.c)
 * Callees:
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036DB4 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?FindAvailableStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_LIST_ENTRY@@W4VIDMM_NATIVE_FENCE_STORAGE_TYPE@@@Z @ 0x140037058 (-FindAvailableStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITOR.c)
 */

char __fastcall VIDMM_PROCESS_FENCE_STORAGE::FindAvailableFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  KSPIN_LOCK **v3; // r14
  char v4; // bl
  KSPIN_LOCK *v7; // rdi
  KSPIN_LOCK v9; // rax
  KSPIN_LOCK **v10; // rcx
  KSPIN_LOCK **v11; // rax
  KSPIN_LOCK v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = (KSPIN_LOCK **)(this + 3);
  v4 = 0;
  if ( g_Feature_FenceStorageUsingVidMmAlloc )
    return VIDMM_PROCESS_FENCE_STORAGE::FindAvailableStorageSlot(this, a2, a3, this + 3);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
  v7 = *v3;
  if ( *v3 != (KSPIN_LOCK *)v3 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot((VIDMM_FENCE_STORAGE_PAGE *)(v7 - 1), a3);
    if ( v7[12] == -1LL )
    {
      v9 = *v7;
      if ( *(KSPIN_LOCK **)(*v7 + 8) != v7
        || (v10 = (KSPIN_LOCK **)v7[1], *v10 != v7)
        || (*v10 = (KSPIN_LOCK *)v9,
            *(_QWORD *)(v9 + 8) = v10,
            v11 = (KSPIN_LOCK **)(this + 1),
            v12 = this[1],
            *(KSPIN_LOCK **)(v12 + 8) != this + 1) )
      {
        __fastfail(3u);
      }
      *v7 = v12;
      v7[1] = (KSPIN_LOCK)v11;
      *(_QWORD *)(v12 + 8) = v7;
      *v11 = v7;
    }
    v4 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
