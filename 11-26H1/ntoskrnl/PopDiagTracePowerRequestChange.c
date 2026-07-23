/*
 * XREFs of PopDiagTracePowerRequestChange @ 0x1404A00F8
 * Callers:
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerRequestChange(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v2; // [rsp+50h] [rbp-19h]
  __int64 v3; // [rsp+58h] [rbp-11h]
  __int64 v4; // [rsp+60h] [rbp-9h]
  __int64 v5; // [rsp+68h] [rbp-1h]
  __int64 v6; // [rsp+70h] [rbp+7h]
  __int64 v7; // [rsp+78h] [rbp+Fh]
  __int64 v8; // [rsp+80h] [rbp+17h]
  __int64 v9; // [rsp+88h] [rbp+1Fh]
  __int64 v10; // [rsp+90h] [rbp+27h]
  __int64 v11; // [rsp+98h] [rbp+2Fh]
  __int64 v12; // [rsp+A0h] [rbp+37h]
  __int64 v13; // [rsp+A8h] [rbp+3Fh]
  __int64 v14; // [rsp+D0h] [rbp+67h] BYREF

  v14 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CHANGE_POWER_REQUEST) )
    {
      UserData.Ptr = (ULONGLONG)&v14;
      *(_QWORD *)&UserData.Size = 8LL;
      v3 = 4LL;
      v5 = 4LL;
      v4 = v14 + 40;
      v2 = v14 + 44;
      v6 = v14 + 48;
      v8 = v14 + 52;
      v10 = v14 + 56;
      v12 = v14 + 60;
      v7 = 4LL;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 4LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CHANGE_POWER_REQUEST, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
}
