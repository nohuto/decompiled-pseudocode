/*
 * XREFs of _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x18008AE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CDesktopManager::s_csDwmInstance__()
{
  InitializeCriticalSection(&CDesktopManager::s_csDwmInstance);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CDesktopManager::s_csDwmInstance__);
}
