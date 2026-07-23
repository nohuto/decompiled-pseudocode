/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x140457310
 * Callers:
 *     PopFxProcessWorkPool @ 0x140397FE8 (PopFxProcessWorkPool.c)
 *     WheapWorkQueueWorkerRoutine @ 0x1404572C0 (WheapWorkQueueWorkerRoutine.c)
 *     KiAltReturnWorkerRoutine @ 0x1405FF770 (KiAltReturnWorkerRoutine.c)
 *     WmipEventNotification @ 0x140A0CB60 (WmipEventNotification.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  _LIST_ENTRY *v2; // rsi
  unsigned int v4; // ebp
  __int64 v6; // r9
  bool v7; // r14
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v9; // rcx
  struct _KPRCB *v11; // rcx
  unsigned __int32 *v12; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v15; // eax
  __int64 v16; // rdx
  unsigned __int32 v17; // ett
  unsigned __int32 v18; // eax
  __int64 v19; // rdx
  unsigned __int32 v20; // ett

  v2 = 0LL;
  v4 = 0;
  v7 = KeDisableInterrupts();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( v7 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v18 = *SchedulerAssist;
        do
        {
          v19 = v18;
          LODWORD(v19) = v18 & 0xFFDFFFFF;
          v20 = v18;
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
        }
        while ( v20 != v18 );
        if ( (v18 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v19, SchedulerAssist, v6);
      }
      _enable();
    }
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *Lock );
    _disable();
  }
  Flink = ListHead->Flink;
  if ( ListHead->Flink != ListHead )
  {
    v2 = ListHead->Flink;
    v9 = Flink->Flink;
    if ( Flink->Blink != ListHead || v9->Blink != Flink )
      __fastfail(3u);
    ListHead->Flink = v9;
    v9->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v7 )
  {
    v11 = KeGetCurrentPrcb();
    v12 = (unsigned __int32 *)v11->SchedulerAssist;
    if ( v12 )
    {
      _m_prefetchw(v12);
      v15 = *v12;
      do
      {
        v16 = v15;
        LODWORD(v16) = v15 & 0xFFDFFFFF;
        v17 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v15 & 0xFFDFFFFF, v15);
      }
      while ( v17 != v15 );
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v11, v16, v12, v6);
    }
    _enable();
  }
  return v2;
}
