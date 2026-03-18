/*
 * XREFs of _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x180007580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CManipulationManager::s_InputQueue__()
{
  InitializeCriticalSection(&stru_1803DCB88);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__);
}
