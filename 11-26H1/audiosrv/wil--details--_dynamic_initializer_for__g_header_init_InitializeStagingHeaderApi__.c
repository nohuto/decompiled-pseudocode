/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__ @ 0x1800084B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__())(CVolumeControlBase *__hidden this)
{
  void (__fastcall *result)(CVolumeControlBase *__hidden); // rax

  g_wil_details_apiGetFeatureEnabledState = (__int64)wil::details::GetFeatureEnabledStateHelper;
  g_wil_details_apiRecordFeatureUsage = (__int64)RecordFeatureUsage;
  g_wil_details_apiSubscribeFeatureStateChangeNotification = (__int64)SubscribeFeatureStateChangeNotification;
  g_wil_details_apiUnsubscribeFeatureStateChangeNotification = (__int64)UnsubscribeFeatureStateChangeNotification;
  result = CVolumeControlBase::ReloadVolumeState;
  g_wil_details_realtimeFeatureUsageHook = (__int64)CVolumeControlBase::ReloadVolumeState;
  return result;
}
