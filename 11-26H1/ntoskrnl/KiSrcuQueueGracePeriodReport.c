/*
 * XREFs of KiSrcuQueueGracePeriodReport @ 0x1405F8300
 * Callers:
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405F801C (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSrcuQueueGracePeriodReport(__int64 a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r8
  __int64 v4; // r9
  bool v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  if ( *(_QWORD *)(a1 + 8) )
    return 0LL;
  v2 = 0;
  v5 = KeDisableInterrupts();
  if ( !*v3 )
  {
    v6 = *(_QWORD *)(v4 + 14584);
    if ( v6 )
    {
      v7 = *(_QWORD **)(v6 + 8);
      if ( *v7 != v6 )
        __fastfail(3u);
      *v3 = v6;
      v3[1] = v7;
      *v7 = v3;
      *(_QWORD *)(v6 + 8) = v3;
    }
    else
    {
      v3[1] = v3;
      *v3 = v3;
      *(_QWORD *)(v4 + 14584) = v3;
    }
    if ( *(_BYTE *)(v4 + 14567) )
      v2 = 1;
  }
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v2;
}
