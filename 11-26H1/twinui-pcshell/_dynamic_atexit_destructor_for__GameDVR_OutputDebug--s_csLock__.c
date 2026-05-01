/*
 * XREFs of _dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_csLock__ @ 0x180708F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_csLock__()
{
  DeleteCriticalSection(&GameDVR_OutputDebug::s_csLock);
}
