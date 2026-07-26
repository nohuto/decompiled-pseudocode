/*
 * XREFs of ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001EA80
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016CFD0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140076230 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  int v3; // edx
  PVOID v4; // rbx
  unsigned int v5; // edi
  unsigned int IntegerData; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int Value; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // eax
  PNDIS_CONFIGURATION_PARAMETER v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // r8d
  unsigned int v35; // r8d
  unsigned int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+A0h] [rbp+40h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A8h] [rbp+48h] BYREF
  PVOID ConfigurationHandle; // [rsp+B0h] [rbp+50h] BYREF

  ParameterValue = 0LL;
  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      66,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v4 = ConfigurationHandle;
  v5 = v2;
  Status = v2;
  if ( !v2 )
  {
    a1->OffloadRegistry.Value |= 0x20000u;
    NdisReadConfiguration(&Status, &ParameterValue, v4, &IPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData )
      {
        v7 = IntegerData - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFFC | 1;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFFFC;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFFC | 2;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 3u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v8 = ParameterValue->ParameterData.IntegerData;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 4;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFFF3;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 8;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0xCu;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v10 = ParameterValue->ParameterData.IntegerData;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x10;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFFCF;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x20;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0x30u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v12 = ParameterValue->ParameterData.IntegerData;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x40;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFF3F;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x80;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0xC0u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v14 = ParameterValue->ParameterData.IntegerData;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x100;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFCFF;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x200;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0x300u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3Fu;
    NdisReadConfiguration(&Status, &ParameterValue, v4, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3C0u;
    NdisReadConfiguration(&Status, &ParameterValue, v4, &LsoV2IPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      Value = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v17 = Value & 0xFFFFEFFF;
      else
        v17 = Value | 0x1000;
      a1->OffloadRegistry.Value = v17;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &LsoV2IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v18 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v19 = v18 & 0xFFFFF7FF;
      else
        v19 = v18 | 0x800;
      a1->OffloadRegistry.Value = v19;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &LsoV1IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v20 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v21 = v20 & 0xFFFFFBFF;
      else
        v21 = v20 | 0x400;
      a1->OffloadRegistry.Value = v21;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &IPsecIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v22 = ParameterValue->ParameterData.IntegerData;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          if ( v23 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x2000;
          else
            a1->OffloadRegistry.Value &= 0xFFFF9FFF;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x4000;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0x6000u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v24 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v25 = v24 & 0xFFFF7FFF;
      else
        v25 = v24 | 0x8000;
      a1->OffloadRegistry.Value = v25;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v26 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v27 = v26 & 0xFFFEFFFF;
      else
        v27 = v26 | 0x10000;
      a1->OffloadRegistry.Value = v27;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &IPsecV2Str, NdisParameterInteger);
    if ( Status )
    {
      NdisReadConfiguration(&Status, &ParameterValue, v4, &IPsecV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v32 = ParameterValue;
        v33 = a1->OffloadRegistry.Value | 0x400000;
        a1->OffloadRegistry.Value = v33;
        v34 = v32->ParameterData.IntegerData;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 == 1 )
              v36 = v33 & 0xFFCFFFFF | 0x100000;
            else
              v36 = v33 & 0xFFCFFFFF;
          }
          else
          {
            v36 = v33 & 0xFFCFFFFF | 0x200000;
          }
        }
        else
        {
          v36 = v33 | 0x300000;
        }
        a1->OffloadRegistry.Value = v36;
      }
    }
    else
    {
      v28 = a1->OffloadRegistry.Value;
      v29 = ParameterValue->ParameterData.IntegerData;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
            v31 = v28 & 0xFFF3FFFF | 0x40000;
          else
            v31 = v28 & 0xFFF3FFFF;
        }
        else
        {
          v31 = v28 & 0xFFF3FFFF | 0x80000;
        }
      }
      else
      {
        v31 = v28 | 0xC0000;
      }
      a1->OffloadRegistry.Value = v31;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &RscIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v37 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v38 = v37 & 0xFF7FFFFF;
      else
        v38 = v37 | 0x800000;
      a1->OffloadRegistry.Value = v38;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &RscIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v39 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v40 = v39 & 0xFEFFFFFF;
      else
        v40 = v39 | 0x1000000;
      a1->OffloadRegistry.Value = v40;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
    if ( !Status )
    {
      v41 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v42 = v41 & 0xFDFFFFFF;
      else
        v42 = v41 | 0x2000000;
      a1->OffloadRegistry.Value = v42;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &EncapsulatedPacketTaskOffloadNvgreStr, NdisParameterInteger);
    if ( !Status )
    {
      v43 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v44 = v43 & 0xFBFFFFFF;
      else
        v44 = v43 | 0x4000000;
      a1->OffloadRegistry.Value = v44;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &EncapsulatedPacketTaskOffloadVxlanStr, NdisParameterInteger);
    if ( !Status )
    {
      v45 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v46 = v45 & 0xF7FFFFFF;
      else
        v46 = v45 | 0x8000000;
      a1->OffloadRegistry.Value = v46;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &UsoIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v47 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v48 = v47 & 0xEFFFFFFF;
      else
        v48 = v47 | 0x10000000;
      a1->OffloadRegistry.Value = v48;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &UsoIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v49 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v50 = v49 & 0xDFFFFFFF;
      else
        v50 = v49 | 0x20000000;
      a1->OffloadRegistry.Value = v50;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &UdpRscStr, NdisParameterInteger);
    v5 = Status;
    if ( !Status )
    {
      v51 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v52 = v51 & 0xBFFFFFFF;
      else
        v52 = v51 | 0x40000000;
      a1->OffloadRegistry.Value = v52;
    }
  }
  if ( v4 )
    NdisCloseConfiguration(v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      1,
      67,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      v5,
      a1->OffloadRegistry.Value);
  }
  if ( (a1->OffloadRegistry.Value & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1);
  return v5;
}
