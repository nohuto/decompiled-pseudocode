/*
 * XREFs of ?VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z @ 0x1400463A0
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400E1ABC (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmSynchronizeWithWorkerThreadRun(const struct VIDMM_WORKER_THREAD *a1)
{
  char *v1; // rbx

  v1 = (char *)a1 + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
