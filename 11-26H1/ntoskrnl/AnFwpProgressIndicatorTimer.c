/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x140C5A340
 * Callers:
 *     <none>
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F1AFC (BgpFwQueryPerformanceCounter.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  __int16 v7; // r10
  __int16 v8; // ax
  __int16 v9; // ax
  __int64 v10; // rax
  LARGE_INTEGER v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v11[0].QuadPart = 0LL;
  BgpFwAcquireLock();
  if ( WheapPfaLock.SchedulerApc.ApcStateIndex )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v11);
    v5 = word_140E0EFF0;
    v6 = PerformanceCounter;
    v7 = word_140E0EFF4;
    if ( word_140E0EFF0 != word_140E0EFF4
      && (*(_QWORD *)&WheapPfaLock.SuspendEvent.Header.Lock
        + 10 * (v11[0].QuadPart / 33) / 100
        - PerformanceCounter.QuadPart)
       / (v11[0].QuadPart
        / 33) >= 2 )
    {
      v5 = ++word_140E0EFF0;
    }
    v8 = word_140E0EFF8;
    if ( v5 >= (unsigned __int16)word_140E0EFF8 )
    {
      if ( v5 > (unsigned __int16)word_140E0EFF4 )
        goto LABEL_5;
      *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary = BgpFwQueryPerformanceCounter(v11);
      qword_140E65190[0] = *(_QWORD *)&WheapPfaLock.PriorityFloorSummary;
      BgpTxtDisplayCharacter(gLoadedDiffHivesLock.NpxState, (unsigned __int16)word_140E0EFF0, 0, 0LL, 0LL);
      *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorSummary = BgpFwQueryPerformanceCounter(v11);
      v10 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65190[0];
      WheapPfaLock.OtherTransferCount = v10;
      if ( v10 < qword_140E0F248 )
        qword_140E0F248 = v10;
      if ( v10 > *(__int64 *)&WheapPfaLock.PriorityFloorCounts[8] )
        *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[8] = v10;
      *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] += v10;
      ++HIDWORD(WheapPfaLock.ReadOperationCount);
      *(_QWORD *)&WheapPfaLock.AbCompletedIoQoSBoostCount += v10;
      v8 = word_140E0EFF8;
      v5 = word_140E0EFF0;
      v7 = word_140E0EFF4;
    }
    if ( v5 == v7 )
    {
      v9 = v8 - word_140E0EFEC;
      goto LABEL_6;
    }
LABEL_5:
    v9 = v5 + 1;
LABEL_6:
    word_140E0EFF0 = v9;
    *(LARGE_INTEGER *)&WheapPfaLock.SuspendEvent.Header.Lock = v6;
  }
  BgpFwReleaseLock();
}
