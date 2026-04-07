/*
 * XREFs of atexit @ 0x18009ABC4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800026F0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180002820 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     _dynamic_initializer_for__ColorCache::_lock__ @ 0x180002850 (_dynamic_initializer_for__ColorCache--_lock__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800028C0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800028E0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180002900 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18004B830 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18004CF00 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18004DA3C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180067AF0 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18007D55C (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     _dynamic_initializer_for__ColorCache::_cachedColors__ @ 0x180089050 (_dynamic_initializer_for__ColorCache--_cachedColors__.c)
 *     _dynamic_initializer_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x180089E70 (_dynamic_initializer_for__CWindowBorder--CCachedBorderBrush--s_cache__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x18008A200 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x18008AE80 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18009AD00 (__scrt_initialize_thread_safe_statics.c)
 *     ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x1800BC148 (-get@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemet.c)
 *     ?get@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScalingCompatTelemetry@ScalingCompatTelemetry@@P6AXXZ@Z @ 0x1800EA618 (-get@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScali.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800EA6BC (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     _onexit @ 0x18009AB84 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
