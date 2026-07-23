/*
 * XREFs of PopDiagTraceIdleResiliencyEnd @ 0x1404D3880
 * Callers:
 *     PopDeepSleepEvaluateCallback @ 0x1404D3700 (PopDeepSleepEvaluateCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceIdleResiliencyEnd(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  int v3; // [rsp+40h] [rbp+7h] BYREF
  __int64 v4; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  int *v6; // [rsp+60h] [rbp+27h]
  __int64 v7; // [rsp+68h] [rbp+2Fh]
  int *v8; // [rsp+70h] [rbp+37h]
  __int64 v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+A8h] [rbp+6Fh] BYREF

  v10 = a2;
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v4;
    v4 = 0LL;
    v6 = &v10;
    v3 = 0;
    v8 = &v3;
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = 4LL;
    v9 = 4LL;
    return EtwWriteEx(PopDiagHandle, &POP_ETW_IDLE_RESILIENCY_END, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  return result;
}
