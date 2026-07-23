/*
 * XREFs of SshpSessionManagerSendControlEvent @ 0x140B31D28
 * Callers:
 *     PopBootBatteryStatusWorker @ 0x140773870 (PopBootBatteryStatusWorker.c)
 *     SshSessionManagerTraceBatteryCountChange @ 0x1407E908C (SshSessionManagerTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1407E914C (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceDirtyTransition @ 0x1407E9278 (SshSessionManagerTraceDirtyTransition.c)
 *     SshSessionManagerTraceShutdownAction @ 0x1407E9450 (SshSessionManagerTraceShutdownAction.c)
 *     SshSessionManagerTraceSystemStop @ 0x1407E94B8 (SshSessionManagerTraceSystemStop.c)
 *     SshpSessionManagerTraceAcDcStateChangeV1 @ 0x1407E97B8 (SshpSessionManagerTraceAcDcStateChangeV1.c)
 *     SshpSessionManagerTraceBatteryCountChangeV1 @ 0x1407E985C (SshpSessionManagerTraceBatteryCountChangeV1.c)
 *     SshpSessionManagerTraceCsEnterReasonV1 @ 0x1407E9900 (SshpSessionManagerTraceCsEnterReasonV1.c)
 *     SshpSessionManagerTraceCsExitReasonV1 @ 0x1407E9A18 (SshpSessionManagerTraceCsExitReasonV1.c)
 *     SshpSessionManagerTracePreSleepNotificationV1 @ 0x1407E9CD0 (SshpSessionManagerTracePreSleepNotificationV1.c)
 *     SshpSessionManagerTraceSystemStart @ 0x1407E9E44 (SshpSessionManagerTraceSystemStart.c)
 *     SshpSessionManagerTraceSystemStopV1 @ 0x1407E9E68 (SshpSessionManagerTraceSystemStopV1.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140B31BE8 (SshSessionManagerTracePostSleepNotification.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140B77844 (SshSessionManagerTraceAcDcStateChange.c)
 *     SshSessionManagerTraceCsExitReason @ 0x140B77904 (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140B77BD0 (SshSessionManagerTracePreSleepNotification.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     SshpWorkItemQueue @ 0x1404957B0 (SshpWorkItemQueue.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbp
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  _DWORD *v10; // rbx
  LARGE_INTEGER SystemTimePrecise; // r15
  int v12; // edi
  int v13; // esi
  LARGE_INTEGER *v14; // r14
  unsigned int v15; // edi
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F0A858, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0A858, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F0A858, v7, (__int64)&qword_140F0A858);
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
  if ( 1024 - (int)dword_140F0A8C0 >= (unsigned int)(v12 + 26) )
  {
    KeResetEvent(&word_140F0A8A8);
    WORD1(v18) = *(_WORD *)a1;
    DWORD1(v18) = *(unsigned __int8 *)(a1 + 2);
    v14 = (LARGE_INTEGER *)((char *)&unk_140F0A8C4 + (unsigned int)dword_140F0A8C0);
    LOWORD(v18) = v12;
    v15 = 32;
    *((_QWORD *)&v18 + 1) = *(_QWORD *)&SLEEPSTUDY_ETW_PROVIDER.Data1;
    *(_OWORD *)&v14->LowPart = v18;
    v14[2].QuadPart = *(_OWORD *)&_mm_unpackhi_pd((__m128d)SLEEPSTUDY_ETW_PROVIDER, (__m128d)SLEEPSTUDY_ETW_PROVIDER);
    v14[3] = SystemTimePrecise;
    if ( (_DWORD)v5 )
    {
      do
      {
        memmove((char *)v14 + v15, *((const void **)v10 - 1), (unsigned int)*v10);
        v15 += *v10;
        v10 += 4;
        --v5;
      }
      while ( v5 );
    }
    *(_WORD *)((char *)&v14->LowPart + v15) = v13;
    LODWORD(dword_140F0A8C0) = v13 + dword_140F0A8C0;
    if ( qword_140F0A860 )
      SshpWorkItemQueue((struct _WORK_QUEUE_ITEM *)&qword_140F0A868);
  }
  SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&qword_140F0A858);
}
