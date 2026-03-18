/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x1404D56D4
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x14042C5F8 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098911C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( byte_140E6760C )
  {
    if ( EtwEventEnabled(qword_140F0F5D8, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(qword_140F0F5D8, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 8u, UserData);
  }
}
