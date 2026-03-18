/*
 * XREFs of PopPowerAggregatorDiagTraceInternalStateChange @ 0x140A38DB4
 * Callers:
 *     PopPowerAggregatorSetCurrentState @ 0x140A38D30 (PopPowerAggregatorSetCurrentState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopPowerAggregatorDiagTraceInternalStateChange(ULONGLONG a1, __int64 a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-28h]
  __int64 v4; // [rsp+48h] [rbp-20h]

  UserData.Ptr = a1;
  *(_QWORD *)&UserData.Size = 4LL;
  v3 = a2;
  v4 = 4LL;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_POWER_AGGREGATOR_INTERNAL_STATE_CHANGE) )
    {
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_POWER_AGGREGATOR_INTERNAL_STATE_CHANGE,
        0LL,
        2u,
        &UserData);
    }
  }
}
