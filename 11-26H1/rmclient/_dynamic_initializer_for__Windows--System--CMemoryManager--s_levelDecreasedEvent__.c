/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x1800104B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__()
{
  InitializeSRWLock(&stru_18002DCB8);
  InitializeSRWLock(&stru_18002DCC0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__);
}
