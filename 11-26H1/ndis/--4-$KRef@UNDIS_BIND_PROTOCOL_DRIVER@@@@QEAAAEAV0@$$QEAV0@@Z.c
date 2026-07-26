/*
 * XREFs of ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x140138A70
 * Callers:
 *     NdisRegisterProtocol @ 0x1400BBFE0 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400BC420 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

__int64 *__fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdi

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a1, a2, a3);
    *a1 = v4;
  }
  return a1;
}
