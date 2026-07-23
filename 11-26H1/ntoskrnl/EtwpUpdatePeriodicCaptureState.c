/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x140833450
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x14037C1D0 (ExSetTimer.c)
 *     ExCancelTimer @ 0x1403B3CE0 (ExCancelTimer.c)
 *     ExAllocateTimer @ 0x14044E550 (ExAllocateTimer.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x14097A0C0 (EtwpCheckNotificationAccess.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(__int64 a1, unsigned int a2, unsigned __int16 a3, char *a4)
{
  __int64 v4; // r15
  int v6; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rbp
  int i; // ebx
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rbx
  __int64 v16; // rdi
  __int64 Pool2; // rax
  ULONG_PTR *v18; // r14
  void *v19; // rax
  __int64 Timer; // rax
  ULONG_PTR v21; // rcx
  signed __int64 v22; // rdx
  __int128 v24; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  v24 = 0LL;
  v6 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v9 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[52].Flink, v8, 0LL);
  v11 = v9;
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 816) & 0x40) != 0 )
    {
      v6 = -1073741162;
LABEL_34:
      EtwpReleaseLoggerContext(v11, 0LL);
      return (unsigned int)v6;
    }
    for ( i = 0; i < (int)v4; ++i )
    {
      v6 = EtwpCheckNotificationAccess(&a4[16 * i], v11 + 276);
      if ( v6 < 0 )
      {
        v6 = -1073741790;
        goto LABEL_34;
      }
    }
    v13 = (AutoBoost *)KeAbPreAcquire(v11 + 688, 0LL, 0LL, v10);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 688), v13, v11 + 688);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    v16 = *(_QWORD *)(v11 + 1344);
    if ( v16 )
      goto LABEL_38;
    if ( !(_WORD)v4 )
    {
LABEL_31:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 688));
      KeAbPostRelease(v11 + 688);
      goto LABEL_34;
    }
    Pool2 = ExAllocatePool2(0x40uLL);
    *(_QWORD *)(v11 + 1344) = Pool2;
    v16 = Pool2;
    if ( Pool2 )
    {
LABEL_38:
      v18 = (ULONG_PTR *)(v16 + 8);
      if ( *(_QWORD *)(v16 + 24) )
      {
        if ( *v18 )
        {
          ExCancelTimer(*v18, 0LL);
          *(_DWORD *)(v16 + 64) = 0;
        }
        ExFreePoolWithTag(*(PVOID *)(v16 + 24), 0);
        *(_QWORD *)(v16 + 24) = 0LL;
        *(_WORD *)(v16 + 16) = 0;
      }
      if ( !(_WORD)v4 )
        goto LABEL_31;
      v19 = (void *)ExAllocatePool2(0x100uLL);
      *(_QWORD *)(v16 + 24) = v19;
      if ( v19 )
      {
        *(_WORD *)(v16 + 16) = v4;
        memmove(v19, a4, 16 * v4);
        if ( !*v18 )
        {
          Timer = ExAllocateTimer((__int64)PeriodicCaptureStateTimerCallback, v11, 8u);
          *v18 = Timer;
          if ( !Timer )
          {
            ExFreePoolWithTag(*(PVOID *)(v16 + 24), 0);
            *(_QWORD *)(v16 + 24) = 0LL;
            *(_WORD *)(v16 + 16) = 0;
            goto LABEL_19;
          }
          *(_QWORD *)(v16 + 56) = v11;
          *(_QWORD *)(v16 + 48) = SendCaptureStateNotificationsWorker;
          *(_QWORD *)(v16 + 32) = 0LL;
        }
        *((_QWORD *)&v24 + 1) = -1LL;
        v21 = *v18;
        v22 = -10000000LL * a2;
        *(_QWORD *)v16 = v22;
        ExSetTimer(v21, v22, 0LL, (ULONG_PTR)&v24);
        *(_DWORD *)(v16 + 64) = 1;
        goto LABEL_31;
      }
    }
LABEL_19:
    v6 = -1073741801;
    goto LABEL_31;
  }
  return (unsigned int)-1073741811;
}
