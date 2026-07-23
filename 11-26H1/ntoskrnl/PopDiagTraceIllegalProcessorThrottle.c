/*
 * XREFs of PopDiagTraceIllegalProcessorThrottle @ 0x14060BA84
 * Callers:
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x140255980 (PpmPerfCheckForIllegalProcessorThrottle.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIllegalProcessorThrottle(int a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl
  char v4; // di
  __int64 v6; // rdx
  int v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  int *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  int *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  int v15; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+6Fh] BYREF

  v16 = a2;
  v15 = a1;
  v3 = 1;
  v4 = 1;
  if ( !PopDiagHandleRegistered || !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC) )
    v3 = 0;
  if ( !PopDiagHandleRegistered
    || !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
  {
    v10 = 8LL;
    UserData.Ptr = (ULONGLONG)&v15;
    v9 = &v16;
    *(_QWORD *)&UserData.Size = 4LL;
    if ( *a3 )
      v6 = KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *a3) / 10000000LL;
    else
      LODWORD(v6) = 0;
    v7 = v6;
    v11 = &v7;
    v13 = &PopProcessorThrottleLogInterval;
    *a3 = MEMORY[0xFFFFF78000000320];
    v12 = 4LL;
    v14 = 4LL;
    if ( v3 )
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    if ( v4 )
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL, 0LL, 0, 0LL, 0LL, 4u, &UserData);
  }
}
