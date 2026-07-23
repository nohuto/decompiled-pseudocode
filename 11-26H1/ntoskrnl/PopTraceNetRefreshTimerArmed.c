/*
 * XREFs of PopTraceNetRefreshTimerArmed @ 0x1407D8EE8
 * Callers:
 *     PopNetArmRefreshTimer @ 0x1407DE2B8 (PopNetArmRefreshTimer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopTraceNetRefreshTimerArmed(unsigned __int64 a1)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v2;
      v2 = a1 / 0xA;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED, 0LL, 1u, &UserData);
    }
  }
}
