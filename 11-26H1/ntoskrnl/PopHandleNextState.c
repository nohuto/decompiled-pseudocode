/*
 * XREFs of PopHandleNextState @ 0x140C08EA0
 * Callers:
 *     PopIssueNextState @ 0x140C03F5C (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140C08E20 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1403D60D8 (KeRestoreExtendedAndSupervisorState.c)
 *     KeForceAttachProcess @ 0x140456CE0 (KeForceAttachProcess.c)
 *     KeFlushCurrentTbImmediately @ 0x1404E0E70 (KeFlushCurrentTbImmediately.c)
 *     PopFxNotifySystemStateTransition @ 0x1404E1444 (PopFxNotifySystemStateTransition.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404ECDAC (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSuspendClockTimer @ 0x1404F8E44 (KeSuspendClockTimer.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140508024 (KeSaveExtendedAndSupervisorState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeResumeClockTimer @ 0x1405262B0 (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x140526454 (PpmResetPerfEngineForProcessor.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x14052D5F0 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KdPowerTransition @ 0x14052DE60 (KdPowerTransition.c)
 *     KeSaveProcessorSpecificFeatures @ 0x1405302EC (KeSaveProcessorSpecificFeatures.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1405322F4 (KeRestoreProcessorSpecificFeatures.c)
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140C09260 (PopSstDiagInitializeResumeTimer.c)
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v3; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // rbx
  struct _KPRCB *v8; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v10; // rcx
  int v11; // r14d
  _QWORD *v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // rdx
  unsigned __int8 CurrentIrql; // bl

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = a2;
  v5 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)v3 )
  {
    if ( (++v5 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v5);
    }
    else
    {
      _mm_pause();
    }
  }
  v6 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)v3 = v6;
  if ( v6 == 13 )
  {
    KeResumeClockTimer();
    PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, 0LL, *(_QWORD *)(a1 + 64));
    if ( *(_BYTE *)(v3 + 4) )
    {
      v8 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v8->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v13 = *SchedulerAssist;
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
        }
        while ( v14 != v13 );
        if ( (v13 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v8);
      }
      _enable();
    }
    v7 = *(unsigned __int8 *)(v3 + 7);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    __writecr8(v7);
  }
  else
  {
    switch ( v6 )
    {
      case 2:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1);
        break;
      case 3:
        KeSaveIptStateBeforeProcessorGoesOffline();
        *(_BYTE *)(v3 + 5) = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          *(_BYTE *)(v3 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                      (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                      v3 + 8) >= 0;
        KeSaveProcessorSpecificFeatures();
        *(_QWORD *)(v3 + 128) = KeGetPcr();
        break;
      case 4:
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 15;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
        }
        *(_BYTE *)(v3 + 7) = CurrentIrql;
        *(_BYTE *)(v3 + 4) = KeDisableInterrupts();
        KeSuspendClockTimer();
        break;
      case 5:
        if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
        {
          *(_BYTE *)(v3 + 6) = 1;
          KeForceAttachProcess(PsInitialSystemProcess, (_OWORD *)(v3 + 64), 1);
        }
        break;
      case 6:
        if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
        {
          PoResumeFromHibernate = 1;
          *(_DWORD *)(v3 + 120) = 0;
        }
        else
        {
          if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
            KdPowerTransition(4);
          v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)a1 + 16LL), *(_QWORD *)(a1 + 8));
          if ( !CurrentPrcb->Number )
          {
            if ( !PoResumeFromHibernate )
              KdPowerTransition(1);
            if ( !CurrentPrcb->Number )
            {
              PopSstDiagInitializeResumeTimer(v10);
              if ( !CurrentPrcb->Number )
                qword_140F10B48 = *(_QWORD *)&KeQueryPerformanceCounter(0LL)
                                - PopDirectedDripsDiagLock.WriteOperationCount;
            }
          }
          *(_DWORD *)(v3 + 120) = v11;
        }
        break;
      case 7:
        HvlEnlightenProcessor(1);
        break;
      case 8:
        KeRestoreProcessorSpecificFeatures(v3 + 112);
        break;
      case 9:
        PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
        break;
      case 10:
        KeFlushCurrentTbImmediately();
        __wbinvd();
        break;
      case 11:
        if ( *(_BYTE *)(v3 + 6) )
        {
          KeForceDetachProcess(v3 + 64, 1);
          *(_BYTE *)(v3 + 6) = 0;
        }
        break;
      case 12:
        v12 = *(_QWORD **)(a1 + 32);
        if ( *v12 )
          guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 40), v12[1]);
        break;
      case 14:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0);
        break;
      case 15:
        if ( *(_BYTE *)(v3 + 5) )
          KeRestoreExtendedAndSupervisorState(v3 + 8);
        KeRestoreIptStateAfterProcessorComesOnline();
        LOBYTE(v15) = 1;
        PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, v15, *(_QWORD *)(a1 + 64));
        break;
      default:
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
