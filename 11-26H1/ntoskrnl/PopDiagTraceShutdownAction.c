/*
 * XREFs of PopDiagTraceShutdownAction @ 0x14060BE2C
 * Callers:
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SshSessionManagerTraceShutdownAction @ 0x1407E9450 (SshSessionManagerTraceShutdownAction.c)
 */

__int64 __fastcall PopDiagTraceShutdownAction(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v7; // [rsp+44h] [rbp-15h] BYREF
  unsigned int v8; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  unsigned int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]

  v8 = a2;
  v6 = 0;
  v7 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SHUTDOWN_ACTION) )
  {
    UserData.Ptr = (ULONGLONG)&v6;
    v6 = a1;
    v10 = &v8;
    v7 = a3;
    v12 = (int *)&v7;
    *(_QWORD *)&UserData.Size = 4LL;
    v11 = 4LL;
    v13 = 4LL;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_SHUTDOWN_ACTION, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  return SshSessionManagerTraceShutdownAction(a1, v8, a3);
}
