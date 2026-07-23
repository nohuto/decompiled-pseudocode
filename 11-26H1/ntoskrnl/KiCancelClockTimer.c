/*
 * XREFs of KiCancelClockTimer @ 0x14040D864
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 *     KiResetClockIntervalOneShot @ 0x14040D06C (KiResetClockIntervalOneShot.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405F0CD0 (KiCancelClockTimerKTimerDeadlines.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiShouldRearmClockTimer @ 0x14040D55C (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KiCancelClockTimer(__int64 a1, signed int a2, char a3)
{
  __int64 v4; // rax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  char v8; // [rsp+30h] [rbp-9h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp+7h] BYREF
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  char *v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+78h] [rbp+3Fh]

  v4 = 16LL * a2;
  *(_BYTE *)(v4 + a1 + 38372) &= ~1u;
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    PerformanceCounter.LowPart = a2;
    v12 = 4LL;
    p_PerformanceCounter = &PerformanceCounter;
    v8 = a3;
    v13 = &v8;
    v14 = 1LL;
    LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                   (__int64)&dword_140E06F90,
                   (unsigned __int8 *)&word_1400493F6,
                   0LL,
                   0LL,
                   4u,
                   &v10);
  }
  if ( a3 )
  {
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    else
      InterruptTimePrecise.QuadPart = 0LL;
    LOBYTE(v4) = KiShouldRearmClockTimer(a1, InterruptTimePrecise, 1);
    if ( (_BYTE)v4 )
    {
      *(_DWORD *)(a1 + 38352) = 2;
      LOBYTE(v4) = KiSetNextClockTickDueTime(InterruptTimePrecise, 1);
    }
  }
  return v4;
}
