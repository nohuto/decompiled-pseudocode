/*
 * XREFs of ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700
 * Callers:
 *     ?KiAbCleanupLockEntriesState@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRIES@@PEAU_KTHREAD@@@Z @ 0x140203CA8 (-KiAbCleanupLockEntriesState@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRIES@@PEAU_KTHREAD@@@Z.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z @ 0x140270714 (-KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z.c)
 *     ?KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z @ 0x140271600 (-KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
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
 *     PspUnlockProcessListShared @ 0x14027CC00 (PspUnlockProcessListShared.c)
 *     ?KiAbpUmPostWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140486F44 (-KiAbpUmPostWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     ?KiAbUserModeEntryFree@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x1404B003C (-KiAbUserModeEntryFree@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 * Callees:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429394 (-KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
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
