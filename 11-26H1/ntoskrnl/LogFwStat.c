/*
 * XREFs of LogFwStat @ 0x140C54040
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressAnimationManual @ 0x140C51650 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1404F84EC (BgpFwQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall LogFwStat(int a1, int a2, LARGE_INTEGER *a3)
{
  __int64 v4; // rdi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rax
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi

  v4 = a2;
  result = BgpFwQueryPerformanceCounter(a3);
  WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)result.QuadPart;
  if ( a1 )
  {
    qword_140E64F90[v4] = result.QuadPart;
    return result;
  }
  v6.QuadPart = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64F90[v4];
  *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorCounts[24] = v6;
  if ( !(_DWORD)v4 )
  {
    if ( v6.QuadPart < qword_140E0F1C8 )
      qword_140E0F1C8 = v6.QuadPart;
    if ( v6.QuadPart > (__int64)WheapPfaLock.SchedulerApc.NormalContext )
      WheapPfaLock.SchedulerApc.NormalContext = (PVOID)v6.QuadPart;
LABEL_8:
    WheapPfaLock.MutantListHead.Blink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.MutantListHead.Blink + v6.QuadPart);
    ++LODWORD(WheapPfaLock.PropagateBoostsEntry.Next);
    goto LABEL_9;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( v6.QuadPart < qword_140E0F1C8 )
      qword_140E0F1C8 = v6.QuadPart;
    if ( v6.QuadPart > (__int64)WheapPfaLock.SchedulerApc.NormalContext )
      WheapPfaLock.SchedulerApc.NormalContext = (PVOID)v6.QuadPart;
    WheapPfaLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.SuspendEvent.Header.WaitListHead.Flink
                                                                               + v6.QuadPart);
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] += v6.QuadPart;
      return (LARGE_INTEGER)WheapPfaLock.ThreadListEntry.Blink;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      *(_QWORD *)&WheapPfaLock.PriorityFloorSummary += v6.QuadPart;
      return (LARGE_INTEGER)WheapPfaLock.ThreadListEntry.Blink;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            qword_140E64F88 += v6.QuadPart;
        }
        else
        {
          WheapPfaLock.SchedulerApc.SystemArgument1 = (PVOID)v6.QuadPart;
        }
      }
      else
      {
        if ( v6.QuadPart < qword_140E0F1D8 )
          qword_140E0F1D8 = v6.QuadPart;
        if ( v6.QuadPart > *(__int64 *)&WheapPfaLock.SchedulerApcFill5[80] )
          *(LARGE_INTEGER *)&WheapPfaLock.SchedulerApcFill5[80] = v6;
        WheapPfaLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.SuspendEvent.Header.WaitListHead.Blink
                                                                                   + v6.QuadPart);
        WheapPfaLock.MutantListHead.Flink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.MutantListHead.Flink
                                                                 + v6.QuadPart);
        ++WheapPfaLock.SuspendEvent.Header.LockNV;
      }
      return (LARGE_INTEGER)WheapPfaLock.ThreadListEntry.Blink;
    }
    WheapPfaLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.SuspendEvent.Header.WaitListHead.Blink
                                                                               + v6.QuadPart);
    *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorCounts[8] = v6;
  }
  else
  {
    WheapPfaLock.MutantListHead.Blink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.MutantListHead.Blink + v6.QuadPart);
    *(LARGE_INTEGER *)&WheapPfaLock.AbWaitEntryCount = v6;
  }
LABEL_9:
  WheapPfaLock.MutantListHead.Flink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.MutantListHead.Flink + v6.QuadPart);
  return (LARGE_INTEGER)WheapPfaLock.ThreadListEntry.Blink;
}
