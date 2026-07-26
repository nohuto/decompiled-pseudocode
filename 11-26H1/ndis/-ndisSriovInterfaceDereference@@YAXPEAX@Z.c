/*
 * XREFs of ?ndisSriovInterfaceDereference@@YAXPEAX@Z @ 0x1400E55D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisSriovInterfaceDereference(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisDereferenceMiniport(a1, 0x44u);
}
