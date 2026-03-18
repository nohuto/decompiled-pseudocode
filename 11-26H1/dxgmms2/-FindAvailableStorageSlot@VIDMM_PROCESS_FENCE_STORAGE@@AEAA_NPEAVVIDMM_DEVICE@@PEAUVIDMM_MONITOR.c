/*
 * XREFs of ?FindAvailableStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_LIST_ENTRY@@W4VIDMM_NATIVE_FENCE_STORAGE_TYPE@@@Z @ 0x140037058
 * Callers:
 *     ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036CC8 (-FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MO.c)
 *     ?FindAvailableCurrentValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004E7C4 (-FindAvailableCurrentValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUV.c)
 *     ?FindAvailableMonitoredValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004E8B4 (-FindAvailableMonitoredValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAVVIDMM_DEVICE@@PEA.c)
 * Callees:
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036DB4 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 */

bool __fastcall VIDMM_PROCESS_FENCE_STORAGE::FindAvailableStorageSlot(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  _QWORD *v8; // rdi
  _QWORD *v9; // r8
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 120), &LockHandle);
  v9 = *a4;
  if ( *a4 != a4 )
  {
    while ( v9 != a4 )
    {
      v10 = v9 - 1;
      if ( !v9[12]
        || ((*(_BYTE *)(a3 + 40) & 1) == 0
         || ((v11 = v10[18]) == 0 || v11 == a2) && *((_DWORD *)v10 + 41) == *(_DWORD *)(a3 + 56))
        && *((_DWORD *)v10 + 40) == *(_DWORD *)(a3 + 52) )
      {
        v8 = v9 - 1;
        if ( v9 != (_QWORD *)8 )
        {
          VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(
            (VIDMM_FENCE_STORAGE_PAGE *)(v9 - 1),
            (struct VIDMM_MONITORED_FENCE_STORAGE *)a3);
          if ( v10[13] == -1LL )
          {
            v12 = v10 + 1;
            v13 = v10[1];
            if ( *(_QWORD **)(v13 + 8) != v10 + 1
              || (v14 = (_QWORD *)v10[2], (_QWORD *)*v14 != v12)
              || (*v14 = v13,
                  *(_QWORD *)(v13 + 8) = v14,
                  v15 = (_QWORD *)(a1 + 40),
                  v16 = *(_QWORD *)(a1 + 40),
                  *(_QWORD *)(v16 + 8) != a1 + 40) )
            {
              __fastfail(3u);
            }
            *v12 = v16;
            v10[2] = v15;
            *(_QWORD *)(v16 + 8) = v12;
            *v15 = v12;
          }
        }
        break;
      }
      v9 = (_QWORD *)*v9;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8 != 0LL;
}
