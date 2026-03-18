/*
 * XREFs of ?FindAvailableMonitoredValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004E8B4
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400369B8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORE.c)
 * Callees:
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036DB4 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?FindAvailableStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_LIST_ENTRY@@W4VIDMM_NATIVE_FENCE_STORAGE_TYPE@@@Z @ 0x140037058 (-FindAvailableStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITOR.c)
 */

char __fastcall VIDMM_PROCESS_FENCE_STORAGE::FindAvailableMonitoredValueStorageSlot(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  _QWORD **v3; // r14
  char v4; // bl
  _QWORD *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = (_QWORD **)((char *)this + 88);
  v4 = 0;
  if ( g_Feature_FenceStorageUsingVidMmAlloc )
    return VIDMM_PROCESS_FENCE_STORAGE::FindAvailableStorageSlot(
             (__int64)this,
             (__int64)a2,
             (__int64)a3,
             (_QWORD **)this + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 15, &LockHandle);
  v8 = *v3;
  if ( *v3 != v3 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot((VIDMM_FENCE_STORAGE_PAGE *)(v8 - 1), a3);
    if ( v8[12] == -1LL )
    {
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8
        || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8)
        || (*v10 = v9,
            *(_QWORD *)(v9 + 8) = v10,
            v11 = (_QWORD *)((char *)this + 56),
            v12 = *((_QWORD *)this + 7),
            *(VIDMM_PROCESS_FENCE_STORAGE **)(v12 + 8) != (VIDMM_PROCESS_FENCE_STORAGE *)((char *)this + 56)) )
      {
        __fastfail(3u);
      }
      *v8 = v12;
      v8[1] = v11;
      *(_QWORD *)(v12 + 8) = v8;
      *v11 = v8;
    }
    v4 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
