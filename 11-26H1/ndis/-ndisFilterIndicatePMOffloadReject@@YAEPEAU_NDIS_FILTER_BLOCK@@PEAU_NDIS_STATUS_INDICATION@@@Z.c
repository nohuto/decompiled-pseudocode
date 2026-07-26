/*
 * XREFs of ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14008F3D0
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x140067F20 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

unsigned __int8 __fastcall ndisFilterIndicatePMOffloadReject(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_STATUS_INDICATION *a2)
{
  if ( a2->StatusBufferSize >= 4 )
  {
    if ( !LODWORD(a2->NdisReserved[2]) )
      return 0;
    if ( ndisDeletePatternEntry(&a1->PMProtocolOffloadList, *(_DWORD *)a2->StatusBuffer) )
      --LODWORD(a2->NdisReserved[2]);
  }
  return 1;
}
