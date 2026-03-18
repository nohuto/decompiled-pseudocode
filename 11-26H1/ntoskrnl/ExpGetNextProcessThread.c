/*
 * XREFs of ExpGetNextProcessThread @ 0x140968C70
 * Callers:
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( a1 == PsIdleProcess )
  {
    v17 = a1 + 48;
    if ( a2 )
      v18 = (_QWORD *)a2[95];
    else
      v18 = (_QWORD *)*v17;
    if ( v18 == v17 )
    {
      return 0LL;
    }
    else
    {
      v19 = v18 - 95;
      if ( KeDynamicPartitioningSupported )
      {
        _InterlockedOr(v20, 0);
        if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill7[144] & 1) == 0 )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
        }
      }
      return v19;
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15);
    if ( a2 )
      ObfDereferenceObjectWithTag(a2, 0x6E457350u);
    if ( v8 )
      return v7;
    return (_QWORD *)v5;
  }
}
