/*
 * XREFs of HalpTscTraceProcessorSynchronization @ 0x140586730
 * Callers:
 *     HalpTscAdvSynchToLeader @ 0x1404BE28C (HalpTscAdvSynchToLeader.c)
 *     HalpTscAdvSynchToTarget @ 0x140585E50 (HalpTscAdvSynchToTarget.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char HalpTscTraceProcessorSynchronization(int a1, int a2, ...)
{
  _UNKNOWN **v2; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  int *v5; // [rsp+58h] [rbp-1h]
  __int64 v6; // [rsp+60h] [rbp+7h]
  va_list v7; // [rsp+68h] [rbp+Fh]
  __int64 v8; // [rsp+70h] [rbp+17h]
  va_list v9; // [rsp+78h] [rbp+1Fh]
  __int64 v10; // [rsp+80h] [rbp+27h]
  va_list v11; // [rsp+88h] [rbp+2Fh]
  __int64 v12; // [rsp+90h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  int v14; // [rsp+B8h] [rbp+5Fh] BYREF
  int v15; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+6Fh]
  __int64 v18; // [rsp+D0h] [rbp+77h] BYREF
  va_list va1; // [rsp+D0h] [rbp+77h]
  va_list va2; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v2 = &retaddr;
  v15 = a2;
  v14 = a1;
  if ( HalpDiagnosticEventsRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT);
    if ( (_BYTE)v2 )
    {
      UserData.Ptr = (ULONGLONG)&v14;
      *(_QWORD *)&UserData.Size = 4LL;
      v5 = &v15;
      v6 = 4LL;
      va_copy(v7, va);
      v8 = 8LL;
      va_copy(v9, va1);
      va_copy(v11, va2);
      v10 = 8LL;
      v12 = 4LL;
      LOBYTE(v2) = EtwWriteEx(
                     HalpDiagnosticEventHandle,
                     &HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v2;
}
