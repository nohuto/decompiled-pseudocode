/*
 * XREFs of ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x14003683C
 * Callers:
 *     VidMmAllocateFenceStorageSlot @ 0x1400CAEF0 (VidMmAllocateFenceStorageSlot.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036DB4 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?DestroyFenceStoragePage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140037030 (-DestroyFenceStoragePage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@IPEAX@Z @ 0x140110710 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVI.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAGE_TYPE@@11@Z @ 0x14011CD64 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAG.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        struct VIDMM_PROCESS *a4)
{
  __int64 v8; // rax
  __int64 v9; // r8
  VIDMM_FENCE_STORAGE_PAGE *v10; // rax
  VIDMM_FENCE_STORAGE_PAGE *v11; // rdi
  int v12; // esi
  KSPIN_LOCK **v13; // rcx
  KSPIN_LOCK v14; // rdx
  KSPIN_LOCK *v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-38h]
  void *v18; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  *((_BYTE *)a3 + 40) &= ~4u;
  *((_DWORD *)a3 + 13) &= ~8u;
  v8 = operator new(240LL, 875850070LL, 64LL);
  if ( !v8 )
    return 3221225495LL;
  LOBYTE(v9) = *((_BYTE *)a3 + 40) & 1;
  LOBYTE(v18) = (*((_BYTE *)a3 + 40) & 4) != 0;
  LOBYTE(v17) = 1;
  v10 = (VIDMM_FENCE_STORAGE_PAGE *)VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(
                                      v8,
                                      this,
                                      v9,
                                      *((unsigned int *)a3 + 11));
  v11 = v10;
  if ( !v10 )
    return 3221225495LL;
  v12 = VIDMM_FENCE_STORAGE_PAGE::Init(v10, a2, a3, a4, v17, v18);
  if ( v12 < 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::DestroyFenceStoragePage(v11);
    return (unsigned int)v12;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v11, a3);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
    v13 = (KSPIN_LOCK **)(this + 13);
    v14 = this[13];
    v15 = (KSPIN_LOCK *)((char *)v11 + 8);
    if ( *(KSPIN_LOCK **)(v14 + 8) != this + 13 )
      __fastfail(3u);
    *v15 = v14;
    *((_QWORD *)v11 + 2) = v13;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = v15;
    if ( (*((_BYTE *)a3 + 40) & 1) != 0 )
      ++VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedNativeFence;
    else
      ++VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedMonitoredFence;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
}
