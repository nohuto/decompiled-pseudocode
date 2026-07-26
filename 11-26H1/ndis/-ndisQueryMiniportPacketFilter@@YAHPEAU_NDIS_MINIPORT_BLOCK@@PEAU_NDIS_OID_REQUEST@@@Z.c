/*
 * XREFs of ?ndisQueryMiniportPacketFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C0D18
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140034F20 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisQueryMiniportPacketFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  NDIS_REQUEST_TYPE RequestType; // r8d
  unsigned int MiniportPacketFilter; // r10d
  __int64 result; // rax
  _NDIS_MEDIUM MiniportMediaType; // ecx

  RequestType = a2->RequestType;
  MiniportPacketFilter = 0;
  result = 0LL;
  if ( RequestType == NdisRequestQueryStatistics || RequestType == NdisRequestQueryInformation )
  {
    if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
    {
      MiniportMediaType = a1->MiniportMediaType;
      if ( MiniportMediaType )
      {
        if ( MiniportMediaType == NdisMediumNative802_11 )
          result = 259LL;
      }
      else
      {
        MiniportPacketFilter = a1->EthDB->MiniportPacketFilter;
      }
      *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = MiniportPacketFilter;
      *(_QWORD *)&a2->DATA.METHOD_INFORMATION.OutputBufferLength = 4LL;
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
      return 3221291028LL;
    }
  }
  return result;
}
