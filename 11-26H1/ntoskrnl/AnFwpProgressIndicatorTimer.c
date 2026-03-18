/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x140C54340
 * Callers:
 *     <none>
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x1404AD084 (BgpTxtDisplayCharacter.c)
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F84EC (BgpFwQueryPerformanceCounter.c)
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
  if ( WheapPfaLock.SchedulerApc.SpareByte0 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v11);
    v5 = word_140E0F008;
    v6 = PerformanceCounter;
    v7 = word_140E0F010;
    if ( word_140E0F008 != word_140E0F010
      && (*(_QWORD *)&WheapPfaLock.SavedApcStateFill[40]
        + 10 * (v11[0].QuadPart / 33) / 100
        - PerformanceCounter.QuadPart)
       / (v11[0].QuadPart
        / 33) >= 2 )
    {
      v5 = ++word_140E0F008;
    }
    v8 = word_140E0F014;
    if ( v5 >= (unsigned __int16)word_140E0F014 )
    {
      if ( v5 > (unsigned __int16)word_140E0F010 )
        goto LABEL_5;
      WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)BgpFwQueryPerformanceCounter(v11).QuadPart;
      qword_140E64F90[0] = (__int64)WheapPfaLock.ThreadListEntry.Blink;
      BgpTxtDisplayCharacter(gLoadedDiffHivesLock.NpxState, (unsigned __int16)word_140E0F008, 0, 0LL, 0LL);
      WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)BgpFwQueryPerformanceCounter(v11).QuadPart;
      v10 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64F90[0];
      *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] = v10;
      if ( v10 < qword_140E0F1C8 )
        qword_140E0F1C8 = v10;
      if ( v10 > (__int64)WheapPfaLock.SchedulerApc.NormalContext )
        WheapPfaLock.SchedulerApc.NormalContext = (PVOID)v10;
      WheapPfaLock.MutantListHead.Blink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.MutantListHead.Blink + v10);
      ++LODWORD(WheapPfaLock.PropagateBoostsEntry.Next);
      WheapPfaLock.MutantListHead.Flink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.MutantListHead.Flink + v10);
      v8 = word_140E0F014;
      v5 = word_140E0F008;
      v7 = word_140E0F010;
    }
    if ( v5 == v7 )
    {
      v9 = v8 - word_140E0F00C;
      goto LABEL_6;
    }
LABEL_5:
    v9 = v5 + 1;
LABEL_6:
    word_140E0F008 = v9;
    *(LARGE_INTEGER *)&WheapPfaLock.SavedApcStateFill[40] = v6;
  }
  BgpFwReleaseLock();
}
