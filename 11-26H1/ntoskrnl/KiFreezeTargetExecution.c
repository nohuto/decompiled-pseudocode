/*
 * XREFs of KiFreezeTargetExecution @ 0x1405F8810
 * Callers:
 *     KiCheckForFreezeExecution @ 0x1405EA320 (KiCheckForFreezeExecution.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiEndDebugAccumulation @ 0x1404FBE70 (KiEndDebugAccumulation.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCheckStall @ 0x14052CE60 (KiCheckStall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetDebuggerOwner @ 0x140532C74 (KiSetDebuggerOwner.c)
 *     RtlCaptureContext @ 0x140536E40 (RtlCaptureContext.c)
 *     KeRestoreSupervisorState @ 0x1405EF3C0 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405EF444 (KeSaveSupervisorState.c)
 *     KiStartDebugAccumulation @ 0x1405F8BC4 (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x1405FFEF8 (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x1405FFFC0 (KiSaveProcessorState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x14072BD10 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14072BDE0 (KiSaveProcessorControlState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdpReportExceptionStateChange @ 0x140C1CF4C (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x140C37E20 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140C37EAC (VfStopBranchTracing.c)
 */

void __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  int v4; // edx
  bool v5; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  volatile signed __int32 *SchedulerAssist; // rax
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  signed __int32 *v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int Src; // [rsp+20h] [rbp-D8h] BYREF
  int *p_Src; // [rsp+28h] [rbp-D0h]
  unsigned __int64 Rip; // [rsp+30h] [rbp-C8h]

  memset_0(&Src, 0, 0x98uLL);
  if ( KiFreezeExecutionLock || KiFreezeLockBackup || ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v5 = KeDisableInterrupts();
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KeSaveSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v8) = 1;
    guard_dispatch_icall_no_overrides(v8, 0LL);
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
    v11 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v11 )
      _InterlockedAnd(v11, 0xFFFDFFFF);
    LOBYTE(v10) = KiResumeForReboot;
    guard_dispatch_icall_no_overrides(0LL, v10);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
    v12 = __readcr4();
    if ( (v12 & 0x20080) != 0 )
    {
      __writecr4(v12 ^ 0x80);
      __writecr4(v12);
    }
    else
    {
      v13 = __readcr3();
      __writecr3(v13);
    }
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb);
    KeRestoreSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v5 )
    {
      v14 = KeGetCurrentPrcb();
      v15 = (signed __int32 *)v14->SchedulerAssist;
      if ( v15 )
      {
        _m_prefetchw(v15);
        v16 = *v15;
        do
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange(v15, v16 & 0xFFDFFFFF, v16);
        }
        while ( v17 != v16 );
        if ( (v16 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
      _enable();
    }
    if ( ViVerifierEnabled )
      VfStartBranchTracing();
  }
}
