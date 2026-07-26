/*
 * XREFs of ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x140073550
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1400455E0 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1400471A0 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140075F50 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     McTemplateK0jqxb6_EtwWriteTransfer @ 0x1400A1FE8 (McTemplateK0jqxb6_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDDDDDD @ 0x1400A3624 (WPP_RECORDER_SF_qDDDDDD.c)
 *     ?ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B49E4 (-ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x14016B050 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x14016B260 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisGetMiniportInfo(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2,
        int *a3,
        unsigned __int8 *a4,
        int *a5)
{
  unsigned __int8 v6; // r15
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v8; // rbx
  unsigned int v10; // r14d
  unsigned int *p_DriverVersion; // r9
  int v12; // eax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  _NDIS_MEDIUM MediaType; // eax
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // esi
  __int64 v19; // rcx
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  char v25; // si
  unsigned int v26; // eax
  _NDIS_MEDIUM v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int BytesNeeded; // r14d
  unsigned int *Pool2; // rax
  PVOID v39; // rax
  unsigned __int16 Length; // cx
  int ParameterType; // [rsp+20h] [rbp-E0h]
  char v43[8]; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  int Status; // [rsp+68h] [rbp-98h] BYREF
  PVOID ConfigurationHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v47; // [rsp+78h] [rbp-88h]
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Keyword; // [rsp+A0h] [rbp-60h] BYREF
  struct _NDIS_PNP_CAPABILITIES v51[6]; // [rsp+B0h] [rbp-50h] BYREF
  struct _NDIS_PNP_CAPABILITIES v52; // [rsp+110h] [rbp+10h] BYREF
  struct _NDIS_OID_REQUEST v53; // [rsp+120h] [rbp+20h] BYREF

  Keyword.Buffer = L"*IfType";
  v47 = (unsigned int *)a5;
  *(_QWORD *)&Keyword.Length = 1048590LL;
  v6 = 0;
  v44 = 0;
  ParameterValue = 0LL;
  v8 = a2;
  ConfigurationHandle = 0LL;
  v10 = -1073741823;
  memset(v51, 0, sizeof(v51));
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      161,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  }
  *a5 = 1;
  p_DriverVersion = &a1->DriverHandle->DriverVersion;
  if ( !*p_DriverVersion )
  {
    v12 = ndisMDoMiniportOp(a1, 1u, 0x10116u, p_DriverVersion, 4, 1, 1u);
    DriverHandle = a1->DriverHandle;
    ndisWriteDriverNDISVersionToServiceKey(
      DriverHandle->MajorNdisVersion,
      DriverHandle->MinorNdisVersion,
      v12 == 0,
      HIWORD(DriverHandle->DriverVersion),
      (unsigned __int16)DriverHandle->DriverVersion,
      &DriverHandle->ServiceName);
  }
  MediaType = a1->MediaType;
  if ( MediaType )
  {
    switch ( MediaType )
    {
      case NdisMediumWan:
        v8->IfType = 23;
        goto LABEL_12;
      case NdisMediumAtm:
        v8->IfType = 37;
        *(_QWORD *)&v8->AccessType = 4LL;
        v8->SupportedPacketFilters = 39;
        goto LABEL_20;
      case NdisMediumWirelessWan:
        v8->IfType = 1;
        *(_QWORD *)&v8->AccessType = 3LL;
        v8->ConnectionType = NET_IF_CONNECTION_DEMAND;
        v8->SupportedPacketFilters = 47;
        break;
      case NdisMediumIrda:
        v8->IfType = 1;
        *(_QWORD *)&v8->AccessType = 3LL;
        v8->SupportedPacketFilters = 1;
        goto LABEL_20;
      case NdisMediumBpc:
        v8->IfType = 1;
        v8->AccessType = NET_IF_ACCESS_POINT_TO_POINT;
        v8->DirectionType = NET_IF_DIRECTION_RECEIVEONLY;
        v8->SupportedPacketFilters = 1;
        goto LABEL_20;
      case NdisMediumCoWan:
        v8->IfType = 1;
LABEL_12:
        *(_QWORD *)&v8->AccessType = 3LL;
        v8->ConnectionType = NET_IF_CONNECTION_DEMAND;
        v8->SupportedPacketFilters = 1;
        break;
      case NdisMediumTunnel:
        v8->IfType = 131;
        *(_QWORD *)&v8->AccessType = 3LL;
        goto LABEL_19;
      case NdisMediumNative802_11:
        v8->IfType = 71;
        goto LABEL_18;
      default:
        v8->IfType = 1;
        goto LABEL_18;
    }
  }
  else
  {
    v8->IfType = 6;
LABEL_18:
    *(_QWORD *)&v8->AccessType = 2LL;
LABEL_19:
    v8->SupportedPacketFilters = 47;
LABEL_20:
    v8->ConnectionType = NET_IF_CONNECTION_DEDICATED;
  }
  v15 = a1->MediaType;
  if ( (int)v15 >= 0 && ((int)v15 >= 20 || (_DWORD)v15 != 3 && ndisMediaTypeCl[v15]) )
  {
    v18 = ndisMDoMiniportOp(a1, 1u, 0x10105u, &v8->LookaheadSize, 4, 1, 1u);
    if ( v18 )
    {
      if ( a1->MediaType < NdisMediumMax )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 3;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v16,
            13,
            162,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids);
        }
        if ( (byte_14011D043 & 0x10) != 0 )
          McTemplateK0jqxddq_EtwWriteTransfer(
            v17,
            (unsigned int)&OidQueryFailed,
            (_DWORD)a1 + 4008,
            (_DWORD)a1 + 4008,
            a1->IfIndex,
            a1->NetLuid.Value,
            5,
            v18,
            1);
        goto LABEL_101;
      }
      v8->LookaheadSize = 0;
    }
  }
  ndisMDoMiniportOp(a1, 1u, 0x10106u, &v8->MtuSize, 4, 1, 1u);
  v19 = a1->MediaType;
  if ( (unsigned int)v19 < 0x14 && ndisMediaTypeCl[v19] || (_DWORD)v19 == 3 )
  {
    v18 = ndisMDoMiniportOp(a1, 1u, 0x10113u, &v8->MacOptions, 4, 3, 1u);
    if ( v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v20,
          13,
          163,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D043 & 0x10) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v21,
          (unsigned int)&OidQueryFailed,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          19,
          v18,
          2);
      goto LABEL_101;
    }
  }
  if ( (a1->SendFlags & 1) != 0 )
  {
    v44 = 16;
    v22 = ndisMDoMiniportOp(a1, 1u, 0x10115u, &v44, 4, 2, 1u);
    v25 = v22;
    if ( v22 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v23,
          13,
          164,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D043 & 0x10) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v24,
          (unsigned int)&OidQueryFailed,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          21,
          v25,
          3);
      v26 = 16;
      v44 = 16;
    }
    else
    {
      v26 = v44;
    }
    a1->MaxSendPackets = 16;
    if ( v26 < 0x10 )
      a1->MaxSendPackets = v26;
  }
  v27 = a1->MediaType;
  if ( v27 )
  {
    if ( v27 != NdisMediumWan )
    {
      v18 = 0;
LABEL_84:
      if ( ((a1->PnPFlags & 0x8001) != 0 || (a1->DriverHandle->Flags & 1) != 0)
        && a1->MediaType <= (unsigned int)NdisMediumIP )
      {
        v52 = 0LL;
        v36 = ndisMDoMiniportOp(a1, 1u, 0xFD010100, &v52, 16, 25, 0);
        *v47 = v36;
        if ( !v36 )
          ndisConvertPnpCapabilitiesToPM(&v52, v8->PowerManagementCapabilitiesEx);
      }
      v8->IfConnectorPresent = (a1->PnPFlags & 0x200000) != 0;
      *(_QWORD *)&v8->MediaConnectState = 1LL;
      v8->MaxXmitLinkSpeed = 0x40000000LL;
      v8->XmitLinkSpeed = 0x40000000LL;
      v8->MaxRcvLinkSpeed = 0x40000000LL;
      v8->RcvLinkSpeed = 0x40000000LL;
      *(_QWORD *)&v51[0].WakeUpCapabilities.MinPatternWakeUp = a1;
      memset(&v53, 0, 248);
      if ( (((unsigned int)ndisQueryDeviceOid((struct _NDIS_USER_OPEN_CONTEXT *)v51, &v53, 0x10101u, 0LL, 0) + 1073676268) & 0xFFFFFFFD) == 0 )
      {
        BytesNeeded = v53.DATA.QUERY_INFORMATION.BytesNeeded;
        Pool2 = (unsigned int *)ExAllocatePool2(64LL, v53.DATA.QUERY_INFORMATION.BytesNeeded, 538985550LL);
        v47 = Pool2;
        if ( Pool2 )
        {
          if ( !(unsigned int)ndisQueryDeviceOid(
                                (struct _NDIS_USER_OPEN_CONTEXT *)v51,
                                &v53,
                                0x10101u,
                                Pool2,
                                BytesNeeded) )
          {
            a1->SupportedOidList = v47;
            a1->SupportedOidListLength = BytesNeeded;
          }
        }
      }
      ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)v51);
      ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
      ConfigObject.NdisHandle = a1;
      ConfigObject.Flags = 0;
      v10 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
      Status = v10;
      v39 = ConfigurationHandle;
      if ( !v10 )
      {
        NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
        v10 = Status;
        if ( !Status )
        {
          Length = ParameterValue->ParameterData.StringData.Length;
          if ( Length != 1 )
            v8->IfType = Length;
          v10 = 0;
        }
        v39 = ConfigurationHandle;
      }
      if ( v39 )
        NdisCloseConfiguration(v39);
      goto LABEL_101;
    }
    v8->MacAddressLength = 6;
    v18 = ndisMDoMiniportOp(a1, 1u, 0x4010102u, v8->CurrentMacAddress, 6, 23, 1u);
    if ( !v18 )
    {
      *(_DWORD *)v8->PermanentMacAddress = *(_DWORD *)v8->CurrentMacAddress;
      *(_WORD *)&v8->PermanentMacAddress[4] = *(_WORD *)&v8->CurrentMacAddress[4];
      goto LABEL_84;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v28) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v28,
        13,
        169,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a1);
    }
    if ( (byte_14011D043 & 0x10) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v29,
        (unsigned int)&OidQueryFailed,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        2,
        v18,
        7);
LABEL_69:
    v6 = 1;
    goto LABEL_101;
  }
  v18 = ndisMDoMiniportOp(a1, 1u, 0x1010104u, &v8->MaxMulticastListSize, 4, 7, 1u);
  if ( !v18 )
  {
    v8->MacAddressLength = 6;
    v18 = ndisMDoMiniportOp(a1, 1u, 0x1010102u, v8->CurrentMacAddress, 6, 9, 1u);
    if ( v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v32,
          13,
          166,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D043 & 0x10) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v33,
          (unsigned int)&OidQueryFailed,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          2,
          v18,
          5);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDDDDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8->CurrentMacAddress[3],
          v8->CurrentMacAddress[2],
          v8->CurrentMacAddress[1],
          ParameterType,
          (char)a1,
          v8->CurrentMacAddress[0],
          v8->CurrentMacAddress[1],
          v8->CurrentMacAddress[2],
          v8->CurrentMacAddress[3],
          v8->CurrentMacAddress[4],
          v8->CurrentMacAddress[5]);
      if ( Microsoft_Windows_NDISEnableBits < 0 )
        McTemplateK0jqxb6_EtwWriteTransfer(
          v33,
          v32,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          (__int64)v8->CurrentMacAddress);
      v18 = ndisMDoMiniportOp(a1, 1u, 0x1010101u, v8->PermanentMacAddress, v8->MacAddressLength, 9, 1u);
      if ( !v18 )
      {
        v18 = ndisMDoMiniportOp(a1, 1u, 0x10202u, &v8->PhysicalMediumType, 4, 10, 1u);
        if ( v18 )
        {
          v18 = 0;
          v8->PhysicalMediumType = NdisPhysicalMediumUnspecified;
        }
        if ( v8->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
          v8->IfType = 71;
        ndisGetMiniportOffloadCapability(a1);
        v6 = 0;
        goto LABEL_84;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v34) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v34,
          13,
          168,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D043 & 0x10) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v35,
          (unsigned int)&OidQueryFailed,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          v18,
          6);
    }
    goto LABEL_69;
  }
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v30) = 3;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v30,
      13,
      165,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  }
  if ( (byte_14011D043 & 0x10) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      v31,
      (unsigned int)&OidQueryFailed,
      (_DWORD)a1 + 4008,
      (_DWORD)a1 + 4008,
      a1->IfIndex,
      a1->NetLuid.Value,
      4,
      v18,
      4);
LABEL_101:
  *a3 = v18;
  *a4 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v43 = v10;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAAu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      *(_QWORD *)v43);
  }
  return v10;
}
