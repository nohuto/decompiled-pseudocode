/*
 * XREFs of ??$init_once_nothrow@V_lambda_7d151714ca0074b33c977dd82f5c8610_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_7d151714ca0074b33c977dd82f5c8610_@@PEA_N@Z @ 0x18068B874
 * Callers:
 *     ?IsPackagedBrowserReplacementActivated@Private@BrowserReplacementVariant@@YA_NXZ @ 0x180693D20 (-IsPackagedBrowserReplacementActivated@Private@BrowserReplacementVariant@@YA_NXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 wil::init_once_nothrow<_lambda_7d151714ca0074b33c977dd82f5c8610_>()
{
  const char *v0; // r9
  WINBOOL fPending; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  fPending = 0;
  if ( !__std_init_once_begin_initialize(
          &`BrowserReplacementVariant::Private::IsPackagedBrowserReplacementActivated'::`2'::s_checkIfOneCoreOnce,
          0,
          &fPending,
          0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x36C, (__int64)"wil", v0);
  if ( fPending )
  {
    `BrowserReplacementVariant::Private::IsPackagedBrowserReplacementActivated'::`2'::s_isOneCore = GetSystemMetrics(6144) == 0;
    InitOnceComplete(
      &`BrowserReplacementVariant::Private::IsPackagedBrowserReplacementActivated'::`2'::s_checkIfOneCoreOnce,
      0,
      0LL);
  }
  return 0LL;
}
