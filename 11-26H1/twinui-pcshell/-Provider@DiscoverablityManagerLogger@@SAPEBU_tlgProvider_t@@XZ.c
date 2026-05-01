/*
 * XREFs of ?Provider@DiscoverablityManagerLogger@@SAPEBU_tlgProvider_t@@XZ @ 0x18061C1B8
 * Callers:
 *     ??$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeType@@@Z @ 0x1806184E0 (--$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeTy.c)
 *     ?FocusChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ @ 0x18061ABE0 (-FocusChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ.c)
 *     ?SnappedChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ @ 0x18061C6DC (-SnappedChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VDiscoverablityManagerLogger@@@details@wil@@QEAAPEAVDiscoverablityManagerLogger@@P6AXXZ@Z @ 0x18061CE04 (-get@-$static_lazy@VDiscoverablityManagerLogger@@@details@wil@@QEAAPEAVDiscoverablityManagerLogg.c)
 */

const struct _tlgProvider_t *__fastcall DiscoverablityManagerLogger::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<DiscoverablityManagerLogger>::get(
                                             a1,
                                             _lambda_81411513ad094842fbc17151a1395e28_::_lambda_invoker_cdecl_)
                                         + 8);
}
