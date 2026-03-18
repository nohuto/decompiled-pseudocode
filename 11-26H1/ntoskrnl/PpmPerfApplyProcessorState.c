/*
 * XREFs of PpmPerfApplyProcessorState @ 0x140252C88
 * Callers:
 *     PpmPerfAction @ 0x1402532A0 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x140259FC0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PpmContinueTimeAccumulation @ 0x140252628 (PpmContinueTimeAccumulation.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14032FC60 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmScaleIdleStateValues @ 0x1403E6518 (PpmScaleIdleStateValues.c)
 *     PpmEventTraceExpectedUtility @ 0x1404A9E28 (PpmEventTraceExpectedUtility.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x1404AF1E8 (PpmEventLegacyProcessorPerfStateChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  KSPIN_LOCK *p_QosUpdateLock; // rbp
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v17; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 v19; // eax
  __int64 v20; // rdx
  unsigned __int32 v21; // ett

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
  KeQueryPerformanceCounter(0LL);
  v10 = PpmContinueTimeAccumulation(a1);
  if ( v10 )
  {
    if ( Constraint->UseQosUpdateLock )
    {
      p_QosUpdateLock = &Constraint->QosUpdateLock;
      v6 = KeDisableInterrupts(v13, v12, v14);
      KxAcquireSpinLock(p_QosUpdateLock);
    }
    else
    {
      v7 = 0;
      p_QosUpdateLock = &Constraint->QosUpdateLock;
    }
    LOBYTE(v14) = a2;
    LOBYTE(v12) = v9;
    v10 = PpmPerfArbitratorApplyProcessorState(a1, v12, v14);
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
          v19 = *SchedulerAssist;
          do
          {
            v20 = v19;
            LODWORD(v20) = v19 & 0xFFDFFFFF;
            v21 = v19;
            v19 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v19 & 0xFFDFFFFF, v19);
          }
          while ( v21 != v19 );
          if ( (v19 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v20, SchedulerAssist, v17);
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
