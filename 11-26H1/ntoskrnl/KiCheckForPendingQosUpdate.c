/*
 * XREFs of KiCheckForPendingQosUpdate @ 0x140332CE0
 * Callers:
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     PoSetProcessorQos @ 0x140331A90 (PoSetProcessorQos.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140331C90 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x140332658 (KeUpdatePendingQosRequest.c)
 *     PpmEventVpQosChange @ 0x14052BCA4 (PpmEventVpQosChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvSetVirtualProcessorQos @ 0x140535098 (PpmHvSetVirtualProcessorQos.c)
 */

char __fastcall KiCheckForPendingQosUpdate(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int32 PrcbFlagsReserved; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  int v6; // r12d
  __int64 v7; // rdi
  int v8; // ebp
  char v9; // r13
  char v10; // r14
  bool v11; // r15
  _PROC_PERF_CONSTRAINT *Constraint; // rsi
  bool v13; // al
  volatile signed __int32 *p_QosUpdateLock; // rcx
  int QosEquivalencyMask; // eax
  bool v16; // zf
  unsigned int v17; // ecx
  struct _KPRCB *v18; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v21; // r10
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  char v25; // di
  __int64 v26; // rdx
  unsigned __int32 v27; // ett
  struct _KPRCB *v28; // rcx
  unsigned __int32 v29; // ett
  unsigned __int32 v30; // eax
  unsigned __int32 v31; // ett
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  char v34; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  PrcbFlagsReserved = CurrentPrcb->PrcbFlagsReserved;
  if ( (PrcbFlagsReserved & 0x100) != 0 )
  {
    LOBYTE(PrcbFlagsReserved) = KeDisableInterrupts();
    v24 = CurrentPrcb->PrcbFlagsReserved;
    v25 = PrcbFlagsReserved;
    if ( (_DWORD)v23 == (unsigned __int8)v24 )
    {
      LODWORD(v24) = v24 & 0xFFFFFEFF;
      CurrentPrcb->PrcbFlagsReserved = v24;
    }
    else
    {
      LOBYTE(PrcbFlagsReserved) = PoSetProcessorQos((__int64)CurrentPrcb, v23);
      if ( (_BYTE)PrcbFlagsReserved )
        CurrentPrcb->PrcbFlagsReserved &= ~0x100u;
    }
    if ( (CurrentPrcb->PrcbFlagsReserved & 0x100) == 0 )
      LOBYTE(PrcbFlagsReserved) = KeUpdatePendingQosRequest((__int64)CurrentPrcb, v24, v23);
    if ( v25 )
    {
      v18 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v18->SchedulerAssist;
      if ( !SchedulerAssist )
      {
LABEL_26:
        _enable();
        return PrcbFlagsReserved;
      }
      _m_prefetchw(SchedulerAssist);
      PrcbFlagsReserved = *SchedulerAssist;
      do
      {
        v26 = PrcbFlagsReserved;
        LODWORD(v26) = PrcbFlagsReserved & 0xFFDFFFFF;
        v27 = PrcbFlagsReserved;
        PrcbFlagsReserved = _InterlockedCompareExchange(
                              (volatile signed __int32 *)SchedulerAssist,
                              PrcbFlagsReserved & 0xFFDFFFFF,
                              PrcbFlagsReserved);
      }
      while ( v27 != PrcbFlagsReserved );
LABEL_52:
      if ( (PrcbFlagsReserved & 0x200000) != 0 )
        LOBYTE(PrcbFlagsReserved) = KiRemoveSystemWorkPriorityKick(v18, v26, SchedulerAssist, v5);
      goto LABEL_26;
    }
  }
  else if ( KeHeteroSystemQos && *(unsigned __int8 *)(a1 + 516) != (unsigned __int8)PrcbFlagsReserved )
  {
    LOBYTE(PrcbFlagsReserved) = KeDisableInterrupts();
    v6 = *(unsigned __int8 *)(v5 + 516);
    v7 = *(unsigned __int8 *)(v5 + 516);
    v34 = PrcbFlagsReserved;
    if ( v6 == (unsigned __int8)CurrentPrcb->PrcbFlags.PrcbFlags )
    {
LABEL_24:
      if ( !v34 )
        return PrcbFlagsReserved;
      v18 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v18->SchedulerAssist;
      if ( !SchedulerAssist )
        goto LABEL_26;
      _m_prefetchw(SchedulerAssist);
      PrcbFlagsReserved = *SchedulerAssist;
      do
      {
        v26 = PrcbFlagsReserved;
        LODWORD(v26) = PrcbFlagsReserved & 0xFFDFFFFF;
        v29 = PrcbFlagsReserved;
        PrcbFlagsReserved = _InterlockedCompareExchange(
                              (volatile signed __int32 *)SchedulerAssist,
                              PrcbFlagsReserved & 0xFFDFFFFF,
                              PrcbFlagsReserved);
      }
      while ( v29 != PrcbFlagsReserved );
      goto LABEL_52;
    }
    v8 = CurrentPrcb->PrcbFlagsReserved & 0x100;
    v9 = 1;
    v10 = 0;
    v11 = 0;
    if ( (_DWORD)v7 == CurrentPrcb->PowerState.RequestedQosClass )
      goto LABEL_21;
    Constraint = CurrentPrcb->PowerState.CheckContext.Constraint;
    if ( Constraint && Constraint->UseQosUpdateLock )
    {
      v10 = 1;
      v13 = KeDisableInterrupts();
      p_QosUpdateLock = (volatile signed __int32 *)&Constraint->QosUpdateLock;
      v11 = v13;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _interlockedbittestandset64(p_QosUpdateLock, 0LL) )
          KxWaitForSpinLockAndAcquire(p_QosUpdateLock);
      }
      else
      {
        KiAcquireSpinLockInstrumented(p_QosUpdateLock);
      }
    }
    QosEquivalencyMask = CurrentPrcb->PowerState.QosEquivalencyMask;
    if ( !_bittest(&QosEquivalencyMask, v7) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v5 = PerformanceCounter.QuadPart - CurrentPrcb->PowerState.LastQosTransitionTime;
      v21 = PerformanceCounter;
      v3 = 7 * v7;
      v4 = 7 * v7 + (int)CurrentPrcb->PowerState.RequestedQosClass;
      if ( PpmPerfQosHysteresis[v4]
        && v5 < CurrentPrcb->PowerState.QosTransitionHysteresis
        && !CurrentPrcb->PowerState.LongPriorQosPeriod )
      {
        v9 = 0;
LABEL_16:
        if ( v10 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64((volatile signed __int64 *)&Constraint->QosUpdateLock, 0LL);
          else
            KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Constraint->QosUpdateLock, retaddr);
          if ( v11 )
          {
            v28 = KeGetCurrentPrcb();
            v4 = (__int64)v28->SchedulerAssist;
            if ( v4 )
            {
              _m_prefetchw((const void *)v4);
              v30 = *(_DWORD *)v4;
              do
              {
                v3 = v30;
                LODWORD(v3) = v30 & 0xFFDFFFFF;
                v31 = v30;
                v30 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v30 & 0xFFDFFFFF, v30);
              }
              while ( v31 != v30 );
              if ( (v30 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v28, v3, v4, v5);
            }
            _enable();
          }
        }
        if ( !v9 )
        {
          v17 = CurrentPrcb->PrcbFlagsReserved | 0x100;
LABEL_22:
          CurrentPrcb->PrcbFlagsReserved = v17;
          PrcbFlagsReserved = v8 != 0;
          if ( PrcbFlagsReserved != ((v17 >> 8) & 1) )
            LOBYTE(PrcbFlagsReserved) = KeUpdatePendingQosRequest((__int64)CurrentPrcb, v3, v4);
          goto LABEL_24;
        }
LABEL_21:
        v17 = CurrentPrcb->PrcbFlagsReserved & 0xFFFFFEFF;
        goto LABEL_22;
      }
      v22 = 2 * CurrentPrcb->PowerState.QosTransitionHysteresis;
      CurrentPrcb->PowerState.LastQosTransitionTime = v21.QuadPart;
      CurrentPrcb->PowerState.LongPriorQosPeriod = v5 >= v22;
    }
    v16 = PpmPerfVmQosSupported == 0;
    CurrentPrcb->PowerState.RequestedQosClass = v7;
    if ( v16 )
    {
      PpmPerfArbitratorApplyProcessorState((__int64)CurrentPrcb, 1u, 0);
    }
    else
    {
      CurrentPrcb->PowerState.ResolvedQosClass = v7;
      PpmHvSetVirtualProcessorQos(CurrentPrcb);
      PpmEventVpQosChange(CurrentPrcb);
    }
    LOBYTE(CurrentPrcb->PrcbFlags.PrcbFlags) = v6;
    goto LABEL_16;
  }
  return PrcbFlagsReserved;
}
