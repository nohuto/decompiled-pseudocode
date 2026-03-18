/*
 * XREFs of ExInterlockedInsertTailList @ 0x1403DE450
 * Callers:
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     PopFxQueueWorkItem @ 0x140394940 (PopFxQueueWorkItem.c)
 *     IoWMIWriteEvent @ 0x1403DDC20 (IoWMIWriteEvent.c)
 *     WheapWorkQueueAddItem @ 0x1403DE370 (WheapWorkQueueAddItem.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FCC08 (KiAltContextWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x140796480 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1403DE500 (ExpAcquireSpinLockDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // r9
  struct _LIST_ENTRY *Blink; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v12; // eax
  __int64 v13; // rdx
  unsigned __int32 v14; // ett

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Blink = ListHead->Blink;
  if ( Blink->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  ListEntry->Blink = Blink;
  Blink->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        LODWORD(v13) = v12 & 0xFFDFFFFF;
        v14 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v14 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v13, SchedulerAssist, v7);
    }
    _enable();
  }
  if ( Blink == ListHead )
    return 0LL;
  return Blink;
}
