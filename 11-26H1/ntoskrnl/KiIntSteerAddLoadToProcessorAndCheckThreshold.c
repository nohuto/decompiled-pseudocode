/*
 * XREFs of KiIntSteerAddLoadToProcessorAndCheckThreshold @ 0x140480CE4
 * Callers:
 *     KeIntSteerSnapPerf @ 0x140256EE0 (KeIntSteerSnapPerf.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIntSteerAddLoadToProcessorAndCheckThreshold(__int64 a1, int a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // r8

  v4 = a3;
  v5 = *(unsigned int *)(KiProcessorBlock[a3] + 68);
  if ( a2 )
  {
    if ( a2 == 1 )
      a4[v4 + 65] += 10000 * a1 / (unsigned __int64)(*(_QWORD *)&KsepShimDbLock.SchedulerAssistPriorityFloor * v5);
  }
  else
  {
    a4[v4 + 1] += 10000 * a1 / (unsigned __int64)(*(_QWORD *)&KsepShimDbLock.SchedulerAssistPriorityFloor * v5);
  }
  return *a4 <= (unsigned int)(a4[v4 + 1] + a4[v4 + 65]);
}
