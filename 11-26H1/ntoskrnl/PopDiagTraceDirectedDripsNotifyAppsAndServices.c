/*
 * XREFs of PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x1407D658C
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsNotifyAppsAndServices(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  char v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+50h] [rbp+7h]
  __int64 v9; // [rsp+58h] [rbp+Fh]
  int *v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  __int64 *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  __int64 *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]
  __int64 v16; // [rsp+C0h] [rbp+77h] BYREF

  v16 = a3;
  v3 = a1;
  v6 = 0;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES) )
    {
      v4 = PopWdiCurrentScenarioInstanceId;
      v5 = v3;
      UserData.Ptr = (ULONGLONG)&v4;
      v8 = &v5;
      v10 = &v6;
      v12 = &v16;
      v14 = &PopWdiCurrentScenarioInstanceId;
      *(_QWORD *)&UserData.Size = 1LL;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 8LL;
      v15 = 8LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES, 0LL, 5u, &UserData);
    }
  }
}
