/*
 * XREFs of wil::details::_lambda_3_::operator() @ 0x14000725C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x140001EA0 (wil--details--_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__.c)
 * Callees:
 *     <none>
 */

__int64 wil::details::_lambda_3_::operator()()
{
  g_wil_details_internalRecordFeatureUsage = (__int64)wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  return 1LL;
}
