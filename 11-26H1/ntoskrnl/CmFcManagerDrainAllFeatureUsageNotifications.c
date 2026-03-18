/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x140860B28
 * Callers:
 *     CmFcShutdownSystem @ 0x140854C94 (CmFcShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140ABFB10 (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcManagerDrainAllFeatureUsageNotifications(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.AbCompletedIoQoSBoostCount, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&CmpFreezeListLock.AbCompletedIoQoSBoostCount, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.AbCompletedIoQoSBoostCount,
      v5,
      (__int64)&CmpFreezeListLock.AbCompletedIoQoSBoostCount);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  LOBYTE(v6) = 1;
  CmFcpManagerDrainUsageNotifications(&CmpFreezeListLock.WaitBlockFill11[144], v6);
  LOBYTE(v9) = 1;
  CmFcpManagerDrainUsageNotifications(&CmpFreezeListLock.WaitBlockFill11[144], v9);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&CmpFreezeListLock.AbCompletedIoQoSBoostCount,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.AbCompletedIoQoSBoostCount);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.AbCompletedIoQoSBoostCount);
  KeLeaveCriticalRegion();
}
