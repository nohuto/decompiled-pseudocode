/*
 * XREFs of __dyn_tls_on_demand_init @ 0x180021994
 * Callers:
 *     ?DecrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x18002E214 (-DecrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ.c)
 *     ?GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ @ 0x1800313C4 (-GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ.c)
 *     ?IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x180033AFC (-IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 _dyn_tls_on_demand_init()
{
  return _dyn_tls_init(0LL, 2);
}
