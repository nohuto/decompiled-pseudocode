/*
 * XREFs of EtwpCoverageSamplerStop @ 0x1409BDF40
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x1408373F0 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140837A74 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     KeStopProfile @ 0x1404A4318 (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404F7B1C (EtwpCovSampCaptureContextStop.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140802610 (PsRemoveLoadImageNotifyRoutine.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpCovSampProcessCleanup @ 0x140A33ED0 (EtwpCovSampProcessCleanup.c)
 */

NTSTATUS __fastcall EtwpCoverageSamplerStop(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *UserWaitTime; // r12
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rsi
  int v11; // eax
  struct _KTHREAD *v12; // rcx
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rax
  void *v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  AutoBoost *v18; // rsi
  struct _LIST_ENTRY *Blink; // r13
  int v20; // eax
  __int64 v21; // rcx
  LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // r15
  struct _KTHREAD *v24; // rcx
  AutoBoost *v25; // rax
  void *v26; // rdx
  AutoBoost *v27; // r14
  LIST_ENTRY *NextProcess; // rax
  LIST_ENTRY *v29; // rbp
  REGHANDLE v30; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  UserWaitTime = 0LL;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.AbWaitObject, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.AbWaitObject, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.AbWaitObject,
      v7,
      (__int64)&ExpSysDbgLock.AbWaitObject);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  *(_QWORD *)&ExpSysDbgLock.ReservedPreviousReadyTimeValue = KeGetCurrentThread();
  if ( ExpSysDbgLock.UserWaitTime == a1 )
  {
    v11 = *(_DWORD *)(a1 + 1728);
    if ( (v11 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1728) = v11 | 2;
      *(_QWORD *)&ExpSysDbgLock.ReservedPreviousReadyTimeValue = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.AbWaitObject, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.AbWaitObject);
      KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.AbWaitObject);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&ExpSysDbgLock.1008);
      _InterlockedExchange64((volatile __int64 *)&ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink, 1LL);
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      v14 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.AbWaitObject, 0LL, 0LL, v13);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.AbWaitObject, 0LL);
      v18 = v14;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&ExpSysDbgLock.AbWaitObject,
          v14,
          (__int64)&ExpSysDbgLock.AbWaitObject);
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v15);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
      UserWaitTime = (void *)ExpSysDbgLock.UserWaitTime;
      Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
      *(_QWORD *)&ExpSysDbgLock.ReservedPreviousReadyTimeValue = KeGetCurrentThread();
      ExpSysDbgLock.UserWaitTime = 0LL;
      v20 = *(_DWORD *)(a1 + 1660);
      if ( (v20 & 8) != 0 )
      {
        KeStopProfile(ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList + 16);
        *(_DWORD *)(a1 + 1660) &= ~8u;
        v20 = *(_DWORD *)(a1 + 1660);
      }
      if ( (v20 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine(EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1660) &= ~2u;
        v20 = *(_DWORD *)(a1 + 1660);
      }
      if ( (v20 & 4) != 0 )
      {
        v21 = EtwpHostSiloState;
        *(_DWORD *)(EtwpHostSiloState + 4848) &= 0xFFFFFDFB;
        *(_DWORD *)(v21 + 4844) &= 0xFFFFEFFB;
        EtwpUpdateGlobalGroupMasks(v21, 0LL, 9LL);
        *(_DWORD *)(a1 + 1660) &= ~4u;
      }
      for ( i = 0LL; ; i = v29 )
      {
        NextProcess = PsGetNextProcess(i, (__int64)v15, v16, v17);
        v29 = NextProcess;
        if ( !NextProcess )
          break;
        Flink = NextProcess[119].Flink;
        if ( Flink )
        {
          v24 = KeGetCurrentThread();
          --v24->KernelApcDisable;
          v25 = (AutoBoost *)KeAbPreAcquire((__int64)&Flink->Blink, 0LL, 0LL, v17);
          v27 = v25;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink->Blink, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink->Blink, v25, (__int64)&Flink->Blink);
          if ( v27 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v27, v26);
            else
              *((_BYTE *)v27 + 10) = 1;
          }
          LOBYTE(v26) = 1;
          Flink[1].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
          EtwpCovSampProcessCleanup(Flink, v26);
          Flink[1].Flink = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Flink->Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&Flink->Blink);
          KeAbPostRelease((unsigned __int64)&Flink->Blink);
          KeLeaveCriticalRegion();
        }
      }
      EtwpCovSampCaptureContextStop((__int64)Blink);
      *(_DWORD *)(a1 + 1660) &= ~1u;
    }
  }
  if ( *(struct _KTHREAD **)&ExpSysDbgLock.ReservedPreviousReadyTimeValue == KeGetCurrentThread() )
  {
    *(_QWORD *)&ExpSysDbgLock.ReservedPreviousReadyTimeValue = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.AbWaitObject, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.AbWaitObject);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.AbWaitObject);
    KeLeaveCriticalRegion();
  }
  if ( UserWaitTime )
    ObfDereferenceObject(UserWaitTime);
  v30 = qword_140E09090;
  qword_140E09090 = 0LL;
  dword_140E09070 = 0;
  return EtwUnregister(v30);
}
