/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1408B45EC
 * Callers:
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 *     CmpLazyCommitWorker @ 0x14085BCC0 (CmpLazyCommitWorker.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1408B1C20 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x14097B260 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall LOCK_HIVE_LOAD(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpCallbackListLock.ApcStateFill[8], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpCallbackListLock.ApcState.ApcListHead[0].Blink,
      v5,
      (__int64)&CmpCallbackListLock.ApcState.ApcListHead[0].Blink);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  ExpPlatformBinaryLock.WaitBlock[0].Object = CurrentThread;
}
