/*
 * XREFs of ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140272190
 * Callers:
 *     ?KiAbCleanupLockEntriesState@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRIES@@PEAU_KTHREAD@@@Z @ 0x140203BC8 (-KiAbCleanupLockEntriesState@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRIES@@PEAU_KTHREAD@@@Z.c)
 *     KiAbProcessPreContextSwitch @ 0x14023DEB0 (KiAbProcessPreContextSwitch.c)
 *     ?KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z @ 0x1402711A4 (-KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z.c)
 *     ?KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z @ 0x140272090 (-KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceShared @ 0x1402729A0 (ExpReleaseFastResourceShared.c)
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
 *     PspUnlockProcessListShared @ 0x14027D690 (PspUnlockProcessListShared.c)
 *     ?KiAbpUmPostWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x14048D404 (-KiAbpUmPostWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     ?KiAbUserModeEntryFree@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x1404B6BEC (-KiAbUserModeEntryFree@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 * Callees:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1404342C4 (-KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
        LegacyAutoBoost *this,
        struct _KLOCK_ENTRY *a2,
        struct _KTHREAD *a3,
        void *a4,
        _QWORD *a5)
{
  int v5; // esi
  LegacyAutoBoost *v7; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  void *v11; // rbx
  char v12; // al
  struct _KPRCB *v13; // rcx
  unsigned __int32 *v14; // r8
  unsigned __int32 v15; // eax
  __int64 v16; // rdx
  unsigned __int32 v17; // ett
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // ett
  struct _SINGLE_LIST_ENTRY *v20; // [rsp+20h] [rbp-8h]

  v5 = (int)a4;
  v7 = (LegacyAutoBoost *)a2;
  if ( *(__int64 *)this < 0 )
  {
    *(_BYTE *)this |= 2u;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        a2 = (struct _KLOCK_ENTRY *)v18;
        LODWORD(a2) = v18 & 0xFFDFFFFF;
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2, SchedulerAssist, a4);
    }
    _enable();
    LegacyAutoBoost::KiAbEntryRemoveFromTree(this, a2);
    _disable();
  }
  v11 = (void *)*((unsigned int *)this + 20);
  *((_DWORD *)this + 20) = 0;
  *((_BYTE *)this + 9) = 0;
  *(_QWORD *)this = 0LL;
  if ( v5 )
  {
    v12 = *((_BYTE *)this + 8);
    *((_WORD *)this - 44 * (v12 & 0x3F) - 4) |= (unsigned __int8)(1 << (v12 & 0x3F));
  }
  v13 = KeGetCurrentPrcb();
  v14 = (unsigned __int32 *)v13->SchedulerAssist;
  if ( v14 )
  {
    _m_prefetchw(v14);
    v15 = *v14;
    do
    {
      v16 = v15;
      LODWORD(v16) = v15 & 0xFFDFFFFF;
      v17 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)v14, v15 & 0xFFDFFFFF, v15);
    }
    while ( v17 != v15 );
    if ( (v15 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v13, v16, v14, a4);
  }
  _enable();
  if ( a5 )
  {
    *a5 = v11;
  }
  else if ( (_DWORD)v11 )
  {
    LegacyAutoBoost::KiAbThreadRemoveBoostsSlow(v7, a3, v11, 0LL, v20);
  }
}
