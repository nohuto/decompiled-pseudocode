/*
 * XREFs of _lambda_e7a8be4bc4c1531f81954e303b61972a_::operator() @ 0x18035A2E0
 * Callers:
 *     _dynamic_initializer_for__g_header_init_ResultLoggingInitialize__ @ 0x18020D590 (_dynamic_initializer_for__g_header_init_ResultLoggingInitialize__.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18028C95C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 lambda_e7a8be4bc4c1531f81954e303b61972a_::operator()()
{
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)wil::ErrorHandlingHelpers::FallbackTelemetryCallback )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))wil::ErrorHandlingHelpers::FallbackTelemetryCallback;
  return 1LL;
}
