/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400369B8
 * Callers:
 *     VidMmAllocateFenceStorageSlot @ 0x1400CAEF0 (VidMmAllocateFenceStorageSlot.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036CC8 (-FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MO.c)
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036DB4 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?DestroyFenceStoragePage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140037030 (-DestroyFenceStoragePage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 *     ?FindAvailableCurrentValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004E7C4 (-FindAvailableCurrentValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUV.c)
 *     ?FindAvailableMonitoredValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004E8B4 (-FindAvailableMonitoredValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEA.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?GetFenceStorageAllocInfo@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1400A51E4 (-GetFenceStorageAllocInfo@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_DXGK_ALL.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@IPEAX@Z @ 0x140110710 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVI.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAGE_TYPE@@11@Z @ 0x14011CD64 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAG.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_GLOBAL **a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned int a4)
{
  KSPIN_LOCK v7; // rcx
  __int64 v9; // rax
  VIDMM_FENCE_STORAGE_PAGE *v10; // rax
  struct VIDMM_PROCESS *v11; // r9
  VIDMM_FENCE_STORAGE_PAGE *v12; // rbx
  int v13; // edi
  VIDMM_FENCE_STORAGE_PAGE *v14; // rcx
  char *v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct VIDMM_GLOBAL *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  VIDMM_FENCE_STORAGE_PAGE *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  VIDMM_FENCE_STORAGE_PAGE *v25; // rax
  unsigned int v26; // [rsp+28h] [rbp-49h]
  void *v27; // [rsp+30h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-39h] BYREF
  _DXGK_ALLOCATIONINFO v29; // [rsp+58h] [rbp-19h] BYREF

  if ( (*((_DWORD *)a3 + 13) & 8) != 0 )
  {
    v18 = *a2;
    v19 = *(_QWORD *)(*((_QWORD *)*a2 + 5040) + 8LL * a4);
    memset(&v29, 0, sizeof(v29));
    GetFenceStorageAllocInfo(v18, a3, &v29);
    if ( (*(_DWORD *)(v19 + 84) & v29.SupportedWriteSegmentSet) == 0 )
    {
      *((_DWORD *)a3 + 13) &= ~8u;
      *((_BYTE *)a3 + 40) &= ~4u;
    }
  }
  v7 = *this;
  if ( (*((_BYTE *)a3 + 40) & 1) != 0 )
  {
    if ( v7 )
      ++*(_DWORD *)(v7 + 260);
    if ( *((_DWORD *)a3 + 11) == 1 )
    {
      if ( !VIDMM_PROCESS_FENCE_STORAGE::FindAvailableCurrentValueStorageSlot(
              (VIDMM_PROCESS_FENCE_STORAGE *)this,
              (struct VIDMM_DEVICE *)a2,
              a3) )
      {
        v20 = operator new(240LL, 0x34346956u, 64LL);
        if ( v20 )
        {
          LOBYTE(v21) = 1;
          LOBYTE(v27) = (*((_BYTE *)a3 + 40) & 4) != 0;
          LOBYTE(v26) = 0;
          v22 = (VIDMM_FENCE_STORAGE_PAGE *)VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v20, this, v21, 1LL);
          v12 = v22;
          if ( v22 )
          {
            v13 = VIDMM_FENCE_STORAGE_PAGE::Init(v22, (struct VIDMM_DEVICE *)a2, a3, 0LL, v26, v27);
            v14 = v12;
            if ( v13 < 0 )
              goto LABEL_11;
            VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v12, a3);
            memset(&LockHandle, 0, sizeof(LockHandle));
            KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
            v15 = (char *)(this + 9);
            goto LABEL_13;
          }
        }
        return 3221225495LL;
      }
    }
    else if ( !VIDMM_PROCESS_FENCE_STORAGE::FindAvailableMonitoredValueStorageSlot(
                 (VIDMM_PROCESS_FENCE_STORAGE *)this,
                 (struct VIDMM_DEVICE *)a2,
                 a3) )
    {
      v23 = operator new(240LL, 0x34346956u, 64LL);
      if ( v23 )
      {
        LOBYTE(v24) = 1;
        LOBYTE(v27) = (*((_BYTE *)a3 + 40) & 4) != 0;
        LOBYTE(v26) = 0;
        v25 = (VIDMM_FENCE_STORAGE_PAGE *)VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v23, this, v24, 2LL);
        v12 = v25;
        if ( v25 )
        {
          v13 = VIDMM_FENCE_STORAGE_PAGE::Init(v25, (struct VIDMM_DEVICE *)a2, a3, 0LL, v26, v27);
          v14 = v12;
          if ( v13 < 0 )
            goto LABEL_11;
          VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v12, a3);
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
          v15 = (char *)(this + 11);
          goto LABEL_13;
        }
      }
      return 3221225495LL;
    }
    return 0LL;
  }
  if ( v7 )
    ++*(_DWORD *)(v7 + 256);
  if ( VIDMM_PROCESS_FENCE_STORAGE::FindAvailableFenceStorageSlot(
         (VIDMM_PROCESS_FENCE_STORAGE *)this,
         (struct VIDMM_DEVICE *)a2,
         a3) )
  {
    return 0LL;
  }
  v9 = operator new(240LL, 0x34346956u, 64LL);
  if ( !v9 )
    return 3221225495LL;
  LOBYTE(v27) = 0;
  LOBYTE(v26) = 0;
  v10 = (VIDMM_FENCE_STORAGE_PAGE *)VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v9, this, 0LL, 0LL);
  v12 = v10;
  if ( !v10 )
    return 3221225495LL;
  v13 = VIDMM_FENCE_STORAGE_PAGE::Init(v10, (struct VIDMM_DEVICE *)a2, a3, v11, v26, v27);
  v14 = v12;
  if ( v13 >= 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v12, a3);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
    v15 = (char *)(this + 3);
LABEL_13:
    v16 = *(_QWORD *)v15;
    v17 = (_QWORD *)((char *)v12 + 8);
    if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
      __fastfail(3u);
    *v17 = v16;
    *((_QWORD *)v12 + 2) = v15;
    *(_QWORD *)(v16 + 8) = v17;
    *(_QWORD *)v15 = v17;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
LABEL_11:
  VIDMM_FENCE_STORAGE_PAGE::DestroyFenceStoragePage(v14);
  return (unsigned int)v13;
}
