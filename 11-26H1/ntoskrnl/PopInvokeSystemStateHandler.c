/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140C0A314
 * Callers:
 *     PopShutdownSystem @ 0x140C04024 (PopShutdownSystem.c)
 *     PopEndMirroring @ 0x140C09F60 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140C0A210 (PopTransitionToSleep.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     KeSuspendDynamicTracing @ 0x1405026F4 (KeSuspendDynamicTracing.c)
 *     KeRebaselineInterruptTime @ 0x14050E8D8 (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14050E908 (KeRebaselineSystemTime.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140536DB0 (DbgBreakPointWithStatus.c)
 *     KeResumeDynamicTracing @ 0x1405FEE94 (KeResumeDynamicTracing.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopIssueNextState @ 0x140C03F5C (PopIssueNextState.c)
 *     MiConvertHiberPhasePages @ 0x140C06CF4 (MiConvertHiberPhasePages.c)
 *     MmInvalidateDumpAddresses @ 0x140C07760 (MmInvalidateDumpAddresses.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 *     MiUpdateUserMappings @ 0x140C0C830 (MiUpdateUserMappings.c)
 *     VfNotifyOfHibernate @ 0x140C2B634 (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x140C55AD4 (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // r13
  int v5; // r12d
  volatile unsigned int Lock; // ecx
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 *p_DeferredContext; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  char v20; // bl
  char v21; // bl
  __int64 v22; // rcx
  char v23; // al
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  _DISPATCHER_HEADER *DeferredContext; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v28)(PVOID); // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int128 *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  char v33; // [rsp+BCh] [rbp-44h]
  int v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C4h] [rbp-3Ch]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+D8h] [rbp-28h]
  _GROUP_AFFINITY *QuadPart; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-8h]
  _DWORD v40[30]; // [rsp+100h] [rbp+0h] BYREF
  ULONG Status; // [rsp+178h] [rbp+78h]
  _SLIST_ENTRY ListEntry; // [rsp+190h] [rbp+90h] BYREF
  __int128 v43; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v44; // [rsp+1B0h] [rbp+B0h]

  v2 = a1;
  v24 = 0LL;
  CurrentIrql = 0;
  v5 = -1073741823;
  Affinity = 0LL;
  memset(&Dpc, 0, 60);
  memset_0(&DeferredContext, 0, 0x60uLL);
  v32 = v2;
  v44 = 0LL;
  DeferredContext = (_DISPATCHER_HEADER *)&v43;
  v31 = &PopPowerStateNotifyHandler;
  v43 = 0LL;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext = &PpmIdlePolicyLock.Timer.Header + v2;
    if ( !DeferredContext->WaitListHead.Flink )
      return 3221225664LL;
  }
  v34 = KeNumberProcessors_0;
  v37 = KeNumberProcessors_0;
  v36 = 1;
  if ( (unsigned int)(v2 - 4) > 1 )
  {
    if ( PopCheckpointSystemSleepEnabled )
      DeferredContext->WaitListHead.Blink = (struct _LIST_ENTRY *)(LODWORD(DeferredContext->WaitListHead.Blink) | 0x40000LL);
    if ( ((_DWORD)v2 == 3 || (_DWORD)v2 == 6) && a2 )
    {
      v30 = a2;
      v28 = PopSaveHiberContextWrapper;
      v29 = a2;
    }
  }
  memset_0(v40, 0, 0xA0uLL);
  if ( a2 )
  {
    PopHibernateSystemContext = (__int64)DeferredContext;
    p_DeferredContext = &PopHibernateSystemContext;
    qword_140E26A48 = (__int64)v28;
    qword_140E26A50 = v29;
    qword_140E26A58 = v30;
    qword_140E26A60 = (__int64)v31;
    dword_140E26A68 = v32;
    byte_140E26A6C = v33;
    dword_140E26A70 = v34;
    dword_140E26A88 = v37;
    dword_140E26A78 = v36;
    RtlpInterlockedPushEntrySList(&stru_140E26A90, &ListEntry);
  }
  else
  {
    Lock = KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock;
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(Lock >> 6);
    Affinity.Mask = 1LL << Lock;
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
    }
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, &DeferredContext);
    v9 = 0;
    for ( Dpc.Importance = 2; v9 < (unsigned int)KeNumberProcessors_0; ++v9 )
    {
      if ( v9 != KeGetCurrentPrcb()->Number )
      {
        v10 = v35;
        if ( !Dpc.DpcData )
          Dpc.Number = v9 + 2048;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v10 == v35 )
          _mm_pause();
      }
    }
    p_DeferredContext = (__int64 *)&DeferredContext;
  }
  PopIssueNextState((__int64)p_DeferredContext, v40, 2);
  PopIssueNextState((__int64)p_DeferredContext, v40, 3);
  if ( dword_140F1044C == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v13 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v13 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    QuadPart = (_GROUP_AFFINITY *)PerformanceCounter.QuadPart;
    Affinity.Mask = (unsigned __int64)&QuadPart;
    v39 = v13;
    *(_QWORD *)&Affinity.Group = 16LL;
    EtwTraceKernelEvent((int)&Affinity, 1, 0x80008000, 4656, 5249026);
  }
  PopIssueNextState((__int64)p_DeferredContext, v40, 4);
  if ( a2 )
  {
    LOBYTE(RtlpBootStatHandleLock.StackBase) = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v14) = 1;
      VfNotifyOfHibernate(v14);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL);
  if ( (Status & 0x80000000) == 0 )
  {
    *((_BYTE *)p_DeferredContext + 44) = 1;
    PopIssueNextState((__int64)p_DeferredContext, v40, 12);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      guard_dispatch_icall_no_overrides(v16, v15);
    if ( a2 )
    {
      PopIssueNextState((__int64)p_DeferredContext, v40, 5);
      KeSuspendDynamicTracing();
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        MiUpdateUserMappings();
        BYTE3(stru_140E2ED08.RelativeTimerBias) = 1;
      }
      PopIssueNextState((__int64)p_DeferredContext, v40, 10);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState((__int64)p_DeferredContext, v40, 6);
    PopCheckpointSystemSleep(26LL);
    v5 = Status;
    KeRebaselineInterruptTime();
    guard_dispatch_icall_no_overrides(v18, v17);
    if ( a2 && v5 == 1073742484 )
      PopIssueNextState((__int64)p_DeferredContext, v40, 7);
    PopIssueNextState((__int64)p_DeferredContext, v40, 8);
    if ( a2 )
    {
      if ( v5 == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState((__int64)p_DeferredContext, v40, 9);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(xmmword_140F10908, 0x13uLL);
      v19 = *(_QWORD *)(a2 + 336);
      if ( v19 )
        MmInvalidateDumpAddresses(v19, (unsigned int)(16 * *(_DWORD *)(a2 + 288)));
      PopIssueNextState((__int64)p_DeferredContext, v40, 10);
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        BYTE3(stru_140E2ED08.RelativeTimerBias) = 0;
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 2) = 0;
      KeResumeDynamicTracing();
      PopIssueNextState((__int64)p_DeferredContext, v40, 11);
    }
    v20 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(v5);
    if ( (v20 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( v5 >= 0 )
    {
      ++PoPowerSequence;
      LODWORD(PpmIdlePolicyLock.Teb) = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140F10328 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)p_DeferredContext + 44) = 0;
    PopIssueNextState((__int64)p_DeferredContext, v40, 12);
  }
  if ( a2 )
  {
    if ( v5 == -1073741632 )
    {
      while ( 1 )
        ;
    }
    PopHibernateInProgress = 0;
    *(_DWORD *)(a2 + 204) = v5;
    if ( (unsigned int)VfIsVerifierEnabled() )
      VfNotifyOfHibernate(0LL);
    if ( SshpBlockerCollections.SystemAffinityTokenListHead.Next == &SshpBlockerCollections.SystemAffinityTokenListHead )
      LOBYTE(RtlpBootStatHandleLock.StackBase) = 1;
    *(_DWORD *)(a2 + 204) = 1073742484;
  }
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL);
  PoAllProcIntrDisabled = 0;
  *((LARGE_INTEGER *)p_DeferredContext + 8) = RtlGetInterruptTimePrecise((PLARGE_INTEGER)&Affinity);
  PopIssueNextState((__int64)p_DeferredContext, v40, 13);
  if ( v5 >= 0 )
  {
    if ( dword_140F1044C != 4 || PoResumeFromHibernate )
    {
      v21 = 0;
      v24 = KeQueryPerformanceCounter(0LL).QuadPart;
      qword_140F10B50 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PopDirectedDripsDiagLock.WriteOperationCount;
    }
    else
    {
      v21 = 1;
      if ( !(unsigned __int8)guard_dispatch_icall_no_overrides((__int64)&v24, 0LL) )
        v24 = 0LL;
    }
    if ( (xmmword_140FC0C10 & 0x8000) != 0 )
    {
      Affinity.Mask = v24;
      v39 = 8LL;
      QuadPart = &Affinity;
      EtwTraceKernelEvent((int)&QuadPart, 1, 0x80008000, 4657, 5249026);
    }
    if ( v21 )
    {
      v24 = PopQpcFrequency / 0x3E8 * (v24 / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz));
      qword_140F10A28 = v24 - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState((__int64)p_DeferredContext, v40, 14);
  PopIssueNextState((__int64)p_DeferredContext, v40, 15);
  PopIssueNextState((__int64)p_DeferredContext, v40, 16);
  if ( (Status & 0x80000000) == 0 )
  {
    v22 = *p_DeferredContext;
    Status = 0;
    v23 = *(_BYTE *)(v22 + 5);
    if ( v23 != -1 )
      *(_BYTE *)(v22 + 5) = v23 + 1;
  }
  if ( a2 )
  {
    if ( v5 == 1073742484 && !byte_140F10921 && byte_140E65F58 )
      BgLibraryInitialize(qword_140E65F38, 0LL);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return Status;
}
