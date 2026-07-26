/*
 * XREFs of ?ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400C2914
 * Callers:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140071930 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisTranslateOffloadSetsToTasks(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD_ENCAPSULATION *a2,
        struct _NDIS_OFFLOAD *a3)
{
  struct _NDIS_OFFLOAD_ENCAPSULATION *v3; // rsi
  unsigned __int8 *v4; // rbx
  bool v5; // bp
  char v6; // di
  char v7; // r14
  unsigned int Enabled; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned int Flags; // eax
  unsigned int v14; // edx

  v3 = a2;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      168,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1);
  }
  Enabled = v3->IPv4.Enabled;
  Offload = a1->Offload;
  v11 = v3->IPv6.Enabled;
  if ( Enabled == 1 )
  {
    v5 = Offload->MiniportCurrentConfig.LsoV1.IPv4.Encapsulation != 0;
    if ( Offload->MiniportCurrentConfig.Checksum.IPv4Transmit.Encapsulation
      || Offload->MiniportCurrentConfig.Checksum.IPv4Receive.Encapsulation )
    {
      v6 = 1;
    }
    if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.Encapsulation )
      v7 = 1;
  }
  if ( v11 == 1
    && (Offload->MiniportCurrentConfig.Checksum.IPv6Transmit.Encapsulation
     || Offload->MiniportCurrentConfig.Checksum.IPv6Receive.Encapsulation) )
  {
    v6 = 1;
  }
  *(_DWORD *)&Offload->MiniportTask[20] |= 1u;
  v12 = 28;
  *(_DWORD *)&Offload->MiniportTask[4] = 28;
  *(_DWORD *)Offload->MiniportTask = 1;
  *(_DWORD *)&Offload->MiniportTask[16] = 2;
  *(_DWORD *)&Offload->MiniportTask[24] = 14;
  if ( v5 || v6 == 1 || v7 == 1 )
  {
    v4 = &Offload->MiniportTask[28];
    *(_DWORD *)&Offload->MiniportTask[12] = 28;
    *(_DWORD *)&Offload->MiniportTask[32] = 24;
    *(_DWORD *)&Offload->MiniportTask[28] = 1;
  }
  else
  {
    *(_DWORD *)&Offload->MiniportTask[12] = 0;
  }
  if ( v6 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 4) = 16;
    v12 = 64;
    *((_DWORD *)v4 + 3) = 36;
    *(_OWORD *)(v4 + 20) = 0LL;
    if ( Enabled == 1 )
    {
      LODWORD(a2) = 0;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 0xC) == 4 )
      {
        *((_DWORD *)v4 + 5) = 2;
        LODWORD(a2) = 2;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 3) == 1 )
      {
        LODWORD(a2) = (unsigned int)a2 | 1;
        *((_DWORD *)v4 + 5) = (_DWORD)a2;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 0x30) == 0x10 )
      {
        LODWORD(a2) = (unsigned int)a2 | 4;
        *((_DWORD *)v4 + 5) = (_DWORD)a2;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 0xC0) == 0x40 )
      {
        LODWORD(a2) = (unsigned int)a2 | 8;
        *((_DWORD *)v4 + 5) = (_DWORD)a2;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1) & 0x300) == 0x100 )
      {
        LODWORD(a2) = (unsigned int)a2 | 0x10;
        *((_DWORD *)v4 + 5) = (_DWORD)a2;
      }
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 0xC) == 4 )
        *((_DWORD *)v4 + 6) |= 2u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 3) == 1 )
        *((_DWORD *)v4 + 6) |= 1u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 0x30) == 0x10 )
        *((_DWORD *)v4 + 6) |= 4u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 0xC0) == 0x40 )
        *((_DWORD *)v4 + 6) |= 8u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1) & 0x300) == 0x100 )
        *((_DWORD *)v4 + 6) |= 0x10u;
    }
    if ( v11 == 1 )
    {
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1) & 0xC) == 4 )
        *((_DWORD *)v4 + 7) |= 2u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1) & 0x30) == 0x10 )
        *((_DWORD *)v4 + 7) |= 4u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1) & 0xC0) == 0x40 )
        *((_DWORD *)v4 + 7) |= 8u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1) & 0xC) == 4 )
        *((_DWORD *)v4 + 8) |= 2u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1) & 0x30) == 0x10 )
        *((_DWORD *)v4 + 8) |= 4u;
      if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1) & 0xC0) == 0x40 )
        *((_DWORD *)v4 + 8) |= 8u;
    }
    if ( !v5 && !v7 )
      goto LABEL_92;
    v4 += *((unsigned int *)v4 + 3);
    *((_DWORD *)v4 + 1) = 24;
    *(_DWORD *)v4 = 1;
  }
  if ( v5 )
  {
    *((_DWORD *)v4 + 2) = 2;
    *((_DWORD *)v4 + 4) = 16;
    v12 += 36;
    *((_DWORD *)v4 + 3) = 36;
    *(_OWORD *)(v4 + 20) = 0LL;
    if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.LsoV1.IPv4 + 3) & 0xC) == 4 )
      v4[33] = 1;
    if ( (*((_DWORD *)&Offload->MiniportCurrentConfig.LsoV1.IPv4 + 3) & 3) == 1 )
      v4[32] = 1;
    *((_DWORD *)v4 + 6) = Offload->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
    *((_DWORD *)v4 + 7) = Offload->MiniportCurrentConfig.LsoV1.IPv4.MinSegmentCount;
    if ( !v7 )
      goto LABEL_92;
    v4 += *((unsigned int *)v4 + 3);
    *((_DWORD *)v4 + 1) = 24;
    *(_DWORD *)v4 = 1;
  }
  else if ( !v7 )
  {
    goto LABEL_93;
  }
  *((_QWORD *)v4 + 1) = 1LL;
  *((_DWORD *)v4 + 4) = 24;
  *(_OWORD *)(v4 + 20) = 0LL;
  v12 += 44;
  *(_QWORD *)(v4 + 36) = 0LL;
  if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined == 1 )
    *((_DWORD *)v4 + 5) = 1;
  *((_DWORD *)v4 + 6) = 0;
  if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.IPv4Options == 1 )
    *((_DWORD *)v4 + 7) = 1;
  Flags = Offload->MiniportCurrentConfig.IPsecV1.Supported.Flags;
  if ( Flags )
    *((_DWORD *)v4 + 8) = Flags;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 3) == 1 )
    *((_DWORD *)v4 + 9) |= 1u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 0xC) == 4 )
    *((_DWORD *)v4 + 9) |= 2u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 0x30) == 0x10 )
    *((_DWORD *)v4 + 9) |= 4u;
  v14 = *((_DWORD *)v4 + 9) & 0xFFFFFFF7;
  *((_DWORD *)v4 + 9) = v14;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 0x300) == 0x100 )
  {
    v14 |= 0x10u;
    *((_DWORD *)v4 + 9) = v14;
  }
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4AH & 0xC00) == 0x400 )
    *((_DWORD *)v4 + 9) = v14 | 0x20;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 3) == 1 )
    *((_DWORD *)v4 + 10) |= 1u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0xC) != 0 )
    *((_DWORD *)v4 + 10) |= 2u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0x30) == 0x10 )
    *((_DWORD *)v4 + 10) |= 4u;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0x300) == 0x100 )
    *((_DWORD *)v4 + 10) |= 0x10u;
  LODWORD(a2) = *((_DWORD *)v4 + 10) & 0xFFFFFFDF;
  *((_DWORD *)v4 + 10) = (_DWORD)a2;
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0x3000) == 0x1000 )
  {
    LODWORD(a2) = (unsigned int)a2 | 0x40;
    *((_DWORD *)v4 + 10) = (_DWORD)a2;
  }
  if ( (*(_DWORD *)&Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP & 0xC000) == 0x4000 )
  {
    LODWORD(a2) = (unsigned int)a2 | 0x80;
    *((_DWORD *)v4 + 10) = (_DWORD)a2;
  }
LABEL_92:
  *((_DWORD *)v4 + 3) = 0;
LABEL_93:
  a1->Offload->MiniportTaskSize = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      169,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1);
  }
}
