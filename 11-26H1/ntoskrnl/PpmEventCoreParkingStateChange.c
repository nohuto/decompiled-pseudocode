/*
 * XREFs of PpmEventCoreParkingStateChange @ 0x1404CB1F8
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x14025336C (PpmParkReportUnparkedCore.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
    if ( EtwEventEnabled((REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink, &PPM_ETW_UNPARK_CORE) )
    {
      UserData.Ptr = (ULONGLONG)&PopSleepstudySessionLock.SystemCallNumber;
      v2 = *(unsigned __int8 *)(a1 + 208);
      *(_QWORD *)&UserData.Size = 8LL;
      v4 = &v2;
      v6 = a1 + 209;
      v5 = 2LL;
      v7 = 1LL;
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_UNPARK_CORE,
        0LL,
        0,
        0LL,
        0LL,
        3u,
        &UserData);
    }
  }
}
