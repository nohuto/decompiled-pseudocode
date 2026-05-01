/*
 * XREFs of atexit @ 0x180012DEC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001070 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x18000F920 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x1800104B0 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_levelDecreasedEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x180010740 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_levelIncreasedEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180010B60 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x180010BE0 (_dynamic_initializer_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--Defaul.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x180010E40 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_pProxy__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180010FF0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 * Callees:
 *     _onexit_0 @ 0x180012D50 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
