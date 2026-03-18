/*
 * XREFs of KiSetClockInterval @ 0x140418834
 * Callers:
 *     KeSetClockInterval @ 0x14041880C (KeSetClockInterval.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140379C60 (KiSetClockTimerKTimerDeadlines.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140418DA0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140419438 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rax
  __int64 InterruptTimePrecise; // rbx
  unsigned int ClockTickDueTime; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ebx
  unsigned __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((__int64)&KiClockIntervalRequests, a3);
  *(_DWORD *)(a3 + 28) = a1;
  if ( (qword_140E66748 & 1) != 0 )
  {
    if ( KiClockIntervalRequests )
      v6 = KiClockIntervalRequests ^ (unsigned __int64)&KiClockIntervalRequests;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = KiClockIntervalRequests;
  }
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(v6 + 28) )
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (qword_140E66748 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_14;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_14:
          v7 = 1;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)v6;
        if ( (qword_140E66748 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v6;
        }
        if ( !v8 )
          break;
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)&KiClockIntervalRequests, v6, v7, a3);
  *(_BYTE *)(a3 + 24) = 1;
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v15);
    else
      InterruptTimePrecise = 0LL;
    KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), InterruptTimePrecise, 0);
    ClockTickDueTime = KiSetNextClockTickDueTime(InterruptTimePrecise, 1);
  }
  else
  {
    ClockTickDueTime = KiSetClockIntervalToMinimumRequested();
  }
  v12 = *(unsigned int *)(a3 + 32);
  v13 = ClockTickDueTime;
  if ( (_DWORD)v12 )
  {
    LOBYTE(v11) = 1;
    PoTraceSystemTimerResolutionKernel(a1, v12, v11);
  }
  return v13;
}
