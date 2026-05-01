/*
 * XREFs of _dynamic_atexit_destructor_for__s_ULogSynchronizer__ @ 0x1806E0000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__s_ULogSynchronizer__()
{
  DeleteCriticalSection(&CriticalSection);
}
