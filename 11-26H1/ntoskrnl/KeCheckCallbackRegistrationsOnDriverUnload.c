/*
 * XREFs of KeCheckCallbackRegistrationsOnDriverUnload @ 0x140AC7C30
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
  unsigned __int64 Flink; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax

  v4 = *(_QWORD *)(a1 + 48);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object,
      0,
      v8,
      (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[32]);
  }
  v9 = 0LL;
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  Flink = (unsigned __int64)KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink;
  if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[56] & 1) != 0 )
  {
    if ( KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink )
      Flink = (unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1] ^ (unsigned __int64)KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink;
    else
      Flink = v9;
  }
  v11 = v9;
  while ( Flink )
  {
    if ( v4 >= *(_QWORD *)(Flink + 24) )
    {
      if ( v4 <= *(_QWORD *)(Flink + 24) )
        goto LABEL_22;
      v12 = *(_QWORD *)(Flink + 8);
    }
    else
    {
      v12 = *(_QWORD *)Flink;
      v11 = Flink;
    }
    if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[56] & 1) != 0 && v12 )
      Flink ^= v12;
    else
      Flink = v12;
  }
  Flink = v11;
  if ( !v11 )
    goto LABEL_24;
LABEL_22:
  if ( *(_QWORD *)(Flink + 24) < v4 + *(unsigned int *)(a1 + 64) )
    KeBugCheckEx(0x121u, 3uLL, *(unsigned int *)(Flink + 32), a1 + 72, *(_QWORD *)(Flink + 24));
LABEL_24:
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object,
         v9,
         17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object);
  KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object);
  KeLeaveGuardedRegion();
}
