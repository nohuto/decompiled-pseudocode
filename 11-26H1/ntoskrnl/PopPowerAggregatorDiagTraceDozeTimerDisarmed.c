/*
 * XREFs of PopPowerAggregatorDiagTraceDozeTimerDisarmed @ 0x140B2DDD8
 * Callers:
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2DD3C (PopPowerAggregatorDozeTimerDisarm.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_DISARMED);
    if ( (_BYTE)v1 )
      LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_DISARMED, 0LL, 1u, &UserData);
  }
  return (char)v1;
}
