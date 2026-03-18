/*
 * XREFs of EtwpCoverageSamplerStop @ 0x140A84B18
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x1408311B0 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140831834 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     KeStopProfile @ 0x1404AAC88 (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404FE56C (EtwpCovSampCaptureContextStop.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1407FCBE0 (PsRemoveLoadImageNotifyRoutine.c)
 *     EtwpCovSampProcessCleanup @ 0x140940DC0 (EtwpCovSampProcessCleanup.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140959E60 (EtwpUpdateGlobalGroupMasks.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 */

NTSTATUS __fastcall EtwpCoverageSamplerStop(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _KSCB *QueuedScb; // r12
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
  __int64 v19; // r13
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
  QueuedScb = 0LL;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ReadTransferCount, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.ReadTransferCount, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.ReadTransferCount,
      v7,
      (__int64)&ExpSysDbgLock.ReadTransferCount);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  ExpSysDbgLock.WriteTransferCount = (__int64)KeGetCurrentThread();
  if ( ExpSysDbgLock.QueuedScb == (_KSCB *)a1 )
  {
    v11 = *(_DWORD *)(a1 + 1728);
    if ( (v11 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1728) = v11 | 2;
      ExpSysDbgLock.WriteTransferCount = 0LL;
      if ( (_InterlockedExchangeAdd64(&ExpSysDbgLock.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ExpSysDbgLock.ReadTransferCount);
      KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ReadTransferCount);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&ExpSysDbgLock.ThreadTimerDelay);
      _InterlockedExchange64((volatile __int64 *)&ExpSysDbgLock.ThreadTimerDelay, 1LL);
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      v14 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ReadTransferCount, 0LL, 0LL, v13);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.ReadTransferCount, 0LL);
      v18 = v14;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&ExpSysDbgLock.ReadTransferCount,
          v14,
          (__int64)&ExpSysDbgLock.ReadTransferCount);
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v15);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
      QueuedScb = ExpSysDbgLock.QueuedScb;
      v19 = ExpSysDbgLock.TracingPrivate[0];
      ExpSysDbgLock.WriteTransferCount = (__int64)KeGetCurrentThread();
      ExpSysDbgLock.QueuedScb = 0LL;
      v20 = *(_DWORD *)(a1 + 1660);
      if ( (v20 & 8) != 0 )
      {
        KeStopProfile(ExpSysDbgLock.TracingPrivate[0] + 16);
        *(_DWORD *)(a1 + 1660) &= ~8u;
        v20 = *(_DWORD *)(a1 + 1660);
      }
      if ( (v20 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1660) &= ~2u;
        v20 = *(_DWORD *)(a1 + 1660);
      }
      if ( (v20 & 4) != 0 )
      {
        v21 = EtwpHostSiloState;
        *(_DWORD *)(EtwpHostSiloState + 4848) &= 0xFFFFFDFB;
        *(_DWORD *)(v21 + 4844) &= 0xFFFFEFFB;
        EtwpUpdateGlobalGroupMasks(v21, 0, 9u);
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
          Flink[1].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
          EtwpCovSampProcessCleanup((PVOID **)Flink, 1);
          Flink[1].Flink = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Flink->Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&Flink->Blink);
          KeAbPostRelease((unsigned __int64)&Flink->Blink);
          KeLeaveCriticalRegion();
        }
      }
      EtwpCovSampCaptureContextStop(v19);
      *(_DWORD *)(a1 + 1660) &= ~1u;
    }
  }
  if ( (struct _KTHREAD *)ExpSysDbgLock.WriteTransferCount == KeGetCurrentThread() )
  {
    ExpSysDbgLock.WriteTransferCount = 0LL;
    if ( (_InterlockedExchangeAdd64(&ExpSysDbgLock.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpSysDbgLock.ReadTransferCount);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ReadTransferCount);
    KeLeaveCriticalRegion();
  }
  if ( QueuedScb )
    ObfDereferenceObject(QueuedScb);
  v30 = qword_140E09098;
  qword_140E09098 = 0LL;
  dword_140E09078 = 0;
  return EtwUnregister(v30);
}
