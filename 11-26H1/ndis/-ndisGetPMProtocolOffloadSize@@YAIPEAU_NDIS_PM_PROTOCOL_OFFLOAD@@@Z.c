/*
 * XREFs of ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x14001F920
 * Callers:
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F390 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x14001F850 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140046890 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B68C0 (-ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetPMProtocolOffloadSize(struct _NDIS_PM_PROTOCOL_OFFLOAD *a1)
{
  if ( a1->Header.Revision == 1 )
    return 240LL;
  else
    return 256LL;
}
