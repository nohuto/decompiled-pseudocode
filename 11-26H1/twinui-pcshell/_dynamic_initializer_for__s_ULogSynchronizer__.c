/*
 * XREFs of _dynamic_initializer_for__s_ULogSynchronizer__ @ 0x180012B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__s_ULogSynchronizer__()
{
  InitializeCriticalSection(&CriticalSection);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_ULogSynchronizer__);
}
