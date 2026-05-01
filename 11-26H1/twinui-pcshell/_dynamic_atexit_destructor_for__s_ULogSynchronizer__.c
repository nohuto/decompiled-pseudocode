/*
 * XREFs of _dynamic_atexit_destructor_for__s_ULogSynchronizer__ @ 0x180708C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__s_ULogSynchronizer__()
{
  DeleteCriticalSection(&CriticalSection);
}
