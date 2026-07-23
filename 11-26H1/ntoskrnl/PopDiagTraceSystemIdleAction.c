/*
 * XREFs of PopDiagTraceSystemIdleAction @ 0x1409F7AA4
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1409F79EC (PopExecuteSystemIdleAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSystemIdleAction(int a1, unsigned __int8 a2, int a3)
{
  int v3; // ebx
  int v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  int *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+80h] [rbp+10h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a1;
  v3 = a2;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER) )
    {
      UserData.Ptr = (ULONGLONG)&v4;
      v4 = v3;
      v6 = &v11;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v10;
      v7 = 4LL;
      v9 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER, 0LL, 3u, &UserData);
    }
  }
}
