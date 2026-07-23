/*
 * XREFs of PpmEventCoreParkingStateChange @ 0x1404C4C28
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x140254CCC (PpmParkReportUnparkedCore.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventCoreParkingStateChange(__int64 a1)
{
  __int16 v2; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v4; // [rsp+58h] [rbp-28h]
  __int64 v5; // [rsp+60h] [rbp-20h]
  __int64 v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+70h] [rbp-10h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_UNPARK_CORE) )
    {
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v2 = *(unsigned __int8 *)(a1 + 208);
      *(_QWORD *)&UserData.Size = 8LL;
      v4 = &v2;
      v6 = a1 + 209;
      v5 = 2LL;
      v7 = 1LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_UNPARK_CORE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
