/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x140ABC878
 * Callers:
 *     PopPowerAggregatorDozeTimerArm @ 0x1407D9768 (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D9840 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopNotifyCsStateExited @ 0x140ABC730 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorWorker @ 0x140ABC780 (PopPowerAggregatorWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 */

void __fastcall PopPowerAggregatorDiagTraceEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(PopDiagHandle, EventDescriptor, 0LL, UserDataCount, UserData);
  }
}
