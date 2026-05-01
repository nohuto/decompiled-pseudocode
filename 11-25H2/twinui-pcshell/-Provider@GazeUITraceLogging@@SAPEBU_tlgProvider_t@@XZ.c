/*
 * XREFs of ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18047C8B4
 * Callers:
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180258A78 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180258B60 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180258EE0 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180259094 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     _lambda_593fbb47aeab52a54eb78728611100af_::operator() @ 0x18047B5CC (_lambda_593fbb47aeab52a54eb78728611100af_--operator().c)
 *     _lambda_5c1050bbbdc103999695eee0b16b4eb6_::operator() @ 0x18047B6F8 (_lambda_5c1050bbbdc103999695eee0b16b4eb6_--operator().c)
 *     _lambda_adc2f07ce144224db42416a33fd3cec5_::operator() @ 0x18047B810 (_lambda_adc2f07ce144224db42416a33fd3cec5_--operator().c)
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18047C630 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18047C6F0 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18047DE00 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?get@?$static_lazy@VGazeUITraceLogging@@@details@wil@@QEAAPEAVGazeUITraceLogging@@P6AXXZ@Z @ 0x18047E4A0 (-get@-$static_lazy@VGazeUITraceLogging@@@details@wil@@QEAAPEAVGazeUITraceLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall GazeUITraceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<GazeUITraceLogging>::get(
                                             a1,
                                             _lambda_69dd1f8975ed348cbbb0baa0bbfe70f2_::_lambda_invoker_cdecl_)
                                         + 8);
}
