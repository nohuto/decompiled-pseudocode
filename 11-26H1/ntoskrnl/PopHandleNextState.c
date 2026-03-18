/*
 * XREFs of PopHandleNextState @ 0x140C02C90
 * Callers:
 *     PopIssueNextState @ 0x140BFDF10 (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140C02C10 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1403D3108 (KeRestoreExtendedAndSupervisorState.c)
 *     KeForceAttachProcess @ 0x14045D2E0 (KeForceAttachProcess.c)
 *     KeFlushCurrentTbImmediately @ 0x1404E7AB0 (KeFlushCurrentTbImmediately.c)
 *     PopFxNotifySystemStateTransition @ 0x1404E8084 (PopFxNotifySystemStateTransition.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404F37CC (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSuspendClockTimer @ 0x1404FF654 (KeSuspendClockTimer.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14050E5B4 (KeSaveExtendedAndSupervisorState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeResumeClockTimer @ 0x140523C40 (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x140523DE4 (PpmResetPerfEngineForProcessor.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x14052B0D0 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KdPowerTransition @ 0x14052B940 (KdPowerTransition.c)
 *     KeSaveProcessorSpecificFeatures @ 0x14052DDCC (KeSaveProcessorSpecificFeatures.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x14052FDF4 (KeRestoreProcessorSpecificFeatures.c)
 *     HvlEnlightenProcessor @ 0x140530860 (HvlEnlightenProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140C03050 (PopSstDiagInitializeResumeTimer.c)
 *     PopRestoreHiberContext @ 0x140C03138 (PopRestoreHiberContext.c)
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
        if ( (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
        {
          LOBYTE(stru_140F10828.OtherOperationCount) = 1;
          *(_DWORD *)(v3 + 120) = 0;
        }
        else
        {
          if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
            KdPowerTransition(4);
          v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)a1 + 16LL), *(_QWORD *)(a1 + 8));
          if ( !CurrentPrcb->Number )
          {
            if ( !LOBYTE(stru_140F10828.OtherOperationCount) )
              KdPowerTransition(1);
            if ( !CurrentPrcb->Number )
            {
              PopSstDiagInitializeResumeTimer(v10);
              if ( !CurrentPrcb->Number )
                stru_140F10070.AffinityVersion = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F0B0D0;
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
