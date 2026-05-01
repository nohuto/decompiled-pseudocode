/*
 * XREFs of ?Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803ECE5C
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1803EB5D8 (--1-$_TlgActivityBase@V-$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x1803EB610 (--1Completer@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1803EBE7C (-FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1803EBEA8 (-FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803EC880 (-NotifyFailure@-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1803ECBCC (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ @ 0x1803ECF30 (-StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ.c)
 *     ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x1803ED044 (-Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z.c)
 *     ?StopActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@MEAAXXZ @ 0x1803ED2A0 (-StopActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x1803EDE44 (-get@-$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@.c)
 */

const struct _tlgProvider_t *__fastcall PenWorkspaceBrokerLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(
                                             a1,
                                             _lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_)
                                         + 8);
}
