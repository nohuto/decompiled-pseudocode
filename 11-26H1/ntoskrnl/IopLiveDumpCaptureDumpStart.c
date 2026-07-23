/*
 * XREFs of IopLiveDumpCaptureDumpStart @ 0x1405D0E70
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char IopLiveDumpCaptureDumpStart()
{
  char result; // al
  __int64 v1; // rcx
  _QWORD v2[4]; // [rsp+20h] [rbp-38h] BYREF

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2[1] = 4LL;
    v2[0] = v1 + 24;
    v2[3] = 4LL;
    v2[2] = v1 + 28;
    return IopLiveDumpTrace(LIVEDUMP_EVENT_CAPTURE_API_START, 2LL, v2);
  }
  return result;
}
