/*
 * XREFs of PopDiagTraceNotifyConsoleUserPresent @ 0x1409F97FC
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceNotifyConsoleUserPresent(char a1, int a2, char a3, int a4)
{
  _UNKNOWN **v4; // rax
  bool v7; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  bool *v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+60h] [rbp+1Fh]
  int *v11; // [rsp+68h] [rbp+27h]
  __int64 v12; // [rsp+70h] [rbp+2Fh]
  int *v13; // [rsp+78h] [rbp+37h]
  __int64 v14; // [rsp+80h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  char v16; // [rsp+A8h] [rbp+67h] BYREF
  int v17; // [rsp+B0h] [rbp+6Fh] BYREF
  int v18; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v18 = a4;
  v17 = a2;
  v16 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NOTIFY_CONSOLE_USER_PRESENT);
    if ( (_BYTE)v4 )
    {
      UserData.Ptr = (ULONGLONG)&v16;
      *(_QWORD *)&UserData.Size = 1LL;
      v10 = 1LL;
      v9 = &v7;
      v12 = 4LL;
      v11 = &v17;
      v7 = a3 != 0;
      v14 = 4LL;
      v13 = &v18;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_NOTIFY_CONSOLE_USER_PRESENT, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
