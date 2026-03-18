/*
 * XREFs of PopDiagTraceDirectedDripsWorker @ 0x140AF1E70
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1407CC5D0 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER) )
    {
      v1 = qword_140F0F5D0;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v1;
      v3 = &v7;
      v5 = &qword_140F0F5D0;
      v4 = 8LL;
      v6 = 8LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER,
        0LL,
        3u,
        &UserData);
    }
  }
}
