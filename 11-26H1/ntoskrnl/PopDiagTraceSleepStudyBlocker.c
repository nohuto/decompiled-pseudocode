/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x1404CEF44
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x140420CC8 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x140A4383C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 8u, UserData);
  }
}
