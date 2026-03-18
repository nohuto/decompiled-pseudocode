/*
 * XREFs of ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027C800
 * Callers:
 *     ?KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x1402038E4 (-KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140203AF0 (-KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140222E80 (-KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     KiAbProcessPostContextSwitch @ 0x14023BA80 (KiAbProcessPostContextSwitch.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     KiAbProcessPreContextSwitch @ 0x14023DEB0 (KiAbProcessPreContextSwitch.c)
 *     ?KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140270478 (-KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     ExpReleaseFastResourceExclusive @ 0x1402707E0 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270AF0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     PspUnlockProcessThreadListShared @ 0x140271AF0 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x140271DC0 (PspUnlockThreadSecurityShared.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceShared @ 0x1402729A0 (ExpReleaseFastResourceShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140279320 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x1402796C0 (ExReleasePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleasePushLockSharedEx @ 0x14027A2B0 (ExReleasePushLockSharedEx.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14027A640 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleasePushLockEx @ 0x14027AF50 (ExReleasePushLockEx.c)
 *     ExReleaseFastResource @ 0x14027B310 (ExReleaseFastResource.c)
 *     ObpReleaseLookupContext @ 0x14027BE10 (ObpReleaseLookupContext.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027CBB0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     PspUnlockProcessShared @ 0x14027CFB0 (PspUnlockProcessShared.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027D330 (RtlpHpReleaseQueuedLockExclusive.c)
 *     PspUnlockProcessListShared @ 0x14027D690 (PspUnlockProcessListShared.c)
 *     ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x14046DD60 (-KiAbpPreWait@AutoBoost@@YAXPEAX@Z.c)
 *     ?KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x1404F79AC (-KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FDDA8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037B020 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall AutoBoost::KiAbpUnboostThread(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned int v6; // ebx

  if ( a3 )
  {
    if ( (a3 & 0x40000000) != 0 )
    {
      _InterlockedDecrement(a1 + 215);
      PsBoostThreadIo((LegacyAutoBoost *)a1);
    }
    if ( a3 < 0 )
    {
      _InterlockedDecrement(a1 + 216);
      _InterlockedDecrement(a1 + 377);
    }
    v6 = a3 & 0x3FFFFFFF;
    if ( v6 )
      AutoBoost::KiAbpThreadUnboostCpuPriority((ULONG_PTR)a1, (struct _KTHREAD *)v6, 0, a4);
  }
}
