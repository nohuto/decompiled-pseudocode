/*
 * XREFs of atexit @ 0x18008E594
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180002690 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__ColorCache::_lock__ @ 0x1800027D0 (_dynamic_initializer_for__ColorCache--_lock__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180002840 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180002860 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180002880 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800028E0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x180002900 (_dynamic_initializer_for__CWindowBorder--CCachedBorderBrush--s_cache__.c)
 *     _dynamic_initializer_for__CFallbackBitmapSource::s_instance__ @ 0x180002920 (_dynamic_initializer_for__CFallbackBitmapSource--s_instance__.c)
 *     _dynamic_initializer_for__CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache__ @ 0x180002940 (_dynamic_initializer_for__CAccentAcrylicBlurBehind--CNoiseSurfaceCache--s_cache__.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180025070 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180041484 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18006F7C0 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     _dynamic_initializer_for__ColorCache::_cachedColors__ @ 0x180078640 (_dynamic_initializer_for__ColorCache--_cachedColors__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x180079C10 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x18007C990 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x1800BB8D8 (-get@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemet.c)
 *     ?get@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScalingCompatTelemetry@ScalingCompatTelemetry@@P6AXXZ@Z @ 0x1800E612C (-get@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScali.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800E61E0 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     _onexit @ 0x18008E554 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
