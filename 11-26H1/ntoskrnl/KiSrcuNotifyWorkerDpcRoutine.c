/*
 * XREFs of KiSrcuNotifyWorkerDpcRoutine @ 0x1405F80C0
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405F801C (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405F81D8 (KiSrcuNotifyWorkerSelectAndQueue.c)
 */

__int64 __fastcall KiSrcuNotifyWorkerDpcRoutine(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r10
  bool v6; // bl
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 **v14; // rax
  struct _KPRCB *v15; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedAnd((volatile signed __int32 *)(a3 + 68), ~(1 << (LOBYTE(CurrentPrcb->Number) - *(_BYTE *)(a3 + 64))));
  if ( a4 )
  {
    v6 = KeDisableInterrupts();
    if ( *(_QWORD *)(v8 + 14584) )
    {
      v10 = *(_QWORD *)(v9 + 32);
      v11 = v7 << 6;
      v12 = (__int64 *)(v11 + v10 + 8);
      v13 = *v12;
      if ( *v12 )
      {
        if ( *(_QWORD *)(v11 + v10) )
          __fastfail(0xEu);
        if ( (__int64 *)v13 == v12 )
        {
          *(_QWORD *)(v8 + 14584) = 0LL;
        }
        else
        {
          v14 = (__int64 **)v12[1];
          if ( *(__int64 **)(v13 + 8) != v12 || *v14 != v12 )
            __fastfail(3u);
          *v14 = (__int64 *)v13;
          *(_QWORD *)(v13 + 8) = v14;
        }
        *v12 = 0LL;
      }
    }
    if ( v6 )
    {
      v15 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v15->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v17 = *SchedulerAssist;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
      _enable();
    }
  }
  else
  {
    KiSrcuNotifyGracePeriodStartedOnCpu(a2, (__int64)CurrentPrcb);
  }
  return KiSrcuNotifyWorkerSelectAndQueue(a3);
}
