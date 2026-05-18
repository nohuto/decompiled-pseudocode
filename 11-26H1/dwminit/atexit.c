/*
 * XREFs of atexit @ 0x1800025C4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001E00 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001E20 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__gDwmStateLock__ @ 0x180001E40 (_dynamic_initializer_for__gDwmStateLock__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001E60 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001E80 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180002000 (_dynamic_initializer_for__g_PortClient__.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800025F0 (__scrt_initialize_thread_safe_statics.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001035C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x1800111D8 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 * Callees:
 *     _onexit @ 0x180002584 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
