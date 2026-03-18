/*
 * XREFs of SshpSessionManagerSendControlEvent @ 0x140B2FF48
 * Callers:
 *     PopBootBatteryStatusWorker @ 0x140770870 (PopBootBatteryStatusWorker.c)
 *     PopDiagTraceAcDcStateChange @ 0x1407D2424 (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTraceBatteryCountChange @ 0x1407D2E84 (PopDiagTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1407E3D40 (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceDirtyTransition @ 0x1407E3E48 (SshSessionManagerTraceDirtyTransition.c)
 *     SshSessionManagerTraceShutdownAction @ 0x1407E4020 (SshSessionManagerTraceShutdownAction.c)
 *     SshSessionManagerTraceSystemStop @ 0x1407E4088 (SshSessionManagerTraceSystemStop.c)
 *     SshpSessionManagerTraceSystemStart @ 0x1407E4364 (SshpSessionManagerTraceSystemStart.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140B2FE08 (SshSessionManagerTracePostSleepNotification.c)
 *     SshSessionManagerTraceCsExitReason @ 0x140B726FC (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140B729AC (SshSessionManagerTracePreSleepNotification.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     SshpWorkItemQueue @ 0x14049BC60 (SshpWorkItemQueue.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404B32FC (SSHSupportReleasePushLockExclusive.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

void __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbp
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  _DWORD *v10; // rbx
  __int64 SystemTimePrecise; // r15
  int v12; // edi
  int v13; // esi
  char *v14; // r14
  unsigned int v15; // edi
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.Spare35[1], 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.Spare35[1], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &PsAltSystemCallRegistrationLock.Spare35[1],
      v7,
      (__int64)&PsAltSystemCallRegistrationLock.Spare35[1]);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (_DWORD *)(a3 + 8);
  SystemTimePrecise = RtlGetSystemTimePrecise();
  v12 = 8;
  if ( (_DWORD)v5 )
  {
    v16 = (_DWORD *)(a3 + 8);
    v17 = v5;
    do
    {
      v12 += *v16;
      v16 += 4;
      --v17;
    }
    while ( v17 );
  }
  v13 = v12 + 26;
  if ( 1024 - LODWORD(PsAltSystemCallRegistrationLock.Padding[2]) >= (unsigned int)(v12 + 26) )
  {
    KeResetEvent((PRKEVENT)&PsAltSystemCallRegistrationLock.SchedulerAssistLastYieldBoostTime);
    WORD1(v18) = *(_WORD *)a1;
    DWORD1(v18) = *(unsigned __int8 *)(a1 + 2);
    v14 = (char *)&PsAltSystemCallRegistrationLock.Padding[2] + LODWORD(PsAltSystemCallRegistrationLock.Padding[2]) + 4;
    LOWORD(v18) = v12;
    v15 = 32;
    *((_QWORD *)&v18 + 1) = *(_QWORD *)&SLEEPSTUDY_ETW_PROVIDER.Data1;
    *(_OWORD *)v14 = v18;
    *((_QWORD *)v14 + 2) = *(_OWORD *)&_mm_unpackhi_pd(
                                         (__m128d)SLEEPSTUDY_ETW_PROVIDER,
                                         (__m128d)SLEEPSTUDY_ETW_PROVIDER);
    *((_QWORD *)v14 + 3) = SystemTimePrecise;
    if ( (_DWORD)v5 )
    {
      do
      {
        memmove(&v14[v15], *((const void **)v10 - 1), (unsigned int)*v10);
        v15 += *v10;
        v10 += 4;
        --v5;
      }
      while ( v5 );
    }
    *(_WORD *)&v14[v15] = v13;
    LODWORD(PsAltSystemCallRegistrationLock.Padding[2]) += v13;
    if ( *(_QWORD *)&PsAltSystemCallRegistrationLock.Spare36 )
      SshpWorkItemQueue((struct _WORK_QUEUE_ITEM *)&PsAltSystemCallRegistrationLock.SystemAffinityTokenListHead);
  }
  SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.Spare35[1]);
}
