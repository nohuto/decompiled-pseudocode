/*
 * XREFs of PopDiagTraceSleepStudyStart @ 0x140B29C24
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudyScenarioStopWorker @ 0x140B1F5F0 (PopSleepstudyScenarioStopWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404F02A8 (PopGetModernStandbyTransitionReason.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSleepStudyStart(char a1)
{
  char PriorityFloorSummary; // [rsp+30h] [rbp-59h] BYREF
  int ModernStandbyTransitionReason; // [rsp+34h] [rbp-55h] BYREF
  __int64 v3; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-49h] BYREF
  char *p_PriorityFloorSummary; // [rsp+50h] [rbp-39h]
  __int64 v6; // [rsp+58h] [rbp-31h]
  int *p_ModernStandbyTransitionReason; // [rsp+60h] [rbp-29h]
  __int64 v8; // [rsp+68h] [rbp-21h]
  int *v9; // [rsp+70h] [rbp-19h]
  __int64 v10; // [rsp+78h] [rbp-11h]
  int *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  unsigned int *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  unsigned __int64 v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  __int64 *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  char *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]
  char v21; // [rsp+F0h] [rbp+67h] BYREF

  v21 = a1;
  if ( byte_140E6760C )
  {
    if ( EtwEventEnabled(qword_140F0F5D8, &SLEEPSTUDY_EVT_SCENARIO_START_REASON) )
    {
      v3 = MEMORY[0xFFFFF78000000014];
      UserData.Ptr = *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[24];
      PriorityFloorSummary = PopSleepstudySessionLock.PriorityFloorSummary;
      p_PriorityFloorSummary = &PriorityFloorSummary;
      *(_QWORD *)&UserData.Size = 16LL;
      v6 = 1LL;
      ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(1);
      v8 = 4LL;
      p_ModernStandbyTransitionReason = &ModernStandbyTransitionReason;
      v10 = 4LL;
      v9 = &PopCsConsumption;
      v11 = &dword_140E27028;
      v13 = &PopSleepstudySessionLock.PriorityFloorSummary;
      v15 = 0xFFFFF780000002C4uLL;
      v17 = &v3;
      v19 = &v21;
      v12 = 4LL;
      v14 = 8LL;
      v16 = 4LL;
      v18 = 8LL;
      v20 = 1LL;
      EtwWrite(qword_140F0F5D8, &SLEEPSTUDY_EVT_SCENARIO_START_REASON, &ActivityId, 9u, &UserData);
    }
  }
}
