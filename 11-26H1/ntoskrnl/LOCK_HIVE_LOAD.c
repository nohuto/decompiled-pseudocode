/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1408BABC0
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 *     CmpLazyCommitWorker @ 0x140861FB0 (CmpLazyCommitWorker.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1408B8230 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x14093D270 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall LOCK_HIVE_LOAD(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock.ApcStateFill[8], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpContextListLock.ApcState.ApcListHead[0].Blink,
      v5,
      (__int64)&CmpContextListLock.ApcState.ApcListHead[0].Blink);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  ExpPlatformBinaryLock.WaitBlock[0].Object = CurrentThread;
}
