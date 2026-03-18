/*
 * XREFs of SepRmDbInitialization @ 0x140CDE524
 * Callers:
 *     SepInitializationPhase0 @ 0x140CDD1A0 (SepInitializationPhase0.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepBuildDefaultCap @ 0x140816DA4 (SepBuildDefaultCap.c)
 *     SepCreateLogonSessionTrack @ 0x140AAF14C (SepCreateLogonSessionTrack.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char SepRmDbInitialization()
{
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v1; // r14
  struct _LIST_ENTRY *v2; // rax
  bool v3; // zf
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v5; // rax
  __int64 *v6; // rbp
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v8; // si
  ULONG_PTR v9; // rax
  KSPIN_LOCK *v10; // rbx
  unsigned __int16 *v11; // rax
  __int64 *v12; // rsi
  int v13; // eax
  unsigned __int16 v14; // di
  void *Pool2; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  p_Blink = &RtlpBootStatHandleLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  v1 = 4LL;
  do
  {
    if ( (unsigned __int64)p_Blink < 0xFFFF800000000000uLL || MmDeterminePoolType((unsigned __int64)p_Blink) == 256 )
      ExpTraceLogBadResourceAddress((unsigned __int64)p_Blink, retaddr);
    memset_0(p_Blink, 0, 0x68uLL);
    v2 = 0LL;
    p_Blink[1] = (struct _LIST_ENTRY *)p_Blink;
    v3 = (NtGlobalFlag & 0x2000) == 0;
    *p_Blink = (struct _LIST_ENTRY *)p_Blink;
    p_Blink[4] = 0LL;
    p_Blink[5] = 0LL;
    p_Blink[12] = 0LL;
    if ( !v3 )
    {
      p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
      if ( NormalizationListLock.SchedulingGroup
        && (v5 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
            (v6 = (__int64 *)v5) != 0LL) )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v5);
        v8 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)p_Policy, v6);
      }
      else
      {
        v8 = 0;
      }
      v2 = (struct _LIST_ENTRY *)v8;
    }
    p_Blink[11] = v2;
    *((_DWORD *)p_Blink + 21) = -1;
    ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)p_Blink);
    __incgsdword(0x9098u);
    if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
      PerfLogExecutiveResourceInitialize(65544, (__int64)p_Blink, 0, 0);
    p_Blink += 13;
    --v1;
  }
  while ( v1 );
  if ( (unsigned __int64)&SepRmGlobalSaclLock < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&SepRmGlobalSaclLock) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&SepRmGlobalSaclLock, retaddr);
  }
  memset_0(&SepRmGlobalSaclLock.OwnerTable, 0, 0x50uLL);
  v9 = 0LL;
  SepRmGlobalSaclLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&SepRmGlobalSaclLock;
  SepRmGlobalSaclLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&SepRmGlobalSaclLock;
  SepRmGlobalSaclLock.SharedWaiters = 0LL;
  SepRmGlobalSaclLock.ExclusiveWaiters = 0LL;
  SepRmGlobalSaclLock.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v10 = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup
      && (v11 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
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
  SepRmGlobalSaclLock.CreatorBackTraceIndex = v9;
  HIDWORD(SepRmGlobalSaclLock.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&SepRmGlobalSaclLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&SepRmGlobalSaclLock, 0, 0);
  LODWORD(RtlpBootStatHandleLock.TracingPrivate[0]) = 1;
  RtlpBootStatHandleLock.SchedulerAssist = 0LL;
  LODWORD(RtlpBootStatHandleLock.AbWaitObject) = 0;
  LOWORD(RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue) = 1;
  BYTE2(RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue) = 6;
  *(&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue + 1) = 0;
  RtlpBootStatHandleLock.UserWaitTime = (unsigned __int64)&RtlpBootStatHandleLock.KernelWaitTime;
  RtlpBootStatHandleLock.KernelWaitTime = (unsigned __int64)&RtlpBootStatHandleLock.KernelWaitTime;
  Pool2 = (void *)ExAllocatePool2(256LL, 0x80uLL, 0x734C6553u);
  SepLogonSessions = (__int64)Pool2;
  if ( !Pool2 )
    return 0;
  memset_0(Pool2, 0, 0x80uLL);
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId) < 0 )
    return 0;
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId) < 0 )
    return 0;
  HIDWORD(SepRmCapTableLock.Header.WaitListHead.Flink) = 0;
  memset_0((char *)&SepRmCapTableLock.116 + 4, 0, 0x78uLL);
  SepRmCapTableLock.ApcStateFill[36] = 1;
  *(_QWORD *)&SepRmCapTableLock.Header.Lock = 0LL;
  BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) = 0;
  if ( (int)SepBuildDefaultCap() < 0 )
    return 0;
  HIDWORD(PspSiloMonitorLock.SchedulerAssist) = 1;
  return 1;
}
