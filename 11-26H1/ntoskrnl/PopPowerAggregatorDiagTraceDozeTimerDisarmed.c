/*
 * XREFs of PopPowerAggregatorDiagTraceDozeTimerDisarmed @ 0x140B2BD58
 * Callers:
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2BCBC (PopPowerAggregatorDozeTimerDisarm.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PopPowerAggregatorDiagTraceDozeTimerDisarmed(int a1)
{
  int *v1; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v1 = &v4;
  UserData.Ptr = (ULONGLONG)&v4;
  *(_QWORD *)&UserData.Size = 4LL;
  if ( byte_140E67628 )
  {
    LOBYTE(v1) = EtwEventEnabled(
                   *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                   &POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_DISARMED);
    if ( (_BYTE)v1 )
      LOBYTE(v1) = EtwWrite(
                     *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                     &POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_DISARMED,
                     0LL,
                     1u,
                     &UserData);
  }
  return (char)v1;
}
