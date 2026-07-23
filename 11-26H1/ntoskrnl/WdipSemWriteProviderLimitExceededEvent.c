/*
 * XREFs of WdipSemWriteProviderLimitExceededEvent @ 0x1408275A4
 * Callers:
 *     WdipSemUpdateProviderTableWithEvent @ 0x140B630F4 (WdipSemUpdateProviderTableWithEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140AD7E84 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemWriteProviderLimitExceededEvent(__int64 a1)
{
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v2[0] = a1;
  v2[1] = 16LL;
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_INIT_PROVIDER_MAX, 0LL, 1LL, v2);
}
