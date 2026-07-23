/*
 * XREFs of PopIdleWakeTraceWakeSourceDiagnostic @ 0x140B0C830
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B2A9B0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopIdleWakeSendDripsWakeSourceTelemetry @ 0x140B0C910 (PopIdleWakeSendDripsWakeSourceTelemetry.c)
 *     PopIdleWakeCalculateConvergedBuckets @ 0x140B53948 (PopIdleWakeCalculateConvergedBuckets.c)
 */

char __fastcall PopIdleWakeTraceWakeSourceDiagnostic(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  char result; // al
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  ULONGLONG v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  REGHANDLE v14; // rcx
  unsigned int v15; // ecx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh]
  char v20; // [rsp+48h] [rbp-B8h] BYREF
  char v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v24; // [rsp+1D0h] [rbp+D0h]
  __int64 v25; // [rsp+1D8h] [rbp+D8h]
  char *v26; // [rsp+1E0h] [rbp+E0h]
  __int64 v27; // [rsp+1E8h] [rbp+E8h]
  char *v28; // [rsp+1F0h] [rbp+F0h]
  __int64 v29; // [rsp+1F8h] [rbp+F8h]
  char *v30; // [rsp+200h] [rbp+100h]
  __int64 v31; // [rsp+208h] [rbp+108h]
  _DWORD *v32; // [rsp+210h] [rbp+110h]
  __int64 v33; // [rsp+218h] [rbp+118h]
  __int64 v34; // [rsp+220h] [rbp+120h]
  unsigned int v35; // [rsp+228h] [rbp+128h]
  int v36; // [rsp+22Ch] [rbp+12Ch]
  __int64 v37; // [rsp+230h] [rbp+130h]
  __int64 v38; // [rsp+238h] [rbp+138h]

  v19 = 0;
  v17[0] = 0;
  memset_0(v18, 0, 0x174uLL);
  v16 = 0;
  PopIdleWakeSendDripsWakeSourceTelemetry(a1, a2, 0LL);
  LOBYTE(v4) = 1;
  result = PopIdleWakeSendDripsWakeSourceTelemetry(a1, a2, v4);
  if ( PopDiagSleepStudyHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_DRIPS_WAKE_ACCOUNTING);
    if ( result )
    {
      PopIdleWakeCalculateConvergedBuckets(a2, v18);
      v6 = *(unsigned __int16 *)(a2 + 768);
      v7 = 8;
      v16 = PopWnfCsEnterScenarioId;
      UserData.Ptr = (ULONGLONG)&v16;
      v24 = v18;
      v35 = v6;
      v26 = &v20;
      v28 = &v21;
      v30 = &v22;
      v17[0] = v6 >> 1;
      v32 = v17;
      v34 = *(_QWORD *)(a2 + 776);
      v8 = *(unsigned __int16 *)(a2 + 848);
      *(_QWORD *)&UserData.Size = 1LL;
      v25 = 4LL;
      v27 = 8LL;
      v29 = 8LL;
      v31 = 8LL;
      v33 = 4LL;
      v36 = 0;
      v37 = a2 + 848;
      v38 = 2LL;
      if ( (_WORD)v8 )
      {
        v9 = a2 + 852;
        v10 = v8;
        do
        {
          v11 = 2LL * v7;
          *(&UserData.Ptr + v11) = v9 - 2;
          *((_QWORD *)&UserData.Size + v11) = 2LL;
          v12 = 2LL * (v7 + 1);
          v7 += 2;
          *(&UserData.Ptr + v12) = v9;
          v9 += 10LL;
          *((_QWORD *)&UserData.Size + v12) = 8LL;
          --v10;
        }
        while ( v10 );
      }
      v13 = 2LL * v7;
      *(&UserData.Ptr + v13) = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v14 = PopDiagSleepStudyHandle;
      *((_QWORD *)&UserData.Size + v13) = 8LL;
      result = EtwWrite(v14, &SLEEPSTUDY_EVT_SCENARIO_DRIPS_WAKE_ACCOUNTING, 0LL, v7 + 1, &UserData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_SOURCE_MAPPING);
    if ( result )
    {
      v15 = *(unsigned __int16 *)(a2 + 768);
      UserData.Ptr = a2 + 4;
      v27 = v15;
      v17[0] = v15 >> 1;
      v24 = v17;
      v26 = *(char **)(a2 + 776);
      *(_QWORD *)&UserData.Size = 4LL;
      v25 = 4LL;
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_SOURCE_MAPPING, 0LL, 3u, &UserData);
    }
  }
  return result;
}
