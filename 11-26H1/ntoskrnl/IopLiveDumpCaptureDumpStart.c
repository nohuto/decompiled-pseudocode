/*
 * XREFs of IopLiveDumpCaptureDumpStart @ 0x1405CE660
 * Callers:
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
