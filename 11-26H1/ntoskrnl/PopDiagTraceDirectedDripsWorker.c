/*
 * XREFs of PopDiagTraceDirectedDripsWorker @ 0x140AF4740
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1407CF670 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsWorker(__int64 a1)
{
  char v1; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v3; // [rsp+48h] [rbp-28h]
  __int64 v4; // [rsp+50h] [rbp-20h]
  __int64 *v5; // [rsp+58h] [rbp-18h]
  __int64 v6; // [rsp+60h] [rbp-10h]
  __int64 v7; // [rsp+80h] [rbp+10h] BYREF

  v7 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER) )
    {
      v1 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v1;
      v3 = &v7;
      v5 = &PopWnfCsEnterScenarioId;
      v4 = 8LL;
      v6 = 8LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER, 0LL, 3u, &UserData);
    }
  }
}
