/*
 * XREFs of PopDiagTraceSystemIdleContextUpdate @ 0x1409C1084
 * Callers:
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSystemIdleContextUpdate(int a1, int a2, int a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-11h] BYREF
  int *v8; // [rsp+48h] [rbp-1h]
  __int64 v9; // [rsp+50h] [rbp+7h]
  int *v10; // [rsp+58h] [rbp+Fh]
  __int64 v11; // [rsp+60h] [rbp+17h]
  int *v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  char *v14; // [rsp+78h] [rbp+2Fh]
  __int64 v15; // [rsp+80h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+57h] BYREF
  int v17; // [rsp+A8h] [rbp+5Fh] BYREF
  int v18; // [rsp+B0h] [rbp+67h] BYREF
  int v19; // [rsp+B8h] [rbp+6Fh] BYREF
  int v20; // [rsp+C0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_CONTEXT_UPDATE);
    if ( (_BYTE)v5 )
    {
      UserData.Ptr = (ULONGLONG)&v17;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v18;
      v9 = 4LL;
      v10 = &v19;
      v11 = 4LL;
      v12 = &v20;
      v14 = &a5;
      v13 = 4LL;
      v15 = 4LL;
      LOBYTE(v5) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_CONTEXT_UPDATE, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
