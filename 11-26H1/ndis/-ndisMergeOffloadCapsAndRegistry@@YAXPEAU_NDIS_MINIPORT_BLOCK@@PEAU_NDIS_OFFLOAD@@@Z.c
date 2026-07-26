/*
 * XREFs of ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x140090530
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMergeOffloadCapsAndRegistry(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  int v2; // r8d
  __int16 v3; // r9
  int v4; // r8d
  __int16 v5; // r9
  int v6; // r8d
  char v7; // r9
  _DWORD *v8; // r8
  unsigned int Value; // eax
  unsigned __int8 *p_Ah; // r9
  unsigned __int8 *p_Esp; // r8
  UCHAR Revision; // r8
  USHORT Size; // r9

  if ( a2->Header.Type == 0xA7 && a2->Header.Size >= 0x70u && a2->Header.Revision )
  {
    if ( (a1->OffloadRegistry.Value & 0x400) != 0 )
    {
      *((_DWORD *)&a2->LsoV1.IPv4 + 3) &= 0xFFFFFFF0;
      *(_QWORD *)&a2->LsoV1.IPv4.Encapsulation = 0LL;
      a2->LsoV1.IPv4.MinSegmentCount = 0;
    }
    if ( (a1->OffloadRegistry.Value & 0x1000) != 0 )
    {
      *((_DWORD *)&a2->LsoV2.IPv6 + 3) &= 0xFFFFFFF0;
      *(_QWORD *)&a2->LsoV2.IPv6.Encapsulation = 0LL;
      a2->LsoV2.IPv6.MinSegmentCount = 0;
    }
    if ( (a1->OffloadRegistry.Value & 0x800) != 0 )
    {
      *(_QWORD *)&a2->LsoV2.IPv4.Encapsulation = 0LL;
      a2->LsoV2.IPv4.MinSegmentCount = 0;
    }
    v2 = *((_DWORD *)&a2->Checksum.IPv4Transmit + 1);
    if ( (a1->OffloadRegistry.Value & 1) != 0 )
    {
      v2 &= 0xFFFFFCFC;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v2;
    }
    v3 = v2;
    if ( (a1->OffloadRegistry.Value & 4) != 0 )
    {
      v2 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v2;
      v3 = v2;
    }
    if ( (a1->OffloadRegistry.Value & 0x10) != 0 )
    {
      v3 = v2 & 0xFF3F;
      *((_DWORD *)&a2->Checksum.IPv4Transmit + 1) = v2 & 0xFFFFFF3F;
    }
    if ( (v3 & 0x3F0) == 0 )
      a2->Checksum.IPv4Transmit.Encapsulation = 0;
    v4 = *((_DWORD *)&a2->Checksum.IPv4Receive + 1);
    if ( (a1->OffloadRegistry.Value & 2) != 0 )
    {
      v4 &= 0xFFFFFCFC;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v4;
    }
    v5 = v4;
    if ( (a1->OffloadRegistry.Value & 8) != 0 )
    {
      v4 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v4;
      v5 = v4;
    }
    if ( (a1->OffloadRegistry.Value & 0x20) != 0 )
    {
      v5 = v4 & 0xFF3F;
      *((_DWORD *)&a2->Checksum.IPv4Receive + 1) = v4 & 0xFFFFFF3F;
    }
    if ( (v5 & 0x3F0) == 0 )
      a2->Checksum.IPv4Receive.Encapsulation = 0;
    v6 = *((_DWORD *)&a2->Checksum.IPv6Transmit + 1);
    if ( (a1->OffloadRegistry.Value & 0x40) != 0 )
    {
      v6 &= 0xFFFFFFC3;
      *((_DWORD *)&a2->Checksum.IPv6Transmit + 1) = v6;
    }
    v7 = v6;
    if ( (a1->OffloadRegistry.Value & 0x100) != 0 )
    {
      v7 = v6 & 0x3F;
      *((_DWORD *)&a2->Checksum.IPv6Transmit + 1) = v6 & 0xFFFFFF3F;
    }
    if ( (v7 & 0xF3) == 0 )
      a2->Checksum.IPv6Transmit.Encapsulation = 0;
    v8 = (_DWORD *)&a2->Checksum.IPv6Receive + 1;
    if ( (a1->OffloadRegistry.Value & 0x80u) != 0 )
      *v8 &= 0xFFFFFFC3;
    if ( (a1->OffloadRegistry.Value & 0x200) != 0 )
      *v8 &= 0xFFFFFF3F;
    if ( (*v8 & 0xF3) == 0 )
      a2->Checksum.IPv6Receive.Encapsulation = 0;
    if ( (a1->OffloadRegistry.Value & 0x2000) != 0 )
      a2->IPsecV1.IPv4AH = 0;
    if ( (a1->OffloadRegistry.Value & 0x4000) != 0 )
      a2->IPsecV1.IPv4ESP = 0;
    if ( a2->Header.Revision >= 2u && a2->Header.Size >= 0x90u )
    {
      Value = a1->OffloadRegistry.Value;
      p_Ah = &a2->IPsecV2.Ah;
      if ( (Value & 0x400000) != 0 )
      {
        a2->IPsecV2.IPv6Supported = 0;
        if ( (a1->OffloadRegistry.Value & 0x100000) != 0 )
          *p_Ah = 0;
        p_Esp = &a2->IPsecV2.Esp;
        if ( (a1->OffloadRegistry.Value & 0x200000) != 0 )
          *p_Esp = 0;
        if ( (a1->OffloadRegistry.Value & 0x300000) != 0x300000 )
          goto LABEL_57;
      }
      else
      {
        if ( (Value & 0x40000) != 0 )
          *p_Ah = 0;
        p_Esp = &a2->IPsecV2.Esp;
        if ( (a1->OffloadRegistry.Value & 0x80000) != 0 )
          *p_Esp = 0;
        if ( (a1->OffloadRegistry.Value & 0xC0000) != 0xC0000 )
          goto LABEL_57;
      }
      *p_Esp = 0;
      *p_Ah = 0;
LABEL_57:
      if ( (a1->OffloadRegistry.Value & 0x3C0000) == 0x3C0000 )
      {
        *(_OWORD *)&a2->IPsecV2.Encapsulation = 0LL;
        *(_OWORD *)&a2->IPsecV2.UdpEsp = 0LL;
      }
      if ( a2->Header.Revision >= 3u && a2->Header.Size >= 0x9Cu )
      {
        if ( (a1->OffloadRegistry.Value & 0x800000) != 0 )
          a2->Rsc.IPv4.Enabled = 0;
        if ( (a1->OffloadRegistry.Value & 0x1000000) != 0 )
          a2->Rsc.IPv6.Enabled = 0;
        if ( (a1->OffloadRegistry.Value & 0x2000000) != 0 )
          a2->EncapsulatedPacketTaskOffloadGre = 0LL;
        Revision = a2->Header.Revision;
        if ( Revision >= 6u )
        {
          Size = a2->Header.Size;
          if ( Size >= 0xD8u )
          {
            if ( (a1->OffloadRegistry.Value & 0x10000000) != 0 )
            {
              *((_DWORD *)&a2->UdpSegmentation.IPv4 + 2) &= 0xFFFFFFC0;
              *(_QWORD *)&a2->UdpSegmentation.IPv4.Encapsulation = 0LL;
            }
            if ( (a1->OffloadRegistry.Value & 0x20000000) != 0 )
            {
              *((_DWORD *)&a2->UdpSegmentation.IPv6 + 2) &= 0xFFFFFFC0;
              *((_DWORD *)&a2->UdpSegmentation.IPv6 + 3) &= 0xFFFFFFFC;
              *(_QWORD *)&a2->UdpSegmentation.IPv6.Encapsulation = 0LL;
            }
            if ( Revision >= 8u && Size >= 0xD9u && (a1->OffloadRegistry.Value & 0x40000000) != 0 )
              a2->UdpRsc.Enabled = 0;
          }
        }
      }
    }
  }
}
