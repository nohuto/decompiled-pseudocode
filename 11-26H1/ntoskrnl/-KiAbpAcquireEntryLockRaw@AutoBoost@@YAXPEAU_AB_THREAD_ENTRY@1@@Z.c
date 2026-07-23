/*
 * XREFs of ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0
 * Callers:
 *     ?KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140224810 (-KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x14026F9E8 (-KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     ExpReleaseFastResourceExclusive @ 0x14026FD50 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140384934 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 *     ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x1404674E0 (-KiAbpPreWait@AutoBoost@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoBoost::KiAbpAcquireEntryLockRaw(AutoBoost *this, struct AutoBoost::_AB_THREAD_ENTRY *a2)
{
  signed __int8 v2; // al
  signed __int8 v3; // tt
  signed __int8 v4; // al
  signed __int8 v5; // tt

  _m_prefetchw((char *)this + 35);
  v2 = *((_BYTE *)this + 35);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 35, v2 | 1, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 1) != 0 )
  {
    do
    {
      while ( (*((_BYTE *)this + 35) & 1) != 0 )
        _mm_pause();
      _m_prefetchw((char *)this + 35);
      v4 = *((_BYTE *)this + 35);
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 35, v4 | 1, v4);
      }
      while ( v5 != v4 );
    }
    while ( (v4 & 1) != 0 );
  }
}
