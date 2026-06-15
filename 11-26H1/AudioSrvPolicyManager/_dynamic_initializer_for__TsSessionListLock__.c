/*
 * XREFs of _dynamic_initializer_for__TsSessionListLock__ @ 0x180001C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__TsSessionListLock__()
{
  InitializeCriticalSectionEx(&stru_180068A08, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__TsSessionListLock__);
}
