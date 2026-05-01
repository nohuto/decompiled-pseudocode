/*
 * XREFs of ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18064E99C
 * Callers:
 *     ??$RdpShellExtensionsProcessed@AEAIAEAIAEAI@RdpShellExtensionHostTelemetry@@SAXAEAI00@Z @ 0x18064D0EC (--$RdpShellExtensionsProcessed@AEAIAEAIAEAI@RdpShellExtensionHostTelemetry@@SAXAEAI00@Z.c)
 *     _lambda_27cd2e73ea263861ea4b21bcac0743fb_::operator() @ 0x18064D9E8 (_lambda_27cd2e73ea263861ea4b21bcac0743fb_--operator().c)
 *     _lambda_60171be431ab7e306603b28a1d6e78d6_::operator() @ 0x18064DA6C (_lambda_60171be431ab7e306603b28a1d6e78d6_--operator().c)
 *     ?CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18064DDB0 (-CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x18064E3D4 (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 *     ?subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x18064F060 (-subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x18064F0B0 (-unsubscribe_from_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VRdpShellExtensionHostTelemetry@@@details@wil@@QEAAPEAVRdpShellExtensionHostTelemetry@@P6AXXZ@Z @ 0x18064EF70 (-get@-$static_lazy@VRdpShellExtensionHostTelemetry@@@details@wil@@QEAAPEAVRdpShellExtensionHostT.c)
 */

const struct _tlgProvider_t *__fastcall RdpShellExtensionHostTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<RdpShellExtensionHostTelemetry>::get(
                                             a1,
                                             _lambda_3cd2543f69658f6f3420ce7395415b24_::_lambda_invoker_cdecl_)
                                         + 8);
}
