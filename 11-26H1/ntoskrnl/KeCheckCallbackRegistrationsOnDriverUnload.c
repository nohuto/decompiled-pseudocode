/*
 * XREFs of KeCheckCallbackRegistrationsOnDriverUnload @ 0x140AC9820
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KeCheckCallbackRegistrationsOnDriverUnload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v7; // rdx
  LegacyAutoBoost *v8; // rbx
  signed __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax

  v4 = *(_QWORD *)(a1 + 48);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.320, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.320, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&KiSupervisorXStateFeaturesLock.320,
      0,
      v8,
      (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.320);
  v9 = 0LL;
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v10 = *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16];
  if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[24] & 1) != 0 )
  {
    if ( *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16] )
      v10 = (unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16] ^ *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16];
    else
      v10 = v9;
  }
  v11 = v9;
  while ( v10 )
  {
    if ( v4 >= *(_QWORD *)(v10 + 24) )
    {
      if ( v4 <= *(_QWORD *)(v10 + 24) )
        goto LABEL_22;
      v12 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v12 = *(_QWORD *)v10;
      v11 = v10;
    }
    if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[24] & 1) != 0 && v12 )
      v10 ^= v12;
    else
      v10 = v12;
  }
  v10 = v11;
  if ( !v11 )
    goto LABEL_24;
LABEL_22:
  if ( *(_QWORD *)(v10 + 24) < v4 + *(unsigned int *)(a1 + 64) )
    KeBugCheckEx(0x121u, 3uLL, *(unsigned int *)(v10 + 32), a1 + 72, *(_QWORD *)(v10 + 24));
LABEL_24:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.320, v9, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&KiSupervisorXStateFeaturesLock.320);
  KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.320);
  KeLeaveGuardedRegion();
}
