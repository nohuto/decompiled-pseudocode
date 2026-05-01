/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180010B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__()
{
  InitializeSRWLock(&stru_18002DC80);
  InitializeSRWLock(&stru_18002DC88);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_limitChangeEvent__);
}
