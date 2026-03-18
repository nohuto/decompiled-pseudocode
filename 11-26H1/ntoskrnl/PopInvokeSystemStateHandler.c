/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140C04104
 * Callers:
 *     PopShutdownSystem @ 0x140BFDFD4 (PopShutdownSystem.c)
 *     PopEndMirroring @ 0x140C03D50 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeInsertQueueDpc @ 0x1402BDB30 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 *     KeSuspendDynamicTracing @ 0x140508C4C (KeSuspendDynamicTracing.c)
 *     KeRebaselineInterruptTime @ 0x140514E68 (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x140514E98 (KeRebaselineSystemTime.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140534930 (DbgBreakPointWithStatus.c)
 *     KeResumeDynamicTracing @ 0x1405FC444 (KeResumeDynamicTracing.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopIssueNextState @ 0x140BFDF10 (PopIssueNextState.c)
 *     MiConvertHiberPhasePages @ 0x140C00AE4 (MiConvertHiberPhasePages.c)
 *     MmInvalidateDumpAddresses @ 0x140C01550 (MmInvalidateDumpAddresses.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 *     MiUpdateUserMappings @ 0x140C06620 (MiUpdateUserMappings.c)
 *     VfNotifyOfHibernate @ 0x140C25624 (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x140C4FAD4 (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // r13
  int v5; // r12d
  unsigned int v7; // ecx
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
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  char *DeferredContext; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v28)(PVOID); // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  void **p_KernelShadowStackBase; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  char v33; // [rsp+BCh] [rbp-44h]
  int v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C4h] [rbp-3Ch]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+D8h] [rbp-28h]
  struct _GROUP_AFFINITY *QuadPart; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-8h]
  _DWORD v40[30]; // [rsp+100h] [rbp+0h] BYREF
  ULONG Status; // [rsp+178h] [rbp+78h]
  struct _SLIST_ENTRY ListEntry; // [rsp+190h] [rbp+90h] BYREF
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
  DeferredContext = (char *)&v43;
  p_KernelShadowStackBase = &stru_140F10828.KernelShadowStackBase;
  v43 = 0LL;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext = (char *)&unk_140F10760 + 24 * v2;
    if ( !*((_QWORD *)DeferredContext + 1) )
      return 3221225664LL;
  }
  v34 = KeNumberProcessors_0;
  v37 = KeNumberProcessors_0;
  v36 = 1;
  if ( (unsigned int)(v2 - 4) > 1 )
  {
    if ( unk_140F10F18 )
      *((_QWORD *)DeferredContext + 2) = *((unsigned int *)DeferredContext + 4) | 0x40000LL;
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
    qword_140E26908 = (__int64)v28;
    qword_140E26910 = v29;
    qword_140E26918 = v30;
    qword_140E26920 = (__int64)p_KernelShadowStackBase;
    dword_140E26928 = v32;
    byte_140E2692C = v33;
    dword_140E26930 = v34;
    dword_140E26948 = v37;
    dword_140E26938 = v36;
    RtlpInterlockedPushEntrySList(&stru_140E26950, &ListEntry);
  }
  else
  {
    v7 = **(_DWORD **)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v7 >> 6);
    Affinity.Mask = 1LL << v7;
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
  if ( dword_140F0FB8C == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v13 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v13 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140FBFC10 & 0x8000) != 0 )
  {
    QuadPart = (struct _GROUP_AFFINITY *)PerformanceCounter.QuadPart;
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
  LOBYTE(stru_140F10828.WriteOperationCount) = 1;
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
      if ( !_bittest(dword_140F0FD40, 8u) )
      {
        MiUpdateUserMappings();
        BYTE3(stru_140E2EB88.RelativeTimerBias) = 1;
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
      MmInvalidateDumpAddresses(xmmword_140F0FD88, 0x13uLL);
      v19 = *(_QWORD *)(a2 + 336);
      if ( v19 )
        MmInvalidateDumpAddresses(v19, (unsigned int)(16 * *(_DWORD *)(a2 + 288)));
      PopIssueNextState((__int64)p_DeferredContext, v40, 10);
      if ( !_bittest(dword_140F0FD40, 8u) )
      {
        BYTE3(stru_140E2EB88.RelativeTimerBias) = 0;
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 2) = 0;
      KeResumeDynamicTracing();
      PopIssueNextState((__int64)p_DeferredContext, v40, 11);
    }
    v20 = dword_140E6762C;
    if ( (dword_140E6762C & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(v5);
    if ( (v20 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    BYTE4(stru_140F10828.KernelShadowStackInitial) = 0;
    if ( v5 >= 0 )
    {
      ++HIDWORD(stru_140F10828.WriteOperationCount);
      dword_140F105A0[0] = 0;
      HIDWORD(stru_140F10828.OtherOperationCount) = 0;
      LODWORD(stru_140F10828.ReadTransferCount) = 0;
      LODWORD(stru_140F0F620.SchedulerSharedSwappablePage) = 1;
      if ( LOBYTE(stru_140F10828.OtherOperationCount) )
      {
        _InterlockedOr((_DWORD *)&stru_140F10828.OtherOperationCount + 1, 1u);
        _InterlockedOr((volatile signed __int32 *)&stru_140F10828.ReadTransferCount, 0x19u);
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
    LODWORD(stru_140F11D08.WaitStatus) = 0;
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
  LOBYTE(stru_140F10828.WriteOperationCount) = 0;
  p_DeferredContext[8] = RtlGetInterruptTimePrecise(&Affinity.Mask);
  PopIssueNextState((__int64)p_DeferredContext, v40, 13);
  if ( v5 >= 0 )
  {
    if ( dword_140F0FB8C != 4 || LOBYTE(stru_140F10828.OtherOperationCount) )
    {
      v21 = 0;
      v24 = KeQueryPerformanceCounter(0LL).QuadPart;
      stru_140F10070.Affinity = (_KAFFINITY_EX *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F0B0D0);
    }
    else
    {
      v21 = 1;
      if ( !(unsigned __int8)guard_dispatch_icall_no_overrides((__int64)&v24, 0LL) )
        v24 = 0LL;
    }
    if ( (xmmword_140FBFC10 & 0x8000) != 0 )
    {
      Affinity.Mask = v24;
      v39 = 8LL;
      QuadPart = &Affinity;
      EtwTraceKernelEvent((int)&QuadPart, 1, 0x80008000, 4657, 5249026);
    }
    if ( v21 )
    {
      v24 = PopQpcFrequency / 0x3E8 * (v24 / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz));
      stru_140F10070.Timer.DueTime.QuadPart = v24 - PerformanceCounter.QuadPart;
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
    if ( v5 == 1073742484 && !byte_140F0FDA1 && byte_140E65D3E )
      BgLibraryInitialize(qword_140E65D30, 0LL);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return Status;
}
