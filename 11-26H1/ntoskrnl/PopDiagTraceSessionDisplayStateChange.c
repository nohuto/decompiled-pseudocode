/*
 * XREFs of PopDiagTraceSessionDisplayStateChange @ 0x1404EAF3C
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSessionDisplayStateChange(char a1, int a2, int a3, int a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  int *v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+98h] [rbp+18h] BYREF
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v4 = &POP_ETW_EVENT_SESSION_DISPLAY_ON;
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SESSION_DISPLAY_OFF;
  if ( !a1 )
    v5 = &POP_ETW_EVENT_SESSION_DISPLAY_ON;
  if ( byte_140E67628 )
  {
    LOBYTE(v4) = EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], v5);
    if ( (_BYTE)v4 )
    {
      UserData.Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v13;
      v9 = 4LL;
      v10 = &v14;
      v11 = 4LL;
      LOBYTE(v4) = EtwWriteEx(
                     *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                     v5,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     3u,
                     &UserData);
    }
  }
  return (char)v4;
}
