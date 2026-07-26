/*
 * XREFs of ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1400C2EF8
 * Callers:
 *     ?ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C0260 (-ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     ?ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAMETER@@@Z @ 0x140067050 (-ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAME.c)
 *     ?ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1400BCFB4 (-ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall ndisUpdateOffloadKeywords(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD_PARAMETERS *a2,
        int a3)
{
  struct _NDIS_OFFLOAD_PARAMETERS *v4; // rsi
  _QWORD *v5; // r15
  UCHAR IPsecV2; // r10
  UCHAR IPsecV2IPv4; // r13
  unsigned __int8 v8; // di
  UCHAR Type; // r12
  UCHAR v10; // r11
  UCHAR Revision; // cl
  unsigned __int8 v12; // al
  UCHAR IPv4Checksum; // al
  char v14; // r14
  UCHAR TCPIPv4Checksum; // cl
  UCHAR TCPIPv6Checksum; // r9
  UCHAR UDPIPv4Checksum; // dl
  UCHAR v18; // r8
  unsigned int v19; // edi
  NDIS_STATUS v20; // eax
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v21; // xmm6
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  unsigned int Value; // eax
  unsigned int v36; // eax
  int LsoV2IPv4; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  int LsoV2IPv6; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  int TcpConnectionIPv4; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  int TcpConnectionIPv6; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned __int8 v53; // si
  int v54; // ecx
  int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  UCHAR v60; // si
  int v61; // eax
  UCHAR v62; // si
  int v63; // eax
  int Status; // [rsp+38h] [rbp-69h] BYREF
  UCHAR LsoV1; // [rsp+3Ch] [rbp-65h]
  UCHAR IPsecV1; // [rsp+3Dh] [rbp-64h]
  struct _NDIS_CONFIGURATION_PARAMETER v68; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int8 v69; // [rsp+58h] [rbp-49h]
  int v70; // [rsp+5Ch] [rbp-45h]
  int v71; // [rsp+60h] [rbp-41h]
  PVOID ConfigurationHandle; // [rsp+68h] [rbp-39h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+70h] [rbp-31h] BYREF
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v74; // [rsp+88h] [rbp-19h]
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp-9h] BYREF
  UCHAR v76; // [rsp+108h] [rbp+67h]
  UCHAR v77; // [rsp+110h] [rbp+6Fh]
  unsigned __int8 v78; // [rsp+118h] [rbp+77h]
  UCHAR UDPIPv6Checksum; // [rsp+120h] [rbp+7Fh]

  *(_QWORD *)&v74.IntegerData = 262146LL;
  ConfigurationHandle = 0LL;
  v4 = a2;
  ParameterValue = 0LL;
  v74.StringData.Buffer = (wchar_t *)L"0";
  LOBYTE(a2) = 0;
  v77 = 0;
  LOBYTE(a3) = 0;
  v69 = 0;
  v5 = 0LL;
  v78 = 0;
  memset(&v68, 0, sizeof(v68));
  IPsecV2 = 0;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  UDPIPv6Checksum = 0;
  IPsecV2IPv4 = 0;
  LsoV1 = 0;
  v8 = 0;
  v70 = (int)a2;
  Type = 0;
  v71 = a3;
  v10 = 0;
  v76 = 0;
  IPsecV1 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      190,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1);
    LOBYTE(a2) = v70;
    LOBYTE(a3) = v71;
    IPsecV2 = 0;
    v10 = 0;
  }
  Revision = v4->Header.Revision;
  if ( Revision >= 2u && v4->Header.Size >= 0x16u )
  {
    IPsecV2 = v4->IPsecV2;
    IPsecV2IPv4 = v4->IPsecV2IPv4;
    v77 = IPsecV2;
  }
  if ( Revision >= 3u && v4->Header.Size >= 0x1Au )
  {
    v8 = *(&v4->IPsecV2IPv4 + 1);
    v12 = *(&v4->IPsecV2IPv4 + 2);
    v10 = v4[1].Header.Revision;
    Type = v4[1].Header.Type;
    v69 = v8;
    v78 = v12;
    v76 = v10;
  }
  if ( Revision >= 4u && v4->Header.Size >= 0x20u )
  {
    LODWORD(a2) = (unsigned __int8)a2;
    if ( (v10 & 1) != 0 )
      LODWORD(a2) = Type;
    a3 = (unsigned __int8)a3;
    v70 = (int)a2;
    if ( (v10 & 2) != 0 )
      a3 = Type;
    v71 = a3;
  }
  if ( Revision >= 5u && v4->Header.Size >= 0x22u )
  {
    UDPIPv6Checksum = v4[1].UDPIPv6Checksum;
    LsoV1 = v4[1].LsoV1;
  }
  if ( Revision >= 6u && v4->Header.Size >= 0x23u )
    IPsecV1 = v4[1].IPsecV1;
  IPv4Checksum = v4->IPv4Checksum;
  v14 = a1->Offload->MiniportHardwareCapabilities.Flags & 1;
  if ( IPv4Checksum > 4u )
    goto LABEL_228;
  TCPIPv4Checksum = v4->TCPIPv4Checksum;
  if ( TCPIPv4Checksum > 4u )
    goto LABEL_228;
  TCPIPv6Checksum = v4->TCPIPv6Checksum;
  if ( TCPIPv6Checksum > 4u )
    goto LABEL_228;
  UDPIPv4Checksum = v4->UDPIPv4Checksum;
  if ( UDPIPv4Checksum > 4u )
    goto LABEL_228;
  v18 = v4->UDPIPv6Checksum;
  if ( v18 > 4u
    || v4->LsoV1 > 2u
    || v4->LsoV2IPv4 > 2u
    || v4->LsoV2IPv6 > 2u
    || v4->IPsecV1 > 4u
    || v4->TcpConnectionIPv4 > 2u
    || v4->TcpConnectionIPv6 > 2u
    || IPsecV2 > 4u
    || IPsecV2IPv4 > 4u
    || v8 > 2u
    || v78 > 2u
    || Type > 2u
    || v10 > 3u
    || Type && !v10 )
  {
    goto LABEL_228;
  }
  if ( UDPIPv6Checksum > 2u || LsoV1 > 2u || IPsecV1 > 2u )
    goto LABEL_228;
  if ( IPsecV2 && IPsecV2IPv4 )
    return (unsigned int)-1073676267;
  if ( v14 && (IPv4Checksum != TCPIPv4Checksum || IPv4Checksum != UDPIPv4Checksum || TCPIPv6Checksum != v18) )
    return (unsigned int)-1073741811;
  a1->OffloadRegistry.Value |= 0x20000u;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v20 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = ConfigurationHandle;
  v19 = v20;
  Status = v20;
  if ( v20 )
    goto LABEL_229;
  v21 = v74;
  if ( v14 )
  {
    v22 = v4->IPv4Checksum;
    if ( (_BYTE)v22 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v74;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v22 - 1);
      v19 = Status;
      if ( Status )
        goto LABEL_229;
      ndisWriteConfigurationIfPresent(&Status, v5, &TCPUDPChecksumOffloadIPv4Str, &v68);
    }
    v23 = v4->TCPIPv6Checksum;
    if ( (_BYTE)v23 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v21;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v23 - 1);
      v19 = Status;
      if ( Status )
        goto LABEL_229;
      ndisWriteConfigurationIfPresent(&Status, v5, &TCPUDPChecksumOffloadIPv6Str, &v68);
    }
  }
  else
  {
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &TCPUDPChecksumOffloadIPv4Str,
      NdisParameterString);
  }
  v24 = v4->IPv4Checksum;
  if ( (_BYTE)v24 )
  {
    if ( !v14 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v21;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v24 - 1);
      v19 = Status;
      if ( Status )
        goto LABEL_229;
      ndisWriteConfigurationIfPresent(&Status, v5, &IPXsumIPv4Str, &v68);
    }
    if ( v4->IPv4Checksum == 1 )
    {
      a1->OffloadRegistry.Value |= 3u;
    }
    else
    {
      if ( v4->IPv4Checksum == 2 )
      {
        v25 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 2;
      }
      else
      {
        if ( v4->IPv4Checksum != 3 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFFC;
          goto LABEL_73;
        }
        v25 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 1;
      }
      a1->OffloadRegistry.Value = v25;
    }
  }
LABEL_73:
  v26 = v4->TCPIPv4Checksum;
  if ( !(_BYTE)v26 )
    goto LABEL_85;
  if ( !v14 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v26 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &TCPXsumIPv4Str, &v68);
  }
  if ( v4->TCPIPv4Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0xCu;
  }
  else
  {
    if ( v4->TCPIPv4Checksum == 2 )
    {
      v27 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 8;
    }
    else
    {
      if ( v4->TCPIPv4Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFFF3;
        goto LABEL_85;
      }
      v27 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 4;
    }
    a1->OffloadRegistry.Value = v27;
  }
LABEL_85:
  v28 = v4->TCPIPv6Checksum;
  if ( !(_BYTE)v28 )
    goto LABEL_97;
  if ( !v14 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v28 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &TCPXsumIPv6Str, &v68);
  }
  if ( v4->TCPIPv6Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0xC0u;
  }
  else
  {
    if ( v4->TCPIPv6Checksum == 2 )
    {
      v29 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x80;
    }
    else
    {
      if ( v4->TCPIPv6Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFF3F;
        goto LABEL_97;
      }
      v29 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x40;
    }
    a1->OffloadRegistry.Value = v29;
  }
LABEL_97:
  v30 = v4->UDPIPv4Checksum;
  if ( !(_BYTE)v30 )
    goto LABEL_109;
  if ( !v14 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v30 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &UDPXsumIPv4Str, &v68);
  }
  if ( v4->UDPIPv4Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0x30u;
  }
  else
  {
    if ( v4->UDPIPv4Checksum == 2 )
    {
      v31 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x20;
    }
    else
    {
      if ( v4->UDPIPv4Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFFCF;
        goto LABEL_109;
      }
      v31 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x10;
    }
    a1->OffloadRegistry.Value = v31;
  }
LABEL_109:
  v32 = v4->UDPIPv6Checksum;
  if ( !(_BYTE)v32 )
    goto LABEL_121;
  if ( !v14 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v32 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &UDPXsumIPv6Str, &v68);
  }
  if ( v4->UDPIPv6Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0x300u;
  }
  else
  {
    if ( v4->UDPIPv6Checksum == 2 )
    {
      v33 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x200;
    }
    else
    {
      if ( v4->UDPIPv6Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFCFF;
        goto LABEL_121;
      }
      v33 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x100;
    }
    a1->OffloadRegistry.Value = v33;
  }
LABEL_121:
  v34 = v4->LsoV1;
  if ( (_BYTE)v34 )
  {
    if ( (unsigned __int8)v34 > 2u )
      goto LABEL_228;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v34 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &LsoV1IPv4Str, &v68);
    Value = a1->OffloadRegistry.Value;
    if ( v4->LsoV1 == 1 )
      v36 = Value | 0x400;
    else
      v36 = Value & 0xFFFFFBFF;
    a1->OffloadRegistry.Value = v36;
  }
  LsoV2IPv4 = v4->LsoV2IPv4;
  if ( (_BYTE)LsoV2IPv4 )
  {
    if ( (unsigned __int8)LsoV2IPv4 > 2u )
      goto LABEL_228;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, LsoV2IPv4 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &LsoV2IPv4Str, &v68);
    v38 = a1->OffloadRegistry.Value;
    if ( v4->LsoV2IPv4 == 1 )
      v39 = v38 | 0x800;
    else
      v39 = v38 & 0xFFFFF7FF;
    a1->OffloadRegistry.Value = v39;
  }
  LsoV2IPv6 = v4->LsoV2IPv6;
  if ( (_BYTE)LsoV2IPv6 )
  {
    if ( (unsigned __int8)LsoV2IPv6 > 2u )
      goto LABEL_228;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, LsoV2IPv6 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &LsoV2IPv6Str, &v68);
    v41 = a1->OffloadRegistry.Value;
    if ( v4->LsoV2IPv6 == 1 )
      v42 = v41 | 0x1000;
    else
      v42 = v41 & 0xFFFFEFFF;
    a1->OffloadRegistry.Value = v42;
  }
  v43 = v4->IPsecV1;
  if ( (_BYTE)v43 )
  {
    if ( (unsigned __int8)v43 > 4u )
      goto LABEL_228;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, v43 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &IPsecIPv4Str, &v68);
    if ( v4->IPsecV1 == 1 )
    {
      a1->OffloadRegistry.Value |= 0x6000u;
    }
    else
    {
      if ( v4->IPsecV1 == 2 )
      {
        v44 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x4000;
      }
      else
      {
        if ( v4->IPsecV1 != 3 )
        {
          a1->OffloadRegistry.Value &= 0xFFFF9FFF;
          goto LABEL_153;
        }
        v44 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x2000;
      }
      a1->OffloadRegistry.Value = v44;
    }
  }
LABEL_153:
  if ( v77 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, (unsigned int)v77 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &IPsecV2Str, &v68);
    v45 = a1->OffloadRegistry.Value;
    switch ( v77 )
    {
      case 1u:
        v46 = v45 | 0xC0000;
        break;
      case 2u:
        v46 = v45 & 0xFFF3FFFF | 0x80000;
        break;
      case 3u:
        v46 = v45 & 0xFFF3FFFF | 0x40000;
        break;
      default:
        v46 = v45 & 0xFFF3FFFF;
        break;
    }
LABEL_169:
    a1->OffloadRegistry.Value = v46;
    goto LABEL_172;
  }
  if ( !IPsecV2IPv4 )
    goto LABEL_172;
  v68.ParameterType = NdisParameterString;
  v68.ParameterData = v21;
  Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, (unsigned int)IPsecV2IPv4 - 1);
  v19 = Status;
  if ( Status )
    goto LABEL_229;
  ndisWriteConfigurationIfPresent(&Status, v5, &IPsecV2IPv4Str, &v68);
  switch ( IPsecV2IPv4 )
  {
    case 1u:
      a1->OffloadRegistry.Value |= 0x300000u;
      break;
    case 2u:
      a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFCFFFFF | 0x200000;
      break;
    case 3u:
      v46 = a1->OffloadRegistry.Value & 0xFFCFFFFF | 0x100000;
      goto LABEL_169;
    default:
      a1->OffloadRegistry.Value &= 0xFFCFFFFF;
      break;
  }
LABEL_172:
  TcpConnectionIPv4 = v4->TcpConnectionIPv4;
  if ( (_BYTE)TcpConnectionIPv4 )
  {
    if ( (unsigned __int8)TcpConnectionIPv4 > 2u )
      goto LABEL_228;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, TcpConnectionIPv4 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &TCPConnectionOffloadIPv4Str, &v68);
    v48 = a1->OffloadRegistry.Value;
    if ( v4->TcpConnectionIPv4 == 1 )
      v49 = v48 | 0x8000;
    else
      v49 = v48 & 0xFFFF7FFF;
    a1->OffloadRegistry.Value = v49;
  }
  TcpConnectionIPv6 = v4->TcpConnectionIPv6;
  if ( (_BYTE)TcpConnectionIPv6 )
  {
    if ( (unsigned __int8)TcpConnectionIPv6 <= 2u )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v21;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, TcpConnectionIPv6 - 1);
      v19 = Status;
      if ( Status )
        goto LABEL_229;
      ndisWriteConfigurationIfPresent(&Status, v5, &TCPConnectionOffloadIPv6Str, &v68);
      v51 = a1->OffloadRegistry.Value;
      if ( v4->TcpConnectionIPv6 == 1 )
        v52 = v51 | 0x10000;
      else
        v52 = v51 & 0xFFFEFFFF;
      a1->OffloadRegistry.Value = v52;
      goto LABEL_186;
    }
LABEL_228:
    v19 = -1073676267;
    goto LABEL_229;
  }
LABEL_186:
  v53 = v69;
  if ( v69 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, (unsigned int)v69 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &RscIPv4Str, &v68);
    v54 = 0;
    if ( v53 == 1 )
      v54 = 0x800000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFF7FFFFF | v54;
  }
  if ( v78 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, (unsigned int)v78 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &RscIPv6Str, &v68);
    v55 = 0;
    if ( v78 == 1 )
      v55 = 0x1000000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFEFFFFFF | v55;
  }
  if ( Type )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, Type == 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    if ( Type == 2 && v76 == 3 || Type == 1 )
    {
      ndisWriteConfigurationIfPresent(&Status, v5, &EncapsulatedPacketTaskOffloadStr, &v68);
      v56 = 0;
      if ( Type == 2 )
        v56 = 0x2000000;
      a1->OffloadRegistry.Value = v56 | a1->OffloadRegistry.Value & 0xFDFFFFFF;
    }
    if ( (v76 & 1) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v5, &EncapsulatedPacketTaskOffloadNvgreStr, &v68);
      v57 = 0;
      if ( (_BYTE)v70 == 2 )
        v57 = 0x4000000;
      a1->OffloadRegistry.Value = v57 | a1->OffloadRegistry.Value & 0xFBFFFFFF;
    }
    if ( (v76 & 2) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v5, &EncapsulatedPacketTaskOffloadVxlanStr, &v68);
      v58 = 0;
      if ( (_BYTE)v71 == 2 )
        v58 = 0x8000000;
      a1->OffloadRegistry.Value = v58 | a1->OffloadRegistry.Value & 0xF7FFFFFF;
    }
  }
  if ( UDPIPv6Checksum )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString(
               (struct _UNICODE_STRING *)&v68.ParameterData,
               (unsigned int)UDPIPv6Checksum - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &UsoIPv4Str, &v68);
    v59 = 0;
    if ( UDPIPv6Checksum == 1 )
      v59 = 0x10000000;
    a1->OffloadRegistry.Value = v59 | a1->OffloadRegistry.Value & 0xEFFFFFFF;
  }
  v60 = LsoV1;
  if ( LsoV1 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, (unsigned int)LsoV1 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &UsoIPv6Str, &v68);
    v61 = 0;
    if ( v60 == 1 )
      v61 = 0x20000000;
    a1->OffloadRegistry.Value = v61 | a1->OffloadRegistry.Value & 0xDFFFFFFF;
  }
  v62 = IPsecV1;
  if ( IPsecV1 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v68.ParameterData, (unsigned int)IPsecV1 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_229;
    ndisWriteConfigurationIfPresent(&Status, v5, &UdpRscStr, &v68);
    v63 = 0;
    if ( v62 == 1 )
      v63 = 0x40000000;
    a1->OffloadRegistry.Value = v63 | a1->OffloadRegistry.Value & 0xBFFFFFFF;
  }
  v19 = 0;
LABEL_229:
  if ( v5 )
    NdisCloseConfiguration(v5);
  return v19;
}
