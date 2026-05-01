/*
 * XREFs of ?IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x1803F8EC4
 * Callers:
 *     ?_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z @ 0x1803FA7B8 (-_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z.c)
 * Callees:
 *     __dyn_tls_on_demand_init @ 0x1802CE154 (__dyn_tls_on_demand_init.c)
 */

void Windows::Internal::ComTaskPool::IncrementThreadRecursionDepth(void)
{
  __int64 v0; // rbx

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( !*(_BYTE *)(v0 + 20) )
    _dyn_tls_on_demand_init();
  ++*(_DWORD *)(v0 + 304);
}
