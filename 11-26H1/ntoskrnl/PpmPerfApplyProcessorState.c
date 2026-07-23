/*
 * XREFs of PpmPerfApplyProcessorState @ 0x1402545E8
 * Callers:
 *     PpmPerfAction @ 0x140254C00 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x14025B7A0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PpmContinueTimeAccumulation @ 0x140253F88 (PpmContinueTimeAccumulation.c)
 *     PpmScaleIdleStateValues @ 0x1402F33F8 (PpmScaleIdleStateValues.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140331C90 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmEventTraceExpectedUtility @ 0x1404A34B8 (PpmEventTraceExpectedUtility.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x1404A8878 (PpmEventLegacyProcessorPerfStateChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, char a2)
{
  _PROC_PERF_CONSTRAINT *Constraint; // rbp
  _PROC_PERF_CHECK_CONTEXT *p_CheckContext; // r13
  _PROC_PERF_DOMAIN *Domain; // rdi
  char v6; // r15
  char v7; // r12
  _PROC_PERF_CHECK_CONTEXT *Master; // rcx
  char v9; // si
  char v10; // bl
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  KSPIN_LOCK *p_QosUpdateLock; // rbp
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v18; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 v20; // eax
  __int64 v21; // rdx
  unsigned __int32 v22; // ett

  Constraint = a1->PowerState.CheckContext.Constraint;
  p_CheckContext = &a1->PowerState.CheckContext;
  Domain = a1->PowerState.CheckContext.Domain;
  v6 = 0;
  v7 = 1;
  Master = Domain->Master;
  if ( p_CheckContext == Master || (v9 = 0, Domain->InitiateAllProcessors) )
    v9 = 1;
  if ( Domain->Coordination != 0xFD && a2 )
    v9 = 1;
  if ( a1 != KeGetCurrentPrcb() && (p_CheckContext == Master || v9 && Domain->AffinitizeControl) )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = PpmContinueTimeAccumulation(a1, PerformanceCounter.QuadPart);
  if ( v10 )
  {
    if ( Constraint->UseQosUpdateLock )
    {
      p_QosUpdateLock = &Constraint->QosUpdateLock;
      v6 = KeDisableInterrupts(v14, v13, v15);
      KxAcquireSpinLock(p_QosUpdateLock);
    }
    else
    {
      v7 = 0;
      p_QosUpdateLock = &Constraint->QosUpdateLock;
    }
    LOBYTE(v15) = a2;
    LOBYTE(v13) = v9;
    v10 = PpmPerfArbitratorApplyProcessorState(a1, v13, v15);
    if ( v7 )
    {
      KxReleaseSpinLock(p_QosUpdateLock);
      if ( v6 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v20 = *SchedulerAssist;
          do
          {
            v21 = v20;
            LODWORD(v21) = v20 & 0xFFDFFFFF;
            v22 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v20 & 0xFFDFFFFF, v20);
          }
          while ( v22 != v20 );
          if ( (v20 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v21, SchedulerAssist, v18);
        }
        _enable();
      }
    }
    if ( v10 )
    {
      if ( p_CheckContext == Domain->Master && Domain->DomainPerfControlHandler )
      {
        LOBYTE(SchedulerAssist) = v9;
        guard_dispatch_icall_no_overrides(Domain->DomainContext, Domain->QosSelection, SchedulerAssist);
      }
      if ( !a2 )
      {
        PpmEventLegacyProcessorPerfStateChange(a1);
        PpmScaleIdleStateValues(&a1->PowerState);
        PpmEventTraceExpectedUtility(p_CheckContext);
      }
    }
  }
  return v10;
}
