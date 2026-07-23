/*
 * XREFs of PopDiagTraceSleepStudyBlockerData @ 0x1407D7E7C
 * Callers:
 *     PopFxLogSocSubsystemMetadata @ 0x140A4271C (PopFxLogSocSubsystemMetadata.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 */

void __fastcall PopDiagTraceSleepStudyBlockerData(ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
  }
}
