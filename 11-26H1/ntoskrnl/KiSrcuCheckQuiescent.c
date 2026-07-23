/*
 * XREFs of KiSrcuCheckQuiescent @ 0x14045B730
 * Callers:
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405F801C (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiSrcuCheckQuiescent(__int64 a1)
{
  bool v2; // al
  __int64 v3; // r9
  _QWORD *v4; // rcx
  bool v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  unsigned __int32 *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v15; // eax
  __int64 v16; // rdx
  unsigned __int32 v17; // ett
  unsigned __int32 v18; // eax
  __int64 v19; // rdx
  unsigned __int32 v20; // ett

  if ( *(_QWORD *)(a1 + 14584) )
  {
    v2 = KeDisableInterrupts();
    v4 = *(_QWORD **)(a1 + 14584);
    v5 = v2;
    if ( v4 )
    {
      v6 = (_QWORD *)*v4;
      v7 = v4 - 1;
      if ( *(v4 - 1) )
      {
        if ( v4 != v6 )
          *(_QWORD *)(a1 + 14584) = v6;
      }
      else
      {
        v3 = 0LL;
        if ( v6 == v4 )
        {
          *(_QWORD *)(a1 + 14584) = 0LL;
        }
        else
        {
          *(_QWORD *)(a1 + 14584) = v6;
          v11 = (_QWORD *)*v4;
          v12 = (_QWORD *)v4[1];
          if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v12 != v4 )
            __fastfail(3u);
          *v12 = v11;
          v11[1] = v12;
        }
        v8 = v7[7];
        *v4 = 0LL;
        v7[3] = *(_QWORD *)(v8 + 56);
      }
      if ( v5 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v15 = *SchedulerAssist;
          do
          {
            v16 = v15;
            LODWORD(v16) = v15 & 0xFFDFFFFF;
            v17 = v15;
            v15 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v15 & 0xFFDFFFFF, v15);
          }
          while ( v17 != v15 );
          if ( (v15 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v16, SchedulerAssist, v3);
        }
        _enable();
      }
      if ( (unsigned int)KiSrcuReportQuiescent(v7, a1) )
        KiSrcuFlushCompleted(v7[7], 0LL);
    }
    else if ( v2 )
    {
      v9 = KeGetCurrentPrcb();
      v10 = (unsigned __int32 *)v9->SchedulerAssist;
      if ( v10 )
      {
        _m_prefetchw(v10);
        v18 = *v10;
        do
        {
          v19 = v18;
          LODWORD(v19) = v18 & 0xFFDFFFFF;
          v20 = v18;
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)v10, v18 & 0xFFDFFFFF, v18);
        }
        while ( v20 != v18 );
        if ( (v18 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v9, v19, v10, v3);
      }
      _enable();
    }
  }
}
