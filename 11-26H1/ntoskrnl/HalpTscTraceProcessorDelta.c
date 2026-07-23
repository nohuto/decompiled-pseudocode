/*
 * XREFs of HalpTscTraceProcessorDelta @ 0x140586654
 * Callers:
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x140585A84 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall HalpTscTraceProcessorDelta(int a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v7; // [rsp+58h] [rbp+17h]
  __int64 v8; // [rsp+60h] [rbp+1Fh]
  __int64 *v9; // [rsp+68h] [rbp+27h]
  __int64 v10; // [rsp+70h] [rbp+2Fh]
  int *v11; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+80h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v14; // [rsp+A8h] [rbp+67h] BYREF
  int v15; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+B8h] [rbp+77h] BYREF
  int v17; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v17 = a4;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  if ( HalpDiagnosticEventsRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT);
    if ( (_BYTE)v4 )
    {
      v10 = 8LL;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v14;
      v8 = 4LL;
      v7 = &v15;
      v12 = 4LL;
      v9 = &v16;
      v11 = &v17;
      LOBYTE(v4) = EtwWriteEx(
                     HalpDiagnosticEventHandle,
                     &HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     4u,
                     &UserData);
    }
  }
  return (char)v4;
}
