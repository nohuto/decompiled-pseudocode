/*
 * XREFs of __dyn_tls_on_demand_init @ 0x18009CA64
 * Callers:
 *     ?DecrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x180171A9C (-DecrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ.c)
 *     ?GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ @ 0x180172BE4 (-GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ.c)
 *     ?IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x180173634 (-IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void _dyn_tls_on_demand_init()
{
  _dyn_tls_init(0LL, 2);
}
