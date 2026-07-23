/*
 * XREFs of PopDiagTraceSleepStudyStart @ 0x140B2BCA4
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudyScenarioStopWorker @ 0x140B21670 (PopSleepstudyScenarioStopWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404E9888 (PopGetModernStandbyTransitionReason.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSleepStudyStart(char a1)
{
  char v1; // [rsp+30h] [rbp-59h] BYREF
  int ModernStandbyTransitionReason; // [rsp+34h] [rbp-55h] BYREF
  __int64 v3; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-49h] BYREF
  char *v5; // [rsp+50h] [rbp-39h]
  __int64 v6; // [rsp+58h] [rbp-31h]
  int *p_ModernStandbyTransitionReason; // [rsp+60h] [rbp-29h]
  __int64 v8; // [rsp+68h] [rbp-21h]
  int *v9; // [rsp+70h] [rbp-19h]
  __int64 v10; // [rsp+78h] [rbp-11h]
  int *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  __int64 *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  unsigned __int64 v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  __int64 *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  char *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]
  char v21; // [rsp+F0h] [rbp+67h] BYREF

  v21 = a1;
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_START_REASON) )
    {
      v3 = MEMORY[0xFFFFF78000000014];
      UserData.Ptr = PopWdiCurrentScenario;
      v1 = PopWdiCurrentScenarioInstanceId;
      v5 = &v1;
      *(_QWORD *)&UserData.Size = 16LL;
      v6 = 1LL;
      ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(1);
      v8 = 4LL;
      p_ModernStandbyTransitionReason = &ModernStandbyTransitionReason;
      v10 = 4LL;
      v9 = &PopCsConsumption;
      v11 = &dword_140E27168;
      v13 = &PopWdiCurrentScenarioInstanceId;
      v15 = 0xFFFFF780000002C4uLL;
      v17 = &v3;
      v19 = &v21;
      v12 = 4LL;
      v14 = 8LL;
      v16 = 4LL;
      v18 = 8LL;
      v20 = 1LL;
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_START_REASON, &PopDiagActivityId, 9u, &UserData);
    }
  }
}
