/*
 * XREFs of ?Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180350F68
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VGamingPostureUXTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x180341F6C (--1-$_TlgActivityBase@V-$ActivityData@VGamingPostureUXTelemetryProvider@@U_TlgReflectorTag_Param.c)
 *     ?EnteredUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ @ 0x180346614 (-EnteredUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ.c)
 *     ?ExitedUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ @ 0x18034674C (-ExitedUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18034DF20 (-NotifyFailure@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefle.c)
 *     ?StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z @ 0x18035418C (-StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180354F58 (-Stop@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_P.c)
 *     ?StopActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@MEAAXXZ @ 0x180355090 (-StopActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VGamingPostureUXTelemetryProvider@@@details@wil@@QEAAPEAVGamingPostureUXTelemetryProvider@@P6AXXZ@Z @ 0x180359554 (-get@-$static_lazy@VGamingPostureUXTelemetryProvider@@@details@wil@@QEAAPEAVGamingPostureUXTelem.c)
 */

const struct _tlgProvider_t *__fastcall GamingPostureUXTelemetryProvider::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<GamingPostureUXTelemetryProvider>::get(
                                             a1,
                                             _lambda_d28f0de400df83458d4d1deb2da0fdc7_::_lambda_invoker_cdecl_)
                                         + 8);
}
