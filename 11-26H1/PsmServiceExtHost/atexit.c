/*
 * XREFs of atexit @ 0x18006F454
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180003A60 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180003B30 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180003B50 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180003B70 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 * Callees:
 *     _onexit_0 @ 0x18006F3B8 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
