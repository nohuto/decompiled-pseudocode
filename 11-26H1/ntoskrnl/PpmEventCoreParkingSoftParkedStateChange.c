/*
 * XREFs of PpmEventCoreParkingSoftParkedStateChange @ 0x14042D44C
 * Callers:
 *     PpmParkReportSoftParkChange @ 0x14042BF38 (PpmParkReportSoftParkChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PpmEventCoreParkingSoftParkedStateChange(__int64 a1, char a2)
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
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_SOFT_PARK_STATE_CHANGE) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PopSleepstudySessionLock.SystemCallNumber;
      v4 = *(unsigned __int8 *)(a1 + 208);
      v7 = &v4;
      v9 = a1 + 209;
      v12 = 4LL;
      v8 = 2LL;
      v10 = 1LL;
      v5 = a2 != 0;
      v11 = &v5;
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_SOFT_PARK_STATE_CHANGE,
        0LL,
        0,
        0LL,
        0LL,
        4u,
        &UserData);
    }
  }
}
