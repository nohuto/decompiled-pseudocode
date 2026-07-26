/*
 * XREFs of ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140169840
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisMSleep @ 0x14004BF20 (NdisMSleep.c)
 */

void __fastcall ndisFilterWaitForPnPComplete(struct _NDIS_FILTER_BLOCK *a1)
{
  while ( a1->PnPRef.ReferenceCount )
    NdisMSleep(0xC350u);
}
