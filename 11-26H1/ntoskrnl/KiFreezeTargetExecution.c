/*
 * XREFs of KiFreezeTargetExecution @ 0x1405F5E50
 * Callers:
 *     KiCheckForFreezeExecution @ 0x1405E79B0 (KiCheckForFreezeExecution.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiEndDebugAccumulation @ 0x1405025A0 (KiEndDebugAccumulation.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCheckStall @ 0x14052A940 (KiCheckStall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetDebuggerOwner @ 0x140530774 (KiSetDebuggerOwner.c)
 *     RtlCaptureContext @ 0x1405349C0 (RtlCaptureContext.c)
 *     KeRestoreSupervisorState @ 0x1405ECA50 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405ECAD4 (KeSaveSupervisorState.c)
 *     KiStartDebugAccumulation @ 0x1405F6204 (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x1405FD4A8 (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x1405FD570 (KiSaveProcessorState.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x140727140 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140727210 (KiSaveProcessorControlState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KdpReportExceptionStateChange @ 0x140C16F4C (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x140C31E10 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140C31E9C (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  bool v6; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  volatile signed __int32 *SchedulerAssist; // rax
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // r8
  int v17; // ett
  int Src; // [rsp+20h] [rbp-D8h] BYREF
  int *p_Src; // [rsp+28h] [rbp-D0h]
  unsigned __int64 Rip; // [rsp+30h] [rbp-C8h]

  memset_0(&Src, 0, 0x98uLL);
  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = LODWORD(KiDpcWatchdogConfigurationLock.StackLimit),
        ((__int64)KiDpcWatchdogConfigurationLock.StackLimit & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v6 = KeDisableInterrupts();
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KeSaveSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v9) = 1;
    guard_dispatch_icall_no_overrides(v9, 0LL);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
    }
    SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x20000u);
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset_0(&Src, 0, 0x98uLL);
        Src = -2147483641;
        p_Src = &Src;
        Rip = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(&Src) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    v12 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v12 )
      _InterlockedAnd(v12, 0xFFFDFFFF);
    LOBYTE(v11) = KiResumeForReboot;
    guard_dispatch_icall_no_overrides(0LL, v11);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
    v13 = __readcr4();
    if ( (v13 & 0x20080) != 0 )
    {
      __writecr4(v13 ^ 0x80);
      __writecr4(v13);
    }
    else
    {
      v14 = __readcr3();
      __writecr3(v14);
    }
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb);
    KeRestoreSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        _m_prefetchw(v16);
        LODWORD(result) = *v16;
        do
        {
          v17 = result;
          result = (unsigned int)_InterlockedCompareExchange(v16, result & 0xFFDFFFFF, result);
        }
        while ( v17 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
      _enable();
    }
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
