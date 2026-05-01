/*
 * XREFs of _dynamic_initializer_for__s_cachedIslandWindow__ @ 0x180192820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__s_cachedIslandWindow__()
{
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 312LL) = 0LL;
  return _tlregdtor(dynamic_atexit_destructor_for__s_cachedIslandWindow__);
}
