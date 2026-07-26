/*
 * XREFs of NdisResetEvent @ 0x140053EA0
 * Callers:
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185630 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisResetEvent(PNDIS_EVENT Event)
{
  KeClearEvent(&Event->Event);
}
