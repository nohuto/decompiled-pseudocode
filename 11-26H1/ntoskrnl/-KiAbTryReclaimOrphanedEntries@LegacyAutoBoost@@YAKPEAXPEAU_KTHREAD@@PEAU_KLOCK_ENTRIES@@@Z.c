/*
 * XREFs of ?KiAbTryReclaimOrphanedEntries@LegacyAutoBoost@@YAKPEAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRIES@@@Z @ 0x1404292F8
 * Callers:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 * Callees:
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14026F91C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall LegacyAutoBoost::KiAbTryReclaimOrphanedEntries(
        LegacyAutoBoost *this,
        volatile signed __int32 *a2,
        struct _KTHREAD *a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int16 v9; // r9
  unsigned __int32 v10; // eax
  __int64 v11; // rdx
  unsigned __int32 v12; // ett

  if ( WORD1(a3->Header.WaitListHead.Flink) )
  {
    v9 = WORD1(a3->Header.WaitListHead.Flink);
    WORD1(a3->Header.WaitListHead.Flink) = 0;
    return (unsigned int)v9;
  }
  else
  {
    if ( (a2[30] & 0x10000) == 0 )
      _interlockedbittestandset(a2 + 30, 0x10u);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        LODWORD(v11) = v10 & 0xFFDFFFFF;
        v12 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v12 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v11, SchedulerAssist, 0LL);
    }
    _enable();
    if ( (WORD2(xmmword_140FC0C10) & 0x1000) != 0 )
      EtwTraceAutoBoostEntryExhaustion((__int64)a2, (__int64)this);
    return 0LL;
  }
}
