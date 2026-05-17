/*
 * XREFs of PsspSampleCounters @ 0x18010E2B0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800B4D70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18000E5E0 (RtlQueryPerformanceCounter.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall PsspSampleCounters(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  RtlQueryPerformanceCounter(a1, (__int64)a2);
  v3 = 0LL;
  result = ZwQueryInformationThread(-2LL, 23LL, &v5, 16LL, 0LL);
  if ( (int)result >= 0 )
    v3 = v5;
  *a2 = v3;
  return result;
}
