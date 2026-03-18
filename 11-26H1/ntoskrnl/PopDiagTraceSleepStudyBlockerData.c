/*
 * XREFs of PopDiagTraceSleepStudyBlockerData @ 0x1407D4CC4
 * Callers:
 *     PopFxLogSocSubsystemMetadata @ 0x1409879C4 (PopFxLogSocSubsystemMetadata.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 */

void __fastcall PopDiagTraceSleepStudyBlockerData(ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( byte_140E6760C )
  {
    if ( EtwEventEnabled(qword_140F0F5D8, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
      EtwWrite(qword_140F0F5D8, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
  }
}
