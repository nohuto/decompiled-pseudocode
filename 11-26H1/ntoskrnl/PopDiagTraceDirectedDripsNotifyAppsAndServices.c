/*
 * XREFs of PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x1407D3554
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsNotifyAppsAndServices(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  char PriorityFloorSummary; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+50h] [rbp+7h]
  __int64 v9; // [rsp+58h] [rbp+Fh]
  int *v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  __int64 *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  unsigned int *p_PriorityFloorSummary; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]
  __int64 v16; // [rsp+C0h] [rbp+77h] BYREF

  v16 = a3;
  v3 = a1;
  v6 = 0;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES) )
    {
      PriorityFloorSummary = PopSleepstudySessionLock.PriorityFloorSummary;
      v5 = v3;
      UserData.Ptr = (ULONGLONG)&PriorityFloorSummary;
      v8 = &v5;
      v10 = &v6;
      v12 = &v16;
      p_PriorityFloorSummary = &PopSleepstudySessionLock.PriorityFloorSummary;
      *(_QWORD *)&UserData.Size = 1LL;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 8LL;
      v15 = 8LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES,
        0LL,
        5u,
        &UserData);
    }
  }
}
