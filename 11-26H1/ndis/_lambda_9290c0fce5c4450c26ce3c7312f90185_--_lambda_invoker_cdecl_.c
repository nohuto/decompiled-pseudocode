/*
 * XREFs of _lambda_9290c0fce5c4450c26ce3c7312f90185_::_lambda_invoker_cdecl_ @ 0x140144E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015C000 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_9290c0fce5c4450c26ce3c7312f90185_::_lambda_invoker_cdecl_(
        __int64 a1,
        NDIS_BIND_DRIVER_BASE **a2,
        __int64 a3)
{
  _LIST_ENTRY *Blink; // rax

  Blink = (*a2)[1].BindLinks.Blink;
  if ( Blink && ((__int64)Blink[4].Flink & 0x10000000) != 0 )
    NDIS_BIND_DRIVER_BASE::ForEachLink(*a2, lambda_ecdb32753e2b7a1d37d87608ec168c64_::_lambda_invoker_cdecl_);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a2, a2, a3);
}
