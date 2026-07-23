/*
 * XREFs of PopDiagTraceIoCoalescingOn @ 0x140B2F20C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404BCB04 (PopCoalescingSetActiveState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIoCoalescingOn(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  int v7; // [rsp+40h] [rbp-9h] BYREF
  int v8; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  int *v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  int *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  v8 = a4;
  v7 = PopCoalescingFlushInterval;
  v6 = PopCoalescingTimerInterval;
  v5 = PopCurrentCoalescingSpindownTimeout;
  result = PopPrintEx(
             3,
             (int)"PopCoalescing: ON notification sent (spindown timeout:%u, timer interval: %u, flush delay interval:%u, Enforced:%u)\n");
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_IO_COALESCING_ON);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      v10 = &v6;
      *(_QWORD *)&UserData.Size = 4LL;
      v12 = &v7;
      v14 = &v8;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      return EtwWrite(PopDiagHandle, &POP_ETW_IO_COALESCING_ON, 0LL, 4u, &UserData);
    }
  }
  return result;
}
