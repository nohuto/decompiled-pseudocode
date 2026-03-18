/*
 * XREFs of PpmEventTraceFailedPerfCheckStart @ 0x1404F5A8C
 * Callers:
 *     PpmCheckPeriodicStart @ 0x1402568F0 (PpmCheckPeriodicStart.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceFailedPerfCheckStart(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_PERF_CHECK_FAILED_START) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_PERF_CHECK_FAILED_START,
        0LL,
        0,
        0LL,
        0LL,
        1u,
        &UserData);
    }
  }
}
