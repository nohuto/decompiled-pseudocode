/*
 * XREFs of ?Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802901FC
 * Callers:
 *     ??$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z @ 0x180290188 (--$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z.c)
 *     ?ShellView_DismissRequested@GamingOverlayTelemetry@@SAXXZ @ 0x180354060 (-ShellView_DismissRequested@GamingOverlayTelemetry@@SAXXZ.c)
 *     ?ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ @ 0x18035408C (-ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VGamingOverlayTelemetry@@@details@wil@@QEAAPEAVGamingOverlayTelemetry@@P6AXXZ@Z @ 0x18029021C (-get@-$static_lazy@VGamingOverlayTelemetry@@@details@wil@@QEAAPEAVGamingOverlayTelemetry@@P6AXXZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingOverlayTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<GamingOverlayTelemetry>::get(
                                             a1,
                                             _lambda_8eb181b840f08d5270baf7b0794c9c9c_::_lambda_invoker_cdecl_)
                                         + 8);
}
