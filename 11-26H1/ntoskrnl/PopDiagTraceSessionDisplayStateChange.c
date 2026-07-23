/*
 * XREFs of PopDiagTraceSessionDisplayStateChange @ 0x1404E4520
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, v5);
    if ( (_BYTE)v4 )
    {
      UserData.Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v13;
      v9 = 4LL;
      v10 = &v14;
      v11 = 4LL;
      LOBYTE(v4) = EtwWriteEx(PopDiagHandle, v5, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v4;
}
