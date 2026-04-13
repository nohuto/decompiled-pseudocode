/*
 * XREFs of ?GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ @ 0x1800313C4
 * Callers:
 *     ?_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z @ 0x18003DA14 (-_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z.c)
 * Callees:
 *     __dyn_tls_on_demand_init @ 0x180021994 (__dyn_tls_on_demand_init.c)
 */

__int64 Windows::Internal::ComTaskPool::GetCurrentThreadRecursionDepth(void)
{
  __int64 v0; // rbx

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( !*(_BYTE *)(v0 + 4) )
    _dyn_tls_on_demand_init();
  return *(unsigned int *)(v0 + 12);
}
