/*
 * XREFs of ?Provider@AIXTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18056ECAC
 * Callers:
 *     ??$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N22@Z @ 0x18056AFA4 (--$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N22@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAIXTelemetryLogging@@@details@wil@@QEAAPEAVAIXTelemetryLogging@@P6AXXZ@Z @ 0x1805700AC (-get@-$static_lazy@VAIXTelemetryLogging@@@details@wil@@QEAAPEAVAIXTelemetryLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall AIXTelemetryLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<AIXTelemetryLogging>::get(
                                             a1,
                                             _lambda_945080ad272e394bfcbba9388ab05f77_::_lambda_invoker_cdecl_)
                                         + 8);
}
