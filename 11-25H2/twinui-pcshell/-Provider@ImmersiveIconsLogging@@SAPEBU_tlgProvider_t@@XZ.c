/*
 * XREFs of ?Provider@ImmersiveIconsLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802BCEE8
 * Callers:
 *     ?StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ @ 0x1801CE4E0 (-StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801CE718 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?ReportStopActivity@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1801CE92C (-ReportStopActivity@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x1806577F4 (--1-$_TlgActivityBase@V-$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?NotifyFailure@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180658D40 (-NotifyFailure@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1806592E8 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x1802BCF08 (-get@-$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall ImmersiveIconsLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<ImmersiveIconsLogging>::get(
                                             a1,
                                             _lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_)
                                         + 8);
}
