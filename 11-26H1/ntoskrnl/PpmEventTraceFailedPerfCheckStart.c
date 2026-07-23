/*
 * XREFs of PpmEventTraceFailedPerfCheckStart @ 0x1404EF04C
 * Callers:
 *     PpmCheckPeriodicStart @ 0x140258280 (PpmCheckPeriodicStart.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceFailedPerfCheckStart(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_FAILED_START) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_FAILED_START, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
