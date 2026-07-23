/*
 * XREFs of WheapProcessWorkQueueItem @ 0x1403E2D50
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x1403E2E20 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1403E2E58 (WheapGenerateETWEvents.c)
 *     WheapPredictiveFailureAnalysis @ 0x140ACA4C8 (WheapPredictiveFailureAnalysis.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140C061E0 (WheapCreateLiveDumpFromPreviousSession.c)
 */

LONG __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rax
  __int64 v5; // rax
  unsigned int v6; // eax
  int v7; // ecx

  if ( WheapPreviousSessionFailure )
  {
    if ( (*(_BYTE *)(a2 + 144) & 2) != 0 && *(_DWORD *)(a2 + 52) <= 1u )
    {
      v5 = *(_QWORD *)(a2 + 32);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 40);
        if ( !v6 || v6 <= 9 && (v7 = 664, _bittest(&v7, v6)) )
          WheapCreateLiveDumpFromPreviousSession(a2);
      }
    }
  }
  if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[48] && *(char *)(a2 + 144) >= 0 )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    return WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&CmpContextListLock.SchedulerApcFill5[24], Executive, 0, 0, 0LL);
    Flink = CmpContextListLock.SchedulerApc.ApcListEntry.Flink;
    if ( CmpContextListLock.SchedulerApc.ApcListEntry.Flink->Flink != (struct _LIST_ENTRY *)&CmpContextListLock.SchedulerApcFill5[8] )
      __fastfail(3u);
    *(_QWORD *)a2 = &CmpContextListLock.SchedulerApc.Thread;
    *(_QWORD *)(a2 + 8) = Flink;
    Flink->Flink = (struct _LIST_ENTRY *)a2;
    CmpContextListLock.SchedulerApc.ApcListEntry.Flink = (struct _LIST_ENTRY *)a2;
    return KeSetEvent((PRKEVENT)&CmpContextListLock.SchedulerApcFill5[24], 0, 0);
  }
}
