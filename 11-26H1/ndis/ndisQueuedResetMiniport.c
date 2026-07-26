/*
 * XREFs of ndisQueuedResetMiniport @ 0x1400A4280
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140081590 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 */

void __fastcall ndisQueuedResetMiniport(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMResetMiniportInternal((__int64)a2, 3);
  ndisDereferenceMiniport(a2, 8u);
  ExFreePoolWithTag(P, 0);
}
