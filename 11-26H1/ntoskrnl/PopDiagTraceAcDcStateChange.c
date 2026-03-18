/*
 * XREFs of PopDiagTraceAcDcStateChange @ 0x1407D2424
 * Callers:
 *     PopUpdateAcDcState @ 0x1404EA054 (PopUpdateAcDcState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall PopDiagTraceAcDcStateChange(int a1, int a2, int a3)
{
  bool v4; // [rsp+38h] [rbp-69h] BYREF
  bool v5; // [rsp+40h] [rbp-61h] BYREF
  BOOL v6; // [rsp+48h] [rbp-59h] BYREF
  BOOL v7; // [rsp+50h] [rbp-51h] BYREF
  int v8; // [rsp+58h] [rbp-49h] BYREF
  int v9; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v10[10]; // [rsp+68h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp+17h] BYREF
  int *v12; // [rsp+C8h] [rbp+27h]
  __int64 v13; // [rsp+D0h] [rbp+2Fh]
  int *v14; // [rsp+D8h] [rbp+37h]
  __int64 v15; // [rsp+E0h] [rbp+3Fh]
  int v16; // [rsp+110h] [rbp+6Fh] BYREF
  int v17; // [rsp+118h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v6 = a1 == 0;
  if ( byte_140E67628
    && EtwEventEnabled(
         *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
         &POP_ETW_EVENT_ACDC_STATE_CHANGE) )
  {
    UserData.Ptr = (ULONGLONG)&v6;
    *(_QWORD *)&UserData.Size = 4LL;
    v12 = &v16;
    v13 = 4LL;
    v14 = &v17;
    v15 = 4LL;
    EtwWrite(
      *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
      &POP_ETW_EVENT_ACDC_STATE_CHANGE,
      0LL,
      3u,
      &UserData);
  }
  v10[1] = 4LL;
  v10[3] = 4LL;
  v4 = PopLidOpened != 0;
  v5 = PopConsoleExternalDisplayConnected != 0;
  v9 = v17;
  v8 = v16;
  v7 = v6;
  v10[0] = &v7;
  v10[2] = &v8;
  v10[4] = &v9;
  v10[6] = &v4;
  v10[8] = &v5;
  v10[5] = 4LL;
  v10[7] = 1LL;
  v10[9] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_ACDC_STATE_CHANGE_CONTROL_EVENT, 5LL, v10);
}
