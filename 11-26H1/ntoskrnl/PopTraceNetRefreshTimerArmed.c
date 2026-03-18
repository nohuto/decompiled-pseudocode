/*
 * XREFs of PopTraceNetRefreshTimerArmed @ 0x1407D5D38
 * Callers:
 *     PopNetArmRefreshTimer @ 0x1407DA3D0 (PopNetArmRefreshTimer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopTraceNetRefreshTimerArmed(unsigned __int64 a1)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v2;
      v2 = a1 / 0xA;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED,
        0LL,
        1u,
        &UserData);
    }
  }
}
