/*
 * XREFs of KiSetClockInterval @ 0x14040CD6C
 * Callers:
 *     KeSetClockInterval @ 0x14040CD44 (KeSetClockInterval.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14037BA10 (KiSetClockTimerKTimerDeadlines.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14040D2D0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  unsigned int ClockTickDueTime; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ebx
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)a3);
  *(_DWORD *)(a3 + 28) = a1;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Root )
      Root = (unsigned __int64)KiClockIntervalRequests.Root ^ (unsigned __int64)&KiClockIntervalRequests;
    else
      Root = 0LL;
  }
  else
  {
    Root = (unsigned __int64)KiClockIntervalRequests.Root;
  }
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(Root + 28) )
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_14;
          v8 ^= Root;
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
        v8 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= Root;
        }
        if ( !v8 )
          break;
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)a3);
  *(_BYTE *)(a3 + 24) = 1;
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    else
      InterruptTimePrecise.QuadPart = 0LL;
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
