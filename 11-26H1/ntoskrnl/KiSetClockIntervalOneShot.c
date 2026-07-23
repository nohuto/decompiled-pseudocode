/*
 * XREFs of KiSetClockIntervalOneShot @ 0x14040D19C
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140220830 (KiCheckForTimerExpiration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14040D2D0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiShouldRearmClockTimer @ 0x14040D55C (KiShouldRearmClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetClockIntervalOneShot(__int64 a1, LARGE_INTEGER a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  LARGE_INTEGER InterruptTimePrecise; // rsi
  LARGE_INTEGER v7; // r14
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rcx
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  LONGLONG v19; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  LONGLONG *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  char *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  char *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  KiClockOwnerOneShotRequest = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    InterruptTimePrecise = a2;
    if ( !KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v7.QuadPart = InterruptTimePrecise.QuadPart - a1;
    if ( a1 > 0 )
      v7.QuadPart = a1;
    if ( (unsigned int)dword_140E06F90 > 5 )
    {
      v17 = InterruptTimePrecise;
      v21 = &v17;
      v22 = 8LL;
      v23 = &v14;
      v14 = 2;
      v25 = &v18;
      v24 = 4LL;
      v18 = a1;
      v19 = v7.QuadPart - InterruptTimePrecise.QuadPart;
      v26 = 8LL;
      v27 = &v19;
      p_PerformanceCounter = &PerformanceCounter;
      v31 = &v15;
      v33 = &v12;
      v35 = &v13;
      v28 = 8LL;
      PerformanceCounter = v7;
      v30 = 8LL;
      v15 = 0;
      v32 = 4LL;
      v12 = 0;
      v34 = 1LL;
      v13 = 1;
      v36 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06F90,
        (unsigned __int8 *)word_140049432,
        0LL,
        0LL,
        0xAu,
        &v20);
    }
    LOBYTE(a3) = 1;
    v8 = CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags & 0xFD;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[2].DueTime = v7.QuadPart;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TolerableDelay = 0;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags = v8 | 1;
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiShouldRearmClockTimer)(
                            CurrentPrcb,
                            (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
                            a3) )
    {
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiSetNextClockTickDueTime(InterruptTimePrecise, 1);
    }
  }
  else
  {
    KiSetClockIntervalToMinimumRequested();
  }
  v10 = (unsigned int)KeMinimumIncrement;
  if ( a1 > a2.QuadPart + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    v10 = ((int)a1 - a2.LowPart + KeMinimumIncrement - 1) / KeMinimumIncrement * KeMinimumIncrement;
  LOBYTE(v9) = 1;
  return PoTraceSystemTimerResolutionKernel(v10, 1397707336LL, v9);
}
