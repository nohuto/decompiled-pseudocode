/*
 * XREFs of TpSetTimerEx @ 0x180089470
 * Callers:
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhContextCompact @ 0x180061B2C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180063338 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpGCTimerSchedule @ 0x180063B84 (RtlpHpGCTimerSchedule.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180063F20 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180064078 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlCreateTimer @ 0x180087900 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180087CA0 (RtlDeleteTimer.c)
 *     TpSetTimer @ 0x180089460 (TpSetTimer.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18008ADB0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsCommitLimitCheck @ 0x18008D2A0 (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlUpdateTimer @ 0x1800F7F10 (RtlUpdateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x180138C88 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppETWTimerCancelled @ 0x180088220 (TppETWTimerCancelled.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TppPHExtractMin @ 0x180088E30 (TppPHExtractMin.c)
 *     TppUpdateSubQueueTimer @ 0x180088FF0 (TppUpdateSubQueueTimer.c)
 *     TppSetTimer @ 0x180089890 (TppSetTimer.c)
 *     TpIsTimerSet @ 0x180089C30 (TpIsTimerSet.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  ULONG v5; // r13d
  volatile int Flags; // eax
  bool v9; // si
  _RTL_SRWLOCK *p_Lock; // rdi
  _QWORD *SchedulerSharedDataSlot; // rdx
  _TPP_TIMER_QUEUE *p_TimerQueue; // r15
  __int64 i; // rcx
  unsigned __int8 TimerStatus; // al
  char v15; // r14
  unsigned __int8 v16; // r14
  __int64 v18; // r13
  __int64 v19; // r13
  __int64 v20; // rcx
  _TP_TIMER *v21; // rcx
  $B66CDCF7739C8D5AF642D63CDE80D975 *v22; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_Children; // rcx
  _LIST_ENTRY *v26; // r8
  _LIST_ENTRY *v27; // r9
  _TP_TIMER *v28; // rax
  __int64 *v29; // rcx
  _TPP_PH_LINKS *p_WindowStartLinks; // r11
  _LIST_ENTRY *v31; // rax
  _LIST_ENTRY *v32; // rdx
  _LIST_ENTRY *v33; // rax
  _LIST_ENTRY *v34; // rdx
  _LIST_ENTRY *v35; // r8
  _TPP_ITE_WAITER *First; // rax
  _TPP_ITE_WAITER *v37; // rdx
  _QWORD v38[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = Period;
  if ( Timer )
  {
    if ( !Timer->WaitTimer )
    {
      Flags = Timer->Work.CleanupGroupMember.Flags;
      if ( (Flags & 0x10000) == 0
        && (Flags & 0x20000) == 0
        && (__int64 (__fastcall **)(PVOID))Timer->Work.CleanupGroupMember.VFuncs == &TppTimerpCleanupGroupMemberVFuncs
        && !NtCurrentPeb()->Ldr->ShutdownInProgress )
      {
        v9 = DueTime != 0LL;
        p_Lock = &Timer->Lock;
        SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
        p_TimerQueue = &Timer->Work.CleanupGroupMember.Pool->TimerQueue;
        if ( SchedulerSharedDataSlot )
        {
          for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
          {
            if ( !SchedulerSharedDataSlot[i] )
            {
              SchedulerSharedDataSlot[i] = p_Lock;
              break;
            }
          }
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)p_Lock, 0LL) )
          RtlpAcquireSRWLockExclusiveContended(
            (volatile signed __int64 *)&Timer->Lock,
            (unsigned __int64)SchedulerSharedDataSlot);
        TimerStatus = Timer->TimerStatus;
        v15 = (TimerStatus & 2) != 0;
        if ( (TimerStatus & 1) == 0 )
        {
          Timer->DueTime = 0LL;
          if ( !DueTime )
            RtlReleaseSRWLockExclusive(&Timer->Lock);
          v16 = 0;
LABEL_16:
          if ( DueTime && Timer->BlockInsert )
          {
            RtlReleaseSRWLockExclusive(&Timer->Lock);
            v9 = 0;
          }
          if ( v16 )
          {
            if ( !v9 )
            {
              if ( _InterlockedExchangeAdd(&Timer->Work.CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
                Timer->Work.CleanupGroupMember.VFuncs->Free(&Timer->Work.CleanupGroupMember);
              return v16;
            }
          }
          else
          {
            if ( !v9 )
              return v16;
            if ( TpIsTimerSet(Timer) )
            {
LABEL_23:
              RtlReleaseSRWLockExclusive(&Timer->Lock);
              return v16;
            }
            _InterlockedIncrement(&Timer->Work.CleanupGroupMember.Refcount.Refcount);
          }
          TppSetTimer(Timer, p_TimerQueue, DueTime, v5, WindowLength);
          goto LABEL_23;
        }
        v18 = 8LL;
        if ( (TimerStatus & 2) == 0 )
          v18 = 128LL;
        v19 = (__int64)p_TimerQueue + v18;
        if ( RtlGetCurrentServiceSessionId() )
          v20 = (__int64)NtCurrentPeb()->SharedData + 556;
        else
          v20 = 2147353478LL;
        if ( *(_BYTE *)v20 )
          TppETWTimerCancelled(v19, (__int64)Timer);
        RtlAcquireSRWLockExclusive(&p_TimerQueue->Lock);
        if ( Timer->Inserted )
        {
          v21 = *(_TP_TIMER **)(v19 + 16);
          v22 = &Timer->248;
          if ( &Timer->248 != ($B66CDCF7739C8D5AF642D63CDE80D975 *)v21 )
          {
            Flink = v22->WindowEndLinks.Siblings.Flink;
            if ( ($B66CDCF7739C8D5AF642D63CDE80D975 *)v22->WindowEndLinks.Siblings.Flink->Blink != v22 )
              goto LABEL_45;
            Blink = Timer->WindowEndLinks.Siblings.Blink;
            if ( ($B66CDCF7739C8D5AF642D63CDE80D975 *)Blink->Flink != v22
              || (Blink->Flink = Flink,
                  Flink->Blink = Blink,
                  p_Children = &Timer->WindowEndLinks.Children,
                  Timer->WindowEndLinks.Siblings.Blink = &Timer->WindowEndLinks.Siblings,
                  v22->WindowEndLinks.Siblings.Flink = &v22->WindowEndLinks.Siblings,
                  v26 = Timer->WindowEndLinks.Children.Flink,
                  v27 = *(_LIST_ENTRY **)(v19 + 16),
                  v26->Blink != &Timer->ExpirationLinks + 1) )
            {
LABEL_45:
              __fastfail(3u);
            }
            v27->Blink = p_Children;
            v27->Flink = v26;
            v26->Blink = v27;
            p_Children->Flink = v27;
            v21 = (_TP_TIMER *)&Timer->248;
            *(_QWORD *)(v19 + 16) = v22;
          }
          v21->Work.CleanupGroupMember.FinalizationCallback = 0LL;
          TppPHExtractMin((__int64 *)(v19 + 16));
          v28 = *(_TP_TIMER **)(v19 + 8);
          v29 = (__int64 *)(v19 + 8);
          p_WindowStartLinks = &Timer->WindowStartLinks;
          if ( &Timer->WindowStartLinks != (_TPP_PH_LINKS *)v28 )
          {
            v31 = p_WindowStartLinks->Siblings.Flink;
            if ( (_TPP_PH_LINKS *)p_WindowStartLinks->Siblings.Flink->Blink != p_WindowStartLinks )
              goto LABEL_45;
            v32 = Timer->WindowStartLinks.Siblings.Blink;
            if ( (_TPP_PH_LINKS *)v32->Flink != p_WindowStartLinks )
              goto LABEL_45;
            v32->Flink = v31;
            v31->Blink = v32;
            v33 = &Timer->WindowStartLinks.Children;
            Timer->WindowStartLinks.Siblings.Blink = &Timer->WindowStartLinks.Siblings;
            p_WindowStartLinks->Siblings.Flink = &p_WindowStartLinks->Siblings;
            v34 = Timer->WindowStartLinks.Children.Flink;
            v35 = (_LIST_ENTRY *)*v29;
            if ( v34->Blink != &Timer->WindowStartLinks.Children )
              goto LABEL_45;
            v35->Blink = v33;
            v35->Flink = v34;
            v34->Blink = v35;
            v33->Flink = v35;
            v28 = (_TP_TIMER *)&Timer->WindowStartLinks;
            *v29 = (__int64)p_WindowStartLinks;
          }
          v28->Work.CleanupGroupMember.FinalizationCallback = 0LL;
          TppPHExtractMin(v29);
          TppUpdateSubQueueTimer(v19, v15);
          Timer->Inserted = 0;
          RtlReleaseSRWLockExclusive(&p_TimerQueue->Lock);
          Timer->Period = 0;
          Timer->DueTime = 0LL;
          Timer->TimerStatus = 0;
          if ( !DueTime )
            RtlReleaseSRWLockExclusive(&Timer->Lock);
          v16 = 1;
        }
        else
        {
          RtlReleaseSRWLockExclusive(&p_TimerQueue->Lock);
          Timer->TimerStatus |= 4u;
          v38[1] = NtCurrentTeb()->ClientId.UniqueThread;
          _m_prefetchw(&Timer->CancelIte);
          First = Timer->CancelIte.First;
          do
          {
            v37 = First;
            v38[0] = First;
            First = (_TPP_ITE_WAITER *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&Timer->CancelIte,
                                         (signed __int64)v38,
                                         (signed __int64)First);
          }
          while ( First != v37 );
          RtlReleaseSRWLockExclusive(&Timer->Lock);
          NtWaitForAlertByThreadId(&Timer->CancelIte, 0LL);
          if ( DueTime )
            RtlAcquireSRWLockExclusive(&Timer->Lock);
          v16 = 0;
        }
        v5 = Period;
        goto LABEL_16;
      }
    }
  }
  if ( DueTime || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0;
}
