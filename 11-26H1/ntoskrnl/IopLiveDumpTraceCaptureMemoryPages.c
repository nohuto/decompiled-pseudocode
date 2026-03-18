/*
 * XREFs of IopLiveDumpTraceCaptureMemoryPages @ 0x1405D1D2C
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1405CE6D0 (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char IopLiveDumpTraceCaptureMemoryPages()
{
  char result; // al
  __int64 v1; // rcx
  _QWORD v2[14]; // [rsp+20h] [rbp-29h] BYREF

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2[1] = 8LL;
    v2[0] = v1 + 480;
    v2[3] = 8LL;
    v2[2] = v1 + 488;
    v2[5] = 8LL;
    v2[4] = v1 + 496;
    v2[6] = v1 + 504;
    v2[8] = v1 + 512;
    v2[10] = v1 + 520;
    v2[12] = v1 + 528;
    v2[7] = 8LL;
    v2[9] = 8LL;
    v2[11] = 8LL;
    v2[13] = 8LL;
    return IopLiveDumpTrace(LIVEDUMP_EVENT_CAPTURE_WORKFLOW_CAPTURE_MEMORY_PAGES, 7LL, v2);
  }
  return result;
}
