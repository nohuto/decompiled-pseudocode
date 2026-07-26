/*
 * XREFs of ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x14004A900
 * Callers:
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BFDF8 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPcwGetCpu(struct NDIS_PCW_CONTEXT *a1)
{
  if ( *((_DWORD *)a1 + 4) == -1 )
    *((_DWORD *)a1 + 4) = KeGetPcr()->Prcb.Number;
  return *((unsigned int *)a1 + 4);
}
