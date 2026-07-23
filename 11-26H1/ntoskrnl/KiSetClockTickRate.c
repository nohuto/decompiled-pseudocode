/*
 * XREFs of KiSetClockTickRate @ 0x14021F6C0
 * Callers:
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KiSetPendingTick @ 0x140476614 (KiSetPendingTick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiSetClockTickRate(LARGE_INTEGER InterruptTimePrecise, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  int v6; // r12d
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // rsi
  __int64 v9; // rcx
  int v10; // eax
  LARGE_INTEGER *v11; // rdi
  int v12; // eax
  ULONG v13; // edx
  LARGE_INTEGER *v14; // rdi
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  _BYTE v19[2]; // [rsp+48h] [rbp-50h] BYREF
  int v20; // [rsp+4Ah] [rbp-4Eh]
  __int16 v21; // [rsp+4Eh] [rbp-4Ah]
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]

  v3 = a2;
  v16 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = KiClockState;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  if ( a3 )
  {
    guard_dispatch_icall_no_overrides(1LL, a2, &v16);
    v10 = 1;
  }
  else
  {
    guard_dispatch_icall_no_overrides(0LL, a2, &v16);
    v10 = 0;
  }
  LOBYTE(v9) = 1;
  CurrentPrcb->ClockTimerState.OneShotState = v10;
  KiSetPendingTick(v9);
  if ( CurrentPrcb->ClockOwner )
  {
    KeTimeIncrement = v16;
    KiLastRequestedTimeIncrement = v3;
    if ( !KiClockTimerReducePreciseTimeQueries )
    {
      if ( KiClockTimerPerCpuTickScheduling )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      else
        InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
    }
    KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
    KiClockOwnerOneShotRequestState = a3 != 0;
    if ( v6 == 2 )
      LOBYTE(v6) = _InterlockedExchange(&KiClockState, 0);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v22 = v16;
      v20 = 0;
      PerformanceCounter.QuadPart = (LONGLONG)v19;
      v21 = 0;
      v19[0] = 0;
      v19[1] = v6;
      v23 = v3;
      v18 = 24LL;
      EtwTraceKernelEvent((unsigned int)&PerformanceCounter, 1, 1074790400, 3927, 1538);
    }
  }
  else if ( !KiClockTimerReducePreciseTimeQueries )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  CurrentPrcb->ClockTimerState.TimeIncrement = v16;
  CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = v3;
  if ( KeTimeIncrement < (unsigned int)dword_140F25FB4 )
    dword_140F25FB4 = KeTimeIncrement;
  if ( KeTimeIncrement > (unsigned int)dword_140F25FB0 )
    dword_140F25FB0 = KeTimeIncrement;
  if ( (unsigned int)v3 < dword_140F25FBC )
    dword_140F25FBC = v3;
  if ( (unsigned int)v3 > dword_140F25FB8 )
    dword_140F25FB8 = v3;
  if ( CurrentPrcb->ClockOwner )
  {
    v11 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
    KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
    v12 = KiLastRequestedTimeIncrement;
    v11->LowPart = KeTimeIncrement;
    v11->HighPart = v12;
    v11[1] = InterruptTimePrecise;
    v11[2] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v11[3].LowPart) = a3;
  }
  v13 = v16;
  v14 = (LARGE_INTEGER *)((char *)p_ClockTimerState + 32 * p_ClockTimerState->ClockIncrementTraceIndex);
  p_ClockTimerState->ClockIncrementTraceIndex = ((unsigned __int8)p_ClockTimerState->ClockIncrementTraceIndex + 1) & 0xF;
  v14[99].LowPart = v13;
  v14[99].HighPart = v3;
  v14[100] = InterruptTimePrecise;
  v14[101] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v14[102].LowPart) = a3;
  return (unsigned int)v16;
}
