/*
 * XREFs of ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1400B4314
 * Callers:
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14007C740 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     EthFilterDprIndicateReceive @ 0x140098150 (EthFilterDprIndicateReceive.c)
 * Callees:
 *     <none>
 */

void __fastcall ethFilterReceivePacketStats(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 Number; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // r9

  if ( a1->MajorNdisVersion < 6u && !a1->Miniport5InNdis6Mode )
  {
    Number = KeGetPcr()->Prcb.Number;
    BottomIfStats = a1->BottomIfStats;
    BottomIfStats[Number].ifHCInOctets += a3;
    if ( a1->MediaType == NdisMedium802_3 )
    {
      if ( *a2 == 0xFF )
      {
        if ( a2[1] == 0xFF && a2[2] == 0xFF && a2[3] == 0xFF && a2[4] == 0xFF && a2[5] == 0xFF )
        {
          ++BottomIfStats[Number].ifHCInBroadcastPkts;
          BottomIfStats[Number].ifHCInBroadcastOctets += a3;
          return;
        }
        goto LABEL_12;
      }
      if ( (*a2 & 1) != 0 )
      {
LABEL_12:
        ++BottomIfStats[Number].ifHCInMulticastPkts;
        BottomIfStats[Number].ifHCInMulticastOctets += a3;
        return;
      }
      ++BottomIfStats[Number].ifHCInUcastPkts;
      BottomIfStats[Number].ifHCInUcastOctets += a3;
    }
  }
}
