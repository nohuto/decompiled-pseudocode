/*
 * XREFs of PopDiagTraceSessionStates @ 0x1409F7428
 * Callers:
 *     PopSessionConnectedV2 @ 0x1407E2424 (PopSessionConnectedV2.c)
 *     PopSessionDisconnected @ 0x1409F73A0 (PopSessionDisconnected.c)
 *     PopSetSessionDisplayStatus @ 0x1409F7F68 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409F9DBC (PopSetSessionUserStatus.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopSessionConnected @ 0x140B77568 (PopSessionConnected.c)
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSessionStates(PCEVENT_DESCRIPTOR EventDescriptor, int a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+78h] [rbp+10h] BYREF
  int v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
    {
      UserData.Ptr = (ULONGLONG)&v7;
      *(_QWORD *)&UserData.Size = 4LL;
      v5 = &v8;
      v6 = 4LL;
      EtwWrite(PopDiagHandle, EventDescriptor, 0LL, 2u, &UserData);
    }
  }
}
