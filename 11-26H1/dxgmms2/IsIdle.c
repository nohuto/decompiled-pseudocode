/*
 * XREFs of IsIdle @ 0x1400E2284
 * Callers:
 *     ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400E1FE4 (-VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIdle(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  bool v5; // bl

  v3 = a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
  v4 = *(_DWORD *)(a2 + 104);
  v5 = !v4 || v4 == 2 && *(_QWORD *)(a2 + 32) == a2 + 32;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
