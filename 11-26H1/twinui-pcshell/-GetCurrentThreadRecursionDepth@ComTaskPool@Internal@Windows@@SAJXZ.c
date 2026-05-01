/*
 * XREFs of ?GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ @ 0x1803F84F4
 * Callers:
 *     ?_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z @ 0x1803FA7B8 (-_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z.c)
 * Callees:
 *     __dyn_tls_on_demand_init @ 0x1802CE154 (__dyn_tls_on_demand_init.c)
 */

__int64 Windows::Internal::ComTaskPool::GetCurrentThreadRecursionDepth(void)
{
  __int64 v0; // rbx

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( !*(_BYTE *)(v0 + 20) )
    _dyn_tls_on_demand_init();
  return *(unsigned int *)(v0 + 304);
}
