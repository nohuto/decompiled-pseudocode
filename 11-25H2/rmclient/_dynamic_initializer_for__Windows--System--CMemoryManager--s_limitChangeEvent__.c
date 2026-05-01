/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180011A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__()
{
  InitializeSRWLock(&stru_18002FD48);
  InitializeSRWLock(&SRWLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_limitChangeEvent__);
}
