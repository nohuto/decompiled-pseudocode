/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x1403E16F0
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1403E15C0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1403E1640 (ExInterlockedInsertTailList.c)
 *     ExInterlockedAddLargeInteger @ 0x1403E2CA0 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedAddUlong @ 0x1404FA7B0 (ExInterlockedAddUlong.c)
 *     ExInterlockedPopEntryList @ 0x1406D49D0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1406D4A20 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  unsigned int v1; // ebx
  bool v3; // si
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // ett

  v1 = 0;
  v3 = KeDisableInterrupts();
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    if ( v3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v8 = *SchedulerAssist;
        do
        {
          v9 = v8;
          LODWORD(v9) = v8 & 0xFFDFFFFF;
          v10 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v8 & 0xFFDFFFFF, v8);
        }
        while ( v10 != v8 );
        if ( (v8 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, v4);
      }
      _enable();
    }
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return v3;
}
