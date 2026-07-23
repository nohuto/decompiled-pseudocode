/*
 * XREFs of ExpGetNextProcessThread @ 0x1409DD7B0
 * Callers:
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall ExpGetNextProcessThread(char *a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v7; // rdi
  int v8; // r12d
  _QWORD **v9; // r14
  signed __int64 *v10; // r15
  void *v11; // rdx
  LegacyAutoBoost *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  signed __int32 v18[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( a1 == PsIdleProcess )
  {
    v15 = a1 + 48;
    if ( a2 )
      v16 = (_QWORD *)a2[95];
    else
      v16 = (_QWORD *)*v15;
    if ( v16 == v15 )
    {
      return 0LL;
    }
    else
    {
      v17 = v16 - 95;
      if ( KeDynamicPartitioningSupported )
      {
        _InterlockedOr(v18, 0);
        if ( (KiSupervisorXStateFeaturesLock.SchedulerApcFill3[56] & 1) == 0 )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[56]);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[56]);
        }
      }
      return v17;
    }
  }
  else
  {
    v5 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v7 = 0LL;
    v8 = 0;
    v9 = (_QWORD **)(a1 + 880);
    v10 = (signed __int64 *)(a1 + 456);
    --CurrentThread->KernelApcDisable;
    v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 456), 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10, 0, v12, (struct _KTHREAD *)v10);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    if ( a2 )
      v13 = (_QWORD *)a2[175];
    else
      v13 = *v9;
    while ( v13 != v9 )
    {
      v7 = v13 - 175;
      if ( ObReferenceObjectSafeWithTag((__int64)(v13 - 175), 0x6E457350u) )
      {
        v8 = 1;
        break;
      }
      v13 = (_QWORD *)*v13;
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((unsigned __int64)v10);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( a2 )
      ObfDereferenceObjectWithTag(a2, 0x6E457350u);
    if ( v8 )
      return v7;
    return (_QWORD *)v5;
  }
}
