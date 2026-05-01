/*
 * XREFs of CrmStateMonitorNpuUsageContextCleanup @ 0x18006CA40
 * Callers:
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180021120 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x18006C9A4 (CrmStateMonitorAttemptNpuContextRefresh.c)
 *     CrmGlobalsCleanupWorkers @ 0x180075360 (CrmGlobalsCleanupWorkers.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmpDxUtilsFreeContext @ 0x18006A0C8 (CrmpDxUtilsFreeContext.c)
 */

void __fastcall CrmStateMonitorNpuUsageContextCleanup(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    HampFreeHeap(v2);
  if ( *(_QWORD *)a1 )
    CrmpDxUtilsFreeContext(*(_QWORD **)a1);
}
