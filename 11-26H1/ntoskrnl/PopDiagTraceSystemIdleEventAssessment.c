/*
 * XREFs of PopDiagTraceSystemIdleEventAssessment @ 0x1409F785C
 * Callers:
 *     PopAssessSystemIdleEvent @ 0x1409F77C8 (PopAssessSystemIdleEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSystemIdleEventAssessment(int a1, int a2, int a3, unsigned __int8 a4, char a5)
{
  _UNKNOWN **v5; // rax
  int v6; // ebx
  int v8; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  int *v10; // [rsp+58h] [rbp-1h]
  __int64 v11; // [rsp+60h] [rbp+7h]
  int *v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  int *v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  char *v16; // [rsp+88h] [rbp+2Fh]
  __int64 v17; // [rsp+90h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  int v19; // [rsp+B8h] [rbp+5Fh] BYREF
  int v20; // [rsp+C0h] [rbp+67h] BYREF
  int v21; // [rsp+C8h] [rbp+6Fh] BYREF

  v5 = &retaddr;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v6 = a4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_EVENT_ASSESSMENT);
    if ( (_BYTE)v5 )
    {
      UserData.Ptr = (ULONGLONG)&v19;
      *(_QWORD *)&UserData.Size = 4LL;
      v10 = &v20;
      v11 = 4LL;
      v12 = &v21;
      v13 = 4LL;
      v14 = &v8;
      v16 = &a5;
      v8 = v6;
      v15 = 4LL;
      v17 = 4LL;
      LOBYTE(v5) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_EVENT_ASSESSMENT, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
