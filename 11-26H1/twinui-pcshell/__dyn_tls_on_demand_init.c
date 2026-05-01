/*
 * XREFs of __dyn_tls_on_demand_init @ 0x1802CE154
 * Callers:
 *     ?DecrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x1803F7510 (-DecrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ.c)
 *     ?GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ @ 0x1803F84F4 (-GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ.c)
 *     ?IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x1803F8EC4 (-IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void _dyn_tls_on_demand_init()
{
  _dyn_tls_init(0LL, 2);
}
