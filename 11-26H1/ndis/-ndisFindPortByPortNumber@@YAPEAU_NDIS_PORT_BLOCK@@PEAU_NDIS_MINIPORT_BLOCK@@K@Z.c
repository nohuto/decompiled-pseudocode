/*
 * XREFs of ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140072390
 * Callers:
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1400AACBC (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     NdisMFreePort @ 0x1400AADB0 (NdisMFreePort.c)
 *     ?ndisOidPrePortState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE990 (-ndisOidPrePortState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PORT_BLOCK *__fastcall ndisFindPortByPortNumber(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_PORT_BLOCK *p_PortList; // rcx
  struct _NDIS_PORT_BLOCK *result; // rax

  p_PortList = (struct _NDIS_PORT_BLOCK *)&a1->PortList;
  for ( result = (struct _NDIS_PORT_BLOCK *)p_PortList->Link.Flink;
        result != p_PortList;
        result = (struct _NDIS_PORT_BLOCK *)result->Link.Flink )
  {
    if ( result->PortCharacteristics.PortNumber == a2 )
      return result;
    if ( result->PortCharacteristics.PortNumber > a2 )
      break;
  }
  return 0LL;
}
