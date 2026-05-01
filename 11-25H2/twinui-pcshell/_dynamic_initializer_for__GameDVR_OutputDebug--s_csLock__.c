/*
 * XREFs of _dynamic_initializer_for__GameDVR_OutputDebug::s_csLock__ @ 0x180227470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__GameDVR_OutputDebug::s_csLock__()
{
  InitializeCriticalSectionEx(&GameDVR_OutputDebug::s_csLock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_csLock__);
}
