/*
 * XREFs of PpmEventCoreParkingStateChangeEx @ 0x1404C0554
 * Callers:
 *     PpmParkReportParkedCore @ 0x140254E74 (PpmParkReportParkedCore.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventCoreParkingStateChangeEx(__int64 a1, char a2)
{
  __int16 v4; // [rsp+40h] [rbp-9h] BYREF
  BOOL v5; // [rsp+44h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  __int16 *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  __int64 v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  BOOL *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_CORE) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v4 = *(unsigned __int8 *)(a1 + 208);
      v7 = &v4;
      v9 = a1 + 209;
      v12 = 4LL;
      v8 = 2LL;
      v10 = 1LL;
      v5 = a2 != 0;
      v11 = &v5;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_CORE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
}
