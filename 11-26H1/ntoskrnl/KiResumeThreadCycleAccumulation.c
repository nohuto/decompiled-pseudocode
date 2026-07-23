/*
 * XREFs of KiResumeThreadCycleAccumulation @ 0x140336E8C
 * Callers:
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x140312AA0 (KiIdleSchedule.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140336EE0 (KiStartThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiResumeThreadCycleAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v7; // rdx
  int v8; // ett

  _disable();
  result = KiStartThreadCycleAccumulation(a1, a2, a3);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v7 = (unsigned int)result;
      LODWORD(v7) = result & 0xFFDFFFFF;
      v8 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v8 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7, SchedulerAssist, v4);
  }
  _enable();
  return result;
}
