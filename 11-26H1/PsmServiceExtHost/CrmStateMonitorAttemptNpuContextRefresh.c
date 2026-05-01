/*
 * XREFs of CrmStateMonitorAttemptNpuContextRefresh @ 0x18006C9A4
 * Callers:
 *     CrmStateMonitorResourceUsageQuery @ 0x18001D7D8 (CrmStateMonitorResourceUsageQuery.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18001F4C8 (CrmStateMonitorResourceUsagePoll.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180021120 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CrmpDxUtilsContextAllocateState @ 0x180069D60 (CrmpDxUtilsContextAllocateState.c)
 *     CrmpDxUtilsFreeContext @ 0x18006A0C8 (CrmpDxUtilsFreeContext.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18006CA40 (CrmStateMonitorNpuUsageContextCleanup.c)
 */

__int64 __fastcall CrmStateMonitorAttemptNpuContextRefresh(__int64 a1)
{
  _DWORD *Heap; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // ebx
  int State; // esi

  CrmStateMonitorNpuUsageContextCleanup(a1);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  Heap = HampAllocateHeap(0x10uLL);
  v3 = Heap;
  if ( !Heap )
  {
    v4 = -1073741801;
LABEL_8:
    CrmStateMonitorNpuUsageContextCleanup(a1);
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    return v4;
  }
  *(_OWORD *)Heap = 0LL;
  *Heap = 1;
  State = CrmpDxUtilsContextAllocateState(Heap);
  if ( State < 0 )
  {
    CrmpDxUtilsFreeContext(v3);
    v4 = State;
    goto LABEL_8;
  }
  *(_QWORD *)a1 = v3;
  return 0;
}
