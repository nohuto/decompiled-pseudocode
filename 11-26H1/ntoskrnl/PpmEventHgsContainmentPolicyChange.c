/*
 * XREFs of PpmEventHgsContainmentPolicyChange @ 0x14060E190
 * Callers:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404F9270 (PpmHeteroHgsEvaluateContainmentDecision.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PpmEventHgsContainmentPolicyChange(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  char RealtimePriorityFloor; // si
  const EVENT_DESCRIPTOR *v8; // rax
  const EVENT_DESCRIPTOR *v9; // rbx
  unsigned int v11; // [rsp+48h] [rbp-79h] BYREF
  int v12; // [rsp+50h] [rbp-71h] BYREF
  BOOL v13; // [rsp+58h] [rbp-69h] BYREF
  int v14; // [rsp+60h] [rbp-61h] BYREF
  BOOL v15; // [rsp+68h] [rbp-59h] BYREF
  BOOL v16; // [rsp+6Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-49h] BYREF
  int *v18; // [rsp+88h] [rbp-39h]
  __int64 v19; // [rsp+90h] [rbp-31h]
  BOOL *v20; // [rsp+98h] [rbp-29h]
  __int64 v21; // [rsp+A0h] [rbp-21h]
  int *v22; // [rsp+A8h] [rbp-19h]
  __int64 v23; // [rsp+B0h] [rbp-11h]
  BOOL *v24; // [rsp+B8h] [rbp-9h]
  __int64 v25; // [rsp+C0h] [rbp-1h]
  int *v26; // [rsp+C8h] [rbp+7h]
  __int64 v27; // [rsp+D0h] [rbp+Fh]
  BOOL *v28; // [rsp+D8h] [rbp+17h]
  __int64 v29; // [rsp+E0h] [rbp+1Fh]

  RealtimePriorityFloor = stru_140F11D08.RealtimePriorityFloor;
  v14 = *(_DWORD *)&PopSleepstudySessionLock.WaitRegister.Flags;
  v12 = PpmHeteroPolicy;
  LOBYTE(v8) = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    v8 = &PPM_ETW_WPS_CONTAINMENT_POLICY_CHANGE;
    v9 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_CONTAINMENT_POLICY_CHANGE_RUNDOWN;
    if ( !a6 )
      v9 = &PPM_ETW_WPS_CONTAINMENT_POLICY_CHANGE;
    if ( PpmEtwRegistered )
    {
      LOBYTE(v8) = EtwEventEnabled((REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink, v9);
      if ( (_BYTE)v8 )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        v19 = 4LL;
        v13 = RealtimePriorityFloor != 0;
        v21 = 4LL;
        v23 = 4LL;
        v15 = a4 != 0;
        v25 = 4LL;
        v11 = ((unsigned int)PpmHeteroHgsContainmentState >> 3) & 1;
        v27 = 4LL;
        v16 = a5 != 0;
        v29 = 4LL;
        UserData.Ptr = (ULONGLONG)&v11;
        v18 = &v12;
        v20 = &v13;
        v22 = &v14;
        v24 = &v15;
        v26 = &PpmHeteroContainmentPolicy;
        v28 = &v16;
        LOBYTE(v8) = EtwWriteEx(
                       (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
                       v9,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       7u,
                       &UserData);
      }
    }
  }
  return (char)v8;
}
