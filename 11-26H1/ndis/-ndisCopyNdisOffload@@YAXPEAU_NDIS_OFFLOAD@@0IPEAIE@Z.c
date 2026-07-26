/*
 * XREFs of ?ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z @ 0x140071420
 * Callers:
 *     ?ndisOidPreOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140063830 (-ndisOidPreOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueryFilterOffloadCaps@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C0BC8 (-ndisQueryFilterOffloadCaps@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryMiniportOffloadCaps@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C0C74 (-ndisQueryMiniportOffloadCaps@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisCopyNdisOffload(
        struct _NDIS_OFFLOAD *a1,
        struct _NDIS_OFFLOAD *a2,
        unsigned int a3,
        unsigned int *a4,
        char a5)
{
  if ( a3 < 0xD9 )
  {
    if ( a3 < 0xD8 )
    {
      if ( a3 < 0xBC )
      {
        if ( a3 < 0xB1 )
        {
          if ( a3 < 0x9C )
          {
            if ( a3 < 0x90 )
            {
              if ( a3 < 0x70 )
              {
                *a4 = 0;
              }
              else
              {
                *(_OWORD *)&a1->Header.Type = *(_OWORD *)&a2->Header.Type;
                *(_OWORD *)((char *)&a1->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv4Receive + 4);
                *(_OWORD *)((char *)&a1->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv6Receive + 4);
                *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a1->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a2->LsoV1.IPv4 + 12);
                *(_OWORD *)&a1->IPsecV1.Supported.IPv4Options = *(_OWORD *)&a2->IPsecV1.Supported.IPv4Options;
                *(_OWORD *)&a1->LsoV2.IPv4.Encapsulation = *(_OWORD *)&a2->LsoV2.IPv4.Encapsulation;
                *(_OWORD *)&a1->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&a2->LsoV2.IPv6.MaxOffLoadSize;
                a1->Header.Revision = 1;
                a1->Header.Size = 112;
                *a4 = 112;
              }
            }
            else
            {
              *(_OWORD *)&a1->Header.Type = *(_OWORD *)&a2->Header.Type;
              *(_OWORD *)((char *)&a1->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv4Receive + 4);
              *(_OWORD *)((char *)&a1->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv6Receive + 4);
              *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a1->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a2->LsoV1.IPv4 + 12);
              *(_OWORD *)&a1->IPsecV1.Supported.IPv4Options = *(_OWORD *)&a2->IPsecV1.Supported.IPv4Options;
              *(_OWORD *)&a1->LsoV2.IPv4.Encapsulation = *(_OWORD *)&a2->LsoV2.IPv4.Encapsulation;
              *(_OWORD *)&a1->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&a2->LsoV2.IPv6.MaxOffLoadSize;
              a1->IPsecV2 = a2->IPsecV2;
              a1->Header.Revision = 2;
              a1->Header.Size = 144;
              *a4 = 144;
            }
          }
          else
          {
            *(_OWORD *)&a1->Header.Type = *(_OWORD *)&a2->Header.Type;
            *(_OWORD *)((char *)&a1->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv4Receive + 4);
            *(_OWORD *)((char *)&a1->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv6Receive + 4);
            *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a1->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a2->LsoV1.IPv4 + 12);
            *(_OWORD *)&a1->IPsecV1.Supported.IPv4Options = *(_OWORD *)&a2->IPsecV1.Supported.IPv4Options;
            *(_OWORD *)&a1->LsoV2.IPv4.Encapsulation = *(_OWORD *)&a2->LsoV2.IPv4.Encapsulation;
            *(_OWORD *)&a1->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&a2->LsoV2.IPv6.MaxOffLoadSize;
            a1->IPsecV2 = a2->IPsecV2;
            *(_QWORD *)&a1->Rsc.IPv4.Enabled = *(_QWORD *)&a2->Rsc.IPv4.Enabled;
            a1->EncapsulatedPacketTaskOffloadGre.MaxHeaderSizeSupported = a2->EncapsulatedPacketTaskOffloadGre.MaxHeaderSizeSupported;
            a1->Header.Revision = 3;
            a1->Header.Size = 156;
            *a4 = 156;
          }
        }
        else
        {
          *(_OWORD *)&a1->Header.Type = *(_OWORD *)&a2->Header.Type;
          *(_OWORD *)((char *)&a1->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv4Receive + 4);
          *(_OWORD *)((char *)&a1->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv6Receive + 4);
          *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a1->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a2->LsoV1.IPv4 + 12);
          *(_OWORD *)&a1->IPsecV1.Supported.IPv4Options = *(_OWORD *)&a2->IPsecV1.Supported.IPv4Options;
          *(_OWORD *)&a1->LsoV2.IPv4.Encapsulation = *(_OWORD *)&a2->LsoV2.IPv4.Encapsulation;
          *(_OWORD *)&a1->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&a2->LsoV2.IPv6.MaxOffLoadSize;
          a1->IPsecV2 = a2->IPsecV2;
          *(_OWORD *)&a1->Rsc.IPv4.Enabled = *(_OWORD *)&a2->Rsc.IPv4.Enabled;
          *(_OWORD *)&a1->EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = *(_OWORD *)&a2->EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
          a1->EncapsulationTypes = a2->EncapsulationTypes;
          a1->Header.Revision = 4;
          a1->Header.Size = 177;
          *a4 = 177;
          if ( a5 && a2->Header.Revision == 3 && (*(_DWORD *)&a2->EncapsulatedPacketTaskOffloadGre & 0xF0FFF) != 0 )
            a1->EncapsulationTypes |= 1u;
        }
      }
      else
      {
        *(_OWORD *)&a1->Header.Type = *(_OWORD *)&a2->Header.Type;
        *(_OWORD *)((char *)&a1->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv4Receive + 4);
        *(_OWORD *)((char *)&a1->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv6Receive + 4);
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a1->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a2->LsoV1.IPv4 + 12);
        *(_OWORD *)&a1->IPsecV1.Supported.IPv4Options = *(_OWORD *)&a2->IPsecV1.Supported.IPv4Options;
        *(_OWORD *)&a1->LsoV2.IPv4.Encapsulation = *(_OWORD *)&a2->LsoV2.IPv4.Encapsulation;
        *(_OWORD *)&a1->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&a2->LsoV2.IPv6.MaxOffLoadSize;
        a1->IPsecV2 = a2->IPsecV2;
        *(_OWORD *)&a1->Rsc.IPv4.Enabled = *(_OWORD *)&a2->Rsc.IPv4.Enabled;
        *(_OWORD *)&a1->EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = *(_OWORD *)&a2->EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
        *(_QWORD *)&a1->EncapsulationTypes = *(_QWORD *)&a2->EncapsulationTypes;
        a1->Rfc6877Xlat.Flags = a2->Rfc6877Xlat.Flags;
        a1->Header.Revision = 5;
        a1->Header.Size = 188;
        *a4 = 188;
        if ( a5 && a2->Header.Revision == 3 && (*(_DWORD *)&a2->EncapsulatedPacketTaskOffloadGre & 0xF0FFF) != 0 )
          a1->EncapsulationTypes |= 1u;
      }
    }
    else
    {
      *(_OWORD *)&a1->Header.Type = *(_OWORD *)&a2->Header.Type;
      *(_OWORD *)((char *)&a1->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv4Receive + 4);
      *(_OWORD *)((char *)&a1->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&a2->Checksum.IPv6Receive + 4);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a1->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&a2->LsoV1.IPv4 + 12);
      *(_OWORD *)&a1->IPsecV1.Supported.IPv4Options = *(_OWORD *)&a2->IPsecV1.Supported.IPv4Options;
      *(_OWORD *)&a1->LsoV2.IPv4.Encapsulation = *(_OWORD *)&a2->LsoV2.IPv4.Encapsulation;
      *(_OWORD *)&a1->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&a2->LsoV2.IPv6.MaxOffLoadSize;
      a1->IPsecV2 = a2->IPsecV2;
      *(_OWORD *)&a1->Rsc.IPv4.Enabled = *(_OWORD *)&a2->Rsc.IPv4.Enabled;
      *(_OWORD *)&a1->EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = *(_OWORD *)&a2->EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
      *(_OWORD *)&a1->EncapsulationTypes = *(_OWORD *)&a2->EncapsulationTypes;
      *(_OWORD *)&a1->UdpSegmentation.IPv4.MaxOffLoadSize = *(_OWORD *)&a2->UdpSegmentation.IPv4.MaxOffLoadSize;
      *((_QWORD *)&a1->UdpSegmentation.IPv6 + 1) = *((_QWORD *)&a2->UdpSegmentation.IPv6 + 1);
      a1->Header.Revision = 7;
      a1->Header.Size = 216;
      *a4 = 216;
      if ( a2->Header.Revision < 7u )
      {
        *(_DWORD *)&a1->EncapsulatedPacketTaskOffloadGre &= 0xFF0FFFFF;
        *(_DWORD *)&a1->EncapsulatedPacketTaskOffloadVxlan &= 0xFF0FFFFF;
      }
      if ( a5 && a2->Header.Revision == 3 && (*(_DWORD *)&a2->EncapsulatedPacketTaskOffloadGre & 0xF0FFF) != 0 )
        a1->EncapsulationTypes |= 1u;
    }
  }
  else
  {
    *a1 = *a2;
    a1->Header.Revision = 8;
    a1->Header.Size = 217;
    *a4 = 217;
    if ( a2->Header.Revision < 7u )
    {
      *(_DWORD *)&a1->EncapsulatedPacketTaskOffloadGre &= 0xFF0FFFFF;
      *(_DWORD *)&a1->EncapsulatedPacketTaskOffloadVxlan &= 0xFF0FFFFF;
    }
    if ( a5 && a2->Header.Revision == 3 && (*(_DWORD *)&a2->EncapsulatedPacketTaskOffloadGre & 0xF0FFF) != 0 )
      a1->EncapsulationTypes |= 1u;
  }
}
