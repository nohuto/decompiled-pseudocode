/*
 * XREFs of PopDiagTraceSessionStates @ 0x140A3BA08
 * Callers:
 *     PopSessionConnectedV2 @ 0x1407DDDF4 (PopSessionConnectedV2.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopSessionWinlogonNotification @ 0x140A3B184 (PopSessionWinlogonNotification.c)
 *     PopSessionDisconnected @ 0x140A3B980 (PopSessionDisconnected.c)
 *     PopSetSessionDisplayStatus @ 0x140A3C548 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x140A3E39C (PopSetSessionUserStatus.c)
 *     PopSessionConnected @ 0x140B72588 (PopSessionConnected.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], EventDescriptor) )
    {
      UserData.Ptr = (ULONGLONG)&v7;
      *(_QWORD *)&UserData.Size = 4LL;
      v5 = &v8;
      v6 = 4LL;
      EtwWrite(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], EventDescriptor, 0LL, 2u, &UserData);
    }
  }
}
