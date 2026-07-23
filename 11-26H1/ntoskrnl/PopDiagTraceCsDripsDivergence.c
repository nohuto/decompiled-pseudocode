/*
 * XREFs of PopDiagTraceCsDripsDivergence @ 0x14060AE4C
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceCsDripsDivergence(int a1, __int64 a2, __int64 a3)
{
  BOOLEAN result; // al
  int v4; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 *v6; // [rsp+68h] [rbp+17h]
  __int64 v7; // [rsp+70h] [rbp+1Fh]
  __int64 *v8; // [rsp+78h] [rbp+27h]
  __int64 v9; // [rsp+80h] [rbp+2Fh]
  int *v10; // [rsp+88h] [rbp+37h]
  __int64 v11; // [rsp+90h] [rbp+3Fh]
  int v12; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+C8h] [rbp+77h] BYREF

  v14 = a3;
  v13 = a2;
  v12 = a1;
  result = PopDripsSwHwDivergenceThreshold;
  v4 = PopDripsSwHwDivergenceThreshold;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_DIVERGENCE);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v12;
      v7 = 8LL;
      *(_QWORD *)&UserData.Size = 4LL;
      v6 = &v13;
      v11 = 4LL;
      v8 = &v14;
      v10 = &v4;
      v9 = 8LL;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_DIVERGENCE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return result;
}
