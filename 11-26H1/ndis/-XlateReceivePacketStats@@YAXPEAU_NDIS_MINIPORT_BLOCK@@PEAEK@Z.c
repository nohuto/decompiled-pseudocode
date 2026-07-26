/*
 * XREFs of ?XlateReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x140057BA0
 * Callers:
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1400577A0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XlateReceivePacketStats(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2, unsigned int a3)
{
  _NDIS_MINIPORT_STATS *BottomIfStats; // rax
  __int64 Number; // r10

  if ( a1->MajorNdisVersion < 6u )
  {
    BottomIfStats = a1->BottomIfStats;
    Number = KeGetPcr()->Prcb.Number;
    BottomIfStats[Number].ifHCInOctets += a3;
    if ( a1->MediaType == NdisMedium802_3 )
    {
      if ( *a2 == 0xFF )
      {
        if ( a2[1] == 0xFF && a2[2] == 0xFF && a2[3] == 0xFF && a2[4] == 0xFF && a2[5] == 0xFF )
        {
          ++a1->BottomIfStats->ifHCInBroadcastPkts;
          a1->BottomIfStats->ifHCInBroadcastOctets += a3;
          return;
        }
      }
      else if ( (*a2 & 1) == 0 )
      {
        goto LABEL_5;
      }
      ++BottomIfStats[Number].ifHCInMulticastPkts;
      BottomIfStats[Number].ifHCInMulticastOctets += a3;
      return;
    }
LABEL_5:
    ++BottomIfStats[Number].ifHCInUcastPkts;
    BottomIfStats[Number].ifHCInUcastOctets += a3;
  }
}
