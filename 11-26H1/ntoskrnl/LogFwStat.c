/*
 * XREFs of LogFwStat @ 0x140C5A040
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressAnimationManual @ 0x140C57650 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1404F1AFC (BgpFwQueryPerformanceCounter.c)
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
  *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary = result;
  if ( a1 )
  {
    qword_140E65190[v4] = result.QuadPart;
    return result;
  }
  v6.QuadPart = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65190[v4];
  WheapPfaLock.OtherTransferCount = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    if ( v6.QuadPart < qword_140E0F248 )
      qword_140E0F248 = v6.QuadPart;
    if ( v6.QuadPart > *(__int64 *)&WheapPfaLock.PriorityFloorCounts[8] )
      *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorCounts[8] = v6;
LABEL_8:
    *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] += v6.QuadPart;
    ++HIDWORD(WheapPfaLock.ReadOperationCount);
    goto LABEL_9;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( v6.QuadPart < qword_140E0F248 )
      qword_140E0F248 = v6.QuadPart;
    if ( v6.QuadPart > *(__int64 *)&WheapPfaLock.PriorityFloorCounts[8] )
      *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorCounts[8] = v6;
    WheapPfaLock.OtherOperationCount += v6.QuadPart;
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      WheapPfaLock.ReadTransferCount += v6.QuadPart;
      return *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      WheapPfaLock.WriteTransferCount += v6.QuadPart;
      return *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary;
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
            qword_140E651F8 += v6.QuadPart;
        }
        else
        {
          WheapPfaLock.SchedulerSharedSystemSlot = (void *)v6.QuadPart;
        }
      }
      else
      {
        if ( v6.QuadPart < qword_140E0F258 )
          qword_140E0F258 = v6.QuadPart;
        if ( v6.QuadPart > (__int64)WheapPfaLock.PropagateBoostsEntry.Next )
          WheapPfaLock.PropagateBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)v6.QuadPart;
        *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] += v6.QuadPart;
        *(_QWORD *)&WheapPfaLock.AbCompletedIoQoSBoostCount += v6.QuadPart;
        ++LODWORD(WheapPfaLock.IoSelfBoostsEntry.Next);
      }
      return *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary;
    }
    *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] += v6.QuadPart;
    WheapPfaLock.GlobalForegroundListEntry.Blink = (struct _LIST_ENTRY *)v6.QuadPart;
  }
  else
  {
    *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] += v6.QuadPart;
    *(LARGE_INTEGER *)&WheapPfaLock.ThreadTimerDelay = v6;
  }
LABEL_9:
  *(_QWORD *)&WheapPfaLock.AbCompletedIoQoSBoostCount += v6.QuadPart;
  return *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary;
}
