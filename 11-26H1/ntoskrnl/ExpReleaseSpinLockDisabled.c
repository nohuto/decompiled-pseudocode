/*
 * XREFs of ExpReleaseSpinLockDisabled @ 0x1403E2CF8
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1403E15C0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedAddLargeInteger @ 0x1403E2CA0 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedAddUlong @ 0x1404FA7B0 (ExInterlockedAddUlong.c)
 *     ExInterlockedPopEntryList @ 0x1406D49D0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1406D4A20 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpReleaseSpinLockDisabled(volatile signed __int64 *a1, char a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v6; // eax
  __int64 v7; // rdx
  unsigned __int32 v8; // ett

  _InterlockedAnd64(a1, 0LL);
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v6 = *SchedulerAssist;
      do
      {
        v7 = v6;
        LODWORD(v7) = v6 & 0xFFDFFFFF;
        v8 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v6 & 0xFFDFFFFF, v6);
      }
      while ( v8 != v6 );
      if ( (v6 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7, SchedulerAssist, a4);
    }
    _enable();
  }
}
