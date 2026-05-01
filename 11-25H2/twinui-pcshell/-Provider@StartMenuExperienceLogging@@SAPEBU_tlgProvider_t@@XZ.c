/*
 * XREFs of ?Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001838C
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800166A0 (-ReportStopActivity@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_.c)
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180016930 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ @ 0x180018090 (-StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180018500 (-zInternalStart@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x180018784 (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x180217C18 (--1-$_TlgActivityBase@V-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x18037EB88 (--$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z.c)
 *     ??1Completer@?$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAA@XZ @ 0x18037F76C (--1Completer@-$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?NotifyFailure@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180382540 (-NotifyFailure@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z @ 0x180382B8C (-PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging@@P6AXXZ@Z @ 0x18001856C (-get@-$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging.c)
 */

const struct _tlgProvider_t *__fastcall StartMenuExperienceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<StartMenuExperienceLogging>::get(
                                             a1,
                                             _lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_)
                                         + 8);
}
