/*
 * XREFs of HalpTimerWatchdogTriggerSystemReset @ 0x140220C90
 * Callers:
 *     HalpTimerClockInterrupt @ 0x140221DE0 (HalpTimerClockInterrupt.c)
 *     HalpTimerClockIpiRoutine @ 0x140461810 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140599440 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     HalpSetTimer @ 0x140208790 (HalpSetTimer.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x1402F9510 (HalRequestClockInterrupt.c)
 *     HalpTimerGetClockRates @ 0x1405838F8 (HalpTimerGetClockRates.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpTimerWatchdogTriggerSystemReset(char a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  signed __int32 v5[8]; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v6; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v9[264]; // [rsp+50h] [rbp-B8h] BYREF

  memset_0(v9, 0, 0x100uLL);
  v2 = HalpWatchdogTimer;
  v3 = 0;
  v6 = 0;
  if ( !HalpWatchdogTimer )
    return 3221225473LL;
  if ( a1 )
  {
    HalpTimerWatchdogResetCount = -1LL;
    _InterlockedOr(v5, 0);
    v8 = 2097153LL;
    memset_0(v9, 0, 0x100uLL);
    KeAddProcessorAffinityEx(&v8, (unsigned int)KiClockTimerOwner);
    HalRequestClockInterrupt(0LL, &v8);
  }
  else
  {
    HalpTimerWatchdogResetCount = -2LL;
    _InterlockedOr(v5, 0);
    HalpTimerGetClockRates(v2, &v7, &v6);
    return (unsigned int)HalpSetTimer(v2, 3u, v6, 1, &v7);
  }
  return v3;
}
