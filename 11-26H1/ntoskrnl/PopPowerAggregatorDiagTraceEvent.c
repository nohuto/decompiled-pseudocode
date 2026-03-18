/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x140ABB3B8
 * Callers:
 *     PopPowerAggregatorDozeTimerArm @ 0x1407D65DC (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D66B0 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopNotifyCsStateExited @ 0x140ABB270 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorWorker @ 0x140ABB2C0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 */

void __fastcall PopPowerAggregatorDiagTraceEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], EventDescriptor) )
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        EventDescriptor,
        0LL,
        UserDataCount,
        UserData);
  }
}
