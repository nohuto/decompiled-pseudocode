/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x180010740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__()
{
  InitializeSRWLock(&stru_18002DC98);
  InitializeSRWLock(&stru_18002DCA0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__);
}
