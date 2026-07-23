/*
 * XREFs of SepRmDbInitialization @ 0x140CE48BC
 * Callers:
 *     SepInitializationPhase0 @ 0x140CE3538 (SepInitializationPhase0.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepBuildDefaultCap @ 0x14081CFB4 (SepBuildDefaultCap.c)
 *     SepCreateLogonSessionTrack @ 0x140AACD9C (SepCreateLogonSessionTrack.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char SepRmDbInitialization()
{
  _SINGLE_LIST_ENTRY *p_SystemAffinityTokenListHead; // rbx
  __int64 v1; // r14
  struct _SINGLE_LIST_ENTRY *v2; // rax
  bool v3; // zf
  KSPIN_LOCK *v4; // rdi
  unsigned __int16 *v5; // rax
  __int64 *v6; // rbp
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v8; // si
  unsigned __int64 v9; // rax
  KSPIN_LOCK *v10; // rbx
  unsigned __int16 *v11; // rax
  __int64 *v12; // rsi
  int v13; // eax
  unsigned __int16 v14; // di
  void *Pool2; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  p_SystemAffinityTokenListHead = &RtlpBootStatHandleLock.SystemAffinityTokenListHead;
  v1 = 4LL;
  do
  {
    if ( (unsigned __int64)p_SystemAffinityTokenListHead < 0xFFFF800000000000uLL
      || MmDeterminePoolType((unsigned __int64)p_SystemAffinityTokenListHead) == 256 )
    {
      ExpTraceLogBadResourceAddress((unsigned __int64)p_SystemAffinityTokenListHead, retaddr);
    }
    memset_0(p_SystemAffinityTokenListHead, 0, 0x68uLL);
    v2 = 0LL;
    p_SystemAffinityTokenListHead[1].Next = p_SystemAffinityTokenListHead;
    v3 = (NtGlobalFlag & 0x2000) == 0;
    p_SystemAffinityTokenListHead->Next = p_SystemAffinityTokenListHead;
    p_SystemAffinityTokenListHead[4].Next = 0LL;
    p_SystemAffinityTokenListHead[5].Next = 0LL;
    p_SystemAffinityTokenListHead[12].Next = 0LL;
    if ( !v3 )
    {
      v4 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
      if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
        && (v5 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1),
            (v6 = (__int64 *)v5) != 0LL) )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v4, v5);
        v8 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)v4, v6);
      }
      else
      {
        v8 = 0;
      }
      v2 = (struct _SINGLE_LIST_ENTRY *)v8;
    }
    p_SystemAffinityTokenListHead[11].Next = v2;
    HIDWORD(p_SystemAffinityTokenListHead[10].Next) = -1;
    ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)p_SystemAffinityTokenListHead);
    __incgsdword(0x9098u);
    if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
      PerfLogExecutiveResourceInitialize(65544, (__int64)p_SystemAffinityTokenListHead, 0, 0);
    p_SystemAffinityTokenListHead += 13;
    --v1;
  }
  while ( v1 );
  if ( (unsigned __int64)&RtlpBootStatHandleLock.KernelWaitTime < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&RtlpBootStatHandleLock.KernelWaitTime) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&RtlpBootStatHandleLock.KernelWaitTime, retaddr);
  }
  memset_0(&RtlpBootStatHandleLock.1008, 0, 0x50uLL);
  v9 = 0LL;
  RtlpBootStatHandleLock.UserWaitTime = (unsigned __int64)&RtlpBootStatHandleLock.KernelWaitTime;
  RtlpBootStatHandleLock.KernelWaitTime = (unsigned __int64)&RtlpBootStatHandleLock.KernelWaitTime;
  *(_QWORD *)&RtlpBootStatHandleLock.SchedulerAssistPriorityFloor = 0LL;
  RtlpBootStatHandleLock.KernelShadowStack = 0LL;
  RtlpBootStatHandleLock.Spare35[1] = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v10 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
      && (v11 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1),
          (v12 = (__int64 *)v11) != 0LL) )
    {
      v13 = RtlpStdGetRecordedStackTraceIndex(v10, v11);
      v14 = v13;
      if ( !v13 )
        RtlStdReleaseStackTrace((__int64)v10, v12);
    }
    else
    {
      v14 = 0;
    }
    v9 = v14;
  }
  RtlpBootStatHandleLock.Spare35[0] = v9;
  HIDWORD(RtlpBootStatHandleLock.WpsFeedback) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&RtlpBootStatHandleLock.KernelWaitTime);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&RtlpBootStatHandleLock.KernelWaitTime, 0, 0);
  SepRmNotifyMutex.Count = 1;
  SepRmNotifyMutex.Owner = 0LL;
  SepRmNotifyMutex.Contention = 0;
  LOWORD(SepRmNotifyMutex.Event.Header.Lock) = 1;
  SepRmNotifyMutex.Event.Header.Size = 6;
  SepRmNotifyMutex.Event.Header.SignalState = 0;
  SepRmNotifyMutex.Event.Header.WaitListHead.Blink = &SepRmNotifyMutex.Event.Header.WaitListHead;
  SepRmNotifyMutex.Event.Header.WaitListHead.Flink = &SepRmNotifyMutex.Event.Header.WaitListHead;
  Pool2 = (void *)ExAllocatePool2(256LL, 0x80uLL, 0x734C6553u);
  SepLogonSessions = (__int64)Pool2;
  if ( !Pool2 )
    return 0;
  memset_0(Pool2, 0, 0x80uLL);
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId) < 0 )
    return 0;
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId) < 0 )
    return 0;
  SepRmAuditingEnabled = 0;
  memset_0(&SepRmCapTableLock.SListFaultAddress, 0, 0x78uLL);
  BYTE4(SepRmCapTableLock.KernelStack) = 1;
  *(_QWORD *)&SepRmCapTableLock.Header.Lock = 0LL;
  SepRmEnforceCap = 0;
  if ( (int)SepBuildDefaultCap() < 0 )
    return 0;
  HIDWORD(PspSiloMonitorLock.SchedulerAssist) = 1;
  return 1;
}
