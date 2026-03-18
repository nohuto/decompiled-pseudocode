/*
 * XREFs of KiSetClockTickRate @ 0x14021DD30
 * Callers:
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140419438 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     KiSetPendingTick @ 0x14047CCA4 (KiSetPendingTick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiSetClockTickRate(__int64 InterruptTimePrecise, unsigned int a2, char a3)
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
  unsigned __int64 v17[2]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v18[2]; // [rsp+48h] [rbp-50h] BYREF
  int v19; // [rsp+4Ah] [rbp-4Eh]
  __int16 v20; // [rsp+4Eh] [rbp-4Ah]
  __int64 v21; // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+58h] [rbp-40h]

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
        InterruptTimePrecise = RtlGetInterruptTimePrecise(v17);
      else
        InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
    }
    KiClockTimerNextTickTime = InterruptTimePrecise + (unsigned int)KeTimeIncrement;
    KiClockOwnerOneShotRequestState = a3 != 0;
    if ( v6 == 2 )
      LOBYTE(v6) = _InterlockedExchange(&KiClockState, 0);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v21 = v16;
      v19 = 0;
      v17[0] = (unsigned __int64)v18;
      v20 = 0;
      v18[0] = 0;
      v18[1] = v6;
      v22 = v3;
      v17[1] = 24LL;
      EtwTraceKernelEvent((unsigned int)v17, 1, 1074790400, 3927, 1538);
    }
  }
  else if ( !KiClockTimerReducePreciseTimeQueries )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(v17);
  }
  CurrentPrcb->ClockTimerState.TimeIncrement = v16;
  CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = v3;
  if ( KeTimeIncrement < (unsigned int)dword_140F25C94 )
    dword_140F25C94 = KeTimeIncrement;
  if ( KeTimeIncrement > (unsigned int)dword_140F25C90 )
    dword_140F25C90 = KeTimeIncrement;
  if ( (unsigned int)v3 < dword_140F25C9C )
    dword_140F25C9C = v3;
  if ( (unsigned int)v3 > dword_140F25C98 )
    dword_140F25C98 = v3;
  if ( CurrentPrcb->ClockOwner )
  {
    v11 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
    KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
    v12 = KiLastRequestedTimeIncrement;
    v11->LowPart = KeTimeIncrement;
    v11->HighPart = v12;
    v11[1].QuadPart = InterruptTimePrecise;
    v11[2] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v11[3].LowPart) = a3;
  }
  v13 = v16;
  v14 = (LARGE_INTEGER *)((char *)p_ClockTimerState + 32 * p_ClockTimerState->ClockIncrementTraceIndex);
  p_ClockTimerState->ClockIncrementTraceIndex = ((unsigned __int8)p_ClockTimerState->ClockIncrementTraceIndex + 1) & 0xF;
  v14[99].LowPart = v13;
  v14[99].HighPart = v3;
  v14[100].QuadPart = InterruptTimePrecise;
  v14[101] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v14[102].LowPart) = a3;
  return (unsigned int)v16;
}
