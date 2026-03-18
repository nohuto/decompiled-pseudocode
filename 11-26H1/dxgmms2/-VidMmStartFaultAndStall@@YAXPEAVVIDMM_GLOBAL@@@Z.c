/*
 * XREFs of ?VidMmStartFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x14004EE34
 * Callers:
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?UpdateCurrentUpgradedGpuVaRange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A270C (-UpdateCurrentUpgradedGpuVaRange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VidMmStartFaultAndStall(struct VIDMM_GLOBAL *a1)
{
  struct VIDMM_GLOBAL_ALLOC *v1; // rdx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a1 + 5579);
  v3 = *((_QWORD *)a1 + 5576);
  v4 = *((_QWORD *)a1 + 5570);
  *((_QWORD *)a1 + 5580) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 6) + 8LL) + 24LL);
  VIDMM_GLOBAL::UpdateCurrentUpgradedGpuVaRange(a1, v1, v4, v3);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 5606, &LockHandle);
  *((_BYTE *)a1 + 44698) = 1;
  memset((char *)a1 + 44780, 0, 0x40uLL);
  *((_DWORD *)a1 + 11194) = -1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
