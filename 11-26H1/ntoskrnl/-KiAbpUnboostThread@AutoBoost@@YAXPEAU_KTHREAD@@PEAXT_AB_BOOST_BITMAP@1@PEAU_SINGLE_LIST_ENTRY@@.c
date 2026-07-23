/*
 * XREFs of ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70
 * Callers:
 *     ?KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x1402039C4 (-KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140203BD0 (-KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140224810 (-KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x14026F9E8 (-KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     ExpReleaseFastResourceExclusive @ 0x14026FD50 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140278890 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x140278C30 (ExReleasePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleasePushLockSharedEx @ 0x140279820 (ExReleasePushLockSharedEx.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140279BB0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleasePushLockEx @ 0x14027A4C0 (ExReleasePushLockEx.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027C120 (ExReleaseAutoExpandPushLockExclusive.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     PspUnlockProcessListShared @ 0x14027CC00 (PspUnlockProcessListShared.c)
 *     ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x1404674E0 (-KiAbpPreWait@AutoBoost@@YAXPEAX@Z.c)
 *     ?KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x1404F0FBC (-KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037CDD0 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
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
