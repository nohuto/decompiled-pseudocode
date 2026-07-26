/*
 * XREFs of ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370
 * Callers:
 *     ndisWMIDispatch @ 0x140017150 (ndisWMIDispatch.c)
 *     NdisWdfChangeSingleInstance @ 0x140096690 (NdisWdfChangeSingleInstance.c)
 * Callees:
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006460 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x140006E90 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006F70 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048230 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x140053CD0 (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     NdisWriteConfiguration @ 0x140067100 (NdisWriteConfiguration.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006AF00 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     NdisOpenConfiguration @ 0x14007B230 (NdisOpenConfiguration.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B9364 (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1400B93A4 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140143390 (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140176540 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401767B0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *pNdisGuidMap,
        struct tagWNODE_SINGLE_INSTANCE *const a3)
{
  int v6; // edx
  struct _NDIS_CO_VC_PTR_BLOCK *v7; // r13
  GUID *p_Guid; // rdx
  int InstanceName; // edi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned int v11; // ecx
  bool v12; // zf
  int v13; // r9d
  unsigned int Flags; // ecx
  ULONG SizeDataBlock; // r12d
  char *v16; // r15
  unsigned int v17; // edi
  unsigned int PnPFlags; // ecx
  unsigned int *p_PnPCapabilities; // r14
  unsigned int v21; // eax
  unsigned int WSyncFlags; // edx
  unsigned int *v23; // rbx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 ifDeviceWakeUpEnable; // r8
  _NDIS_IF_BLOCK *v26; // rcx
  int v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // eax
  unsigned int v32; // edx
  NDIS_HANDLE RequestHandle; // rbx
  int v34; // r8d
  ULONG v35; // r12d
  unsigned int Oid; // ecx
  struct _NDIS_MINIPORT_BLOCK *v37; // rcx
  int v38; // edx
  __int64 v39; // rcx
  int v40; // ebx
  int v41; // eax
  char v42[8]; // [rsp+38h] [rbp-D0h]
  int Status; // [rsp+58h] [rbp-B0h] BYREF
  NDIS_PORT_NUMBER v44; // [rsp+5Ch] [rbp-ACh]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  struct _NDIS_MINIPORT_BLOCK *v46; // [rsp+68h] [rbp-A0h]
  struct _NDIS_CO_VC_PTR_BLOCK *v47; // [rsp+70h] [rbp-98h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v48; // [rsp+78h] [rbp-90h] BYREF
  PVOID ConfigurationHandle; // [rsp+80h] [rbp-88h] BYREF
  void *v50; // [rsp+88h] [rbp-80h]
  UNICODE_STRING Keyword; // [rsp+90h] [rbp-78h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp-68h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v53; // [rsp+B8h] [rbp-50h] BYREF
  struct _NDIS_OID_REQUEST v54; // [rsp+168h] [rbp+60h] BYREF

  Status = 0;
  memset(&v54, 0, 0xF8uLL);
  v47 = 0LL;
  v44 = 0;
  Keyword.Buffer = L"PnPCapabilities";
  v7 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  ConfigurationHandle = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  *(_QWORD *)&Keyword.Length = 2097182LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      18,
      49,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_8;
  InstanceName = ndisWmiFindInstanceName(
                   &v47,
                   a1,
                   (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                   *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
  if ( InstanceName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(p_Guid) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p_Guid,
        18,
        50,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    goto LABEL_45;
  }
  v7 = v47;
  if ( !v47 )
  {
LABEL_8:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v48, 0, MPREF_WMI_CHANGE);
      v46 = v48;
    }
  }
  if ( pNdisGuidMap )
    goto LABEL_26;
  pNdisGuidMap = a1->pNdisGuidMap;
  p_Guid = &a3->WnodeHeader.Guid;
  if ( !pNdisGuidMap || (v11 = 0, !a1->cNdisGuidMap) )
  {
LABEL_22:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 51;
      goto LABEL_24;
    }
LABEL_25:
    InstanceName = -1073741811;
    goto LABEL_137;
  }
  while ( a3 != (struct tagWNODE_SINGLE_INSTANCE *const)-24LL )
  {
    if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
    {
      v12 = *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)a3->WnodeHeader.Guid.Data4;
      goto LABEL_18;
    }
LABEL_19:
    ++v11;
    ++pNdisGuidMap;
    if ( v11 >= a1->cNdisGuidMap )
      goto LABEL_22;
  }
  if ( (pNdisGuidMap->Flags & 2) == 0 )
    goto LABEL_19;
  v12 = pNdisGuidMap->Oid == 0;
LABEL_18:
  if ( !v12 )
    goto LABEL_19;
  if ( !pNdisGuidMap )
    goto LABEL_22;
LABEL_26:
  Flags = pNdisGuidMap->Flags;
  if ( (Flags & 0x40000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(p_Guid) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p_Guid,
        18,
        52,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    InstanceName = -1073741637;
    goto LABEL_137;
  }
  SizeDataBlock = a3->SizeDataBlock;
  v16 = (char *)a3 + a3->DataBlockOffset;
  if ( !SizeDataBlock )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 53;
LABEL_24:
      LOBYTE(p_Guid) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p_Guid,
        18,
        v13,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    goto LABEL_25;
  }
  if ( (Flags & 0x200) != 0 )
  {
    if ( SizeDataBlock < 0x20 || *((_QWORD *)v16 + 1) != a1->NetLuid.Value )
    {
      InstanceName = -1073741811;
      goto LABEL_137;
    }
    v17 = 32;
    v44 = *((_DWORD *)v16 + 1);
    v50 = (void *)*((_QWORD *)v16 + 2);
    LODWORD(v45) = *((_DWORD *)v16 + 6);
  }
  else
  {
    v17 = HIDWORD(v45);
  }
  if ( v7 || (Flags & 0x20000000) == 0 )
  {
    if ( (Flags & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(p_Guid) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p_Guid,
          18,
          56,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      InstanceName = -1073741808;
      goto LABEL_137;
    }
    if ( pNdisGuidMap->Oid == 66076 )
    {
      if ( SizeDataBlock != 4 )
      {
        InstanceName = -1073741808;
        goto LABEL_137;
      }
      if ( (*(_DWORD *)v16 & 0xFFFFF000) != 0 )
      {
        InstanceName = -1073741808;
        goto LABEL_137;
      }
    }
    *(_DWORD *)&v54.NdisReserved[16] |= 8u;
    RequestHandle = &ndisIntReqWmi;
    *(_QWORD *)&v54.NdisReserved[32] = &ndisIntReqWmi;
    EtwActivityIdControl(3u, (LPGUID)&v54.NdisReserved[96]);
    v35 = SizeDataBlock - v17;
    v54.Header = (NDIS_OBJECT_HEADER)15466902;
    Oid = pNdisGuidMap->Oid;
    v54.PortNumber = v44;
    v54.DATA.QUERY_INFORMATION.Oid = Oid;
    v54.DATA.QUERY_INFORMATION.InformationBuffer = &v16[v17];
    v54.RequestId = v50;
    if ( !v50 )
      RequestHandle = v54.RequestHandle;
    v54.RequestHandle = RequestHandle;
    v54.RequestType = NdisRequestSetInformation;
    v54.DATA.QUERY_INFORMATION.InformationBufferLength = v35;
    v54.Timeout = v45;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v34,
        0x39u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)&v54,
        Oid,
        a1);
    if ( v7 || (v37 = v46) == 0LL )
      v37 = a1;
    InstanceName = 0;
    v40 = ndisQuerySetMiniportEx(v37, v7, &v54, 0, 0LL, 0LL);
    if ( v40 == -1071448017 )
    {
      if ( (pNdisGuidMap->Flags & 0x200) == 0 )
        goto LABEL_137;
    }
    else if ( !v40 )
    {
      goto LABEL_137;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v38) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v38,
        18,
        58,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    if ( (byte_14011D041 & 0x10) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v39,
        &ChangeInformationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v40,
        1,
        0);
    if ( (pNdisGuidMap->Flags & 0x200) != 0 )
    {
      if ( (v40 & 0xC0010000) == 0xC0010000 )
        v40 = (unsigned __int16)v40 | 0xC0230000;
    }
    else if ( v40 != 259 && v40 != -2147483643 )
    {
      v41 = -1073741823;
      if ( v40 != -1073741823 && v40 != -1073741670 && v40 != -1073741637 )
      {
        if ( v40 == -1073676266 )
        {
          InstanceName = -1073741789;
        }
        else if ( v40 == -1073676268 )
        {
          InstanceName = -1073741306;
        }
        else
        {
          if ( v40 == -1073676267 )
            v41 = -1073741811;
          InstanceName = v41;
        }
        goto LABEL_137;
      }
    }
    InstanceName = v40;
    goto LABEL_137;
  }
  InstanceName = 0;
  if ( SizeDataBlock == 4 && *(_DWORD *)v16 > 1u )
  {
LABEL_42:
    InstanceName = -1073741808;
    goto LABEL_43;
  }
  if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1
    && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_NDIS_NDK_STATE.Data4 )
  {
    InstanceName = ndisNDKHandleWmiChangeRequest(a1, *v16);
    goto LABEL_43;
  }
  if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1
    && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4 )
  {
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 0x8001) != 1 || a1->AoAc )
      goto LABEL_42;
    p_PnPCapabilities = &a1->PnPCapabilities;
    v21 = a1->PnPCapabilities & 0xEFFFFFFF;
    a1->PnPCapabilities = v21;
    if ( *v16 )
    {
      WSyncFlags = a1->WSyncFlags;
      if ( (WSyncFlags & 0x10) == 0 )
        a1->PnPFlags = PnPFlags | 0x20;
      v23 = &a1->PnPCapabilities;
      *p_PnPCapabilities = v21 & 0xFFFFFFF7;
      if ( (WSyncFlags & 8) != 0 )
      {
        a1->PMCurrentParameters.WakeUpFlags |= 1u;
        if ( a1->MediaConnectState == MediaConnectStateDisconnected )
          ndisSetMediaDisconnectTimer(a1);
      }
      goto LABEL_61;
    }
    a1->PMCurrentParameters.WakeUpFlags &= ~1u;
    a1->PnPFlags = PnPFlags & 0xFFFFFFDF;
    *p_PnPCapabilities = v21 | 0x18;
    ndisCancelMediaDisconnectTimer(a1);
    v23 = &a1->PnPCapabilities;
    if ( a1->CurrentDevicePowerState == PowerDeviceD0 || (a1->Flags & 0x20000000) != 0 || (a1->WSyncFlags & 8) == 0 )
      goto LABEL_61;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v27,
        14,
        54,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    v28 = ndisWakeUpDevice(a1);
LABEL_91:
    InstanceName = v28;
    if ( v28 < 0 )
      goto LABEL_43;
LABEL_61:
    ndisUpdateAndIndicatePMCapabilities(a1);
    NdisOpenConfiguration(&Status, &ConfigurationHandle, a1->ConfigurationHandle);
    if ( Status >= 0 )
    {
      ParameterValue.ParameterData.IntegerData = *v23;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
      NdisCloseConfiguration(ConfigurationHandle);
    }
    *(_QWORD *)&v53.NetPnPEvent.NetEvent = 7LL;
    *(_QWORD *)&v53.Header.Type = 11272832LL;
    memset(&v53.NetPnPEvent.BufferLength + 1, 0, 148);
    v53.NetPnPEvent.Buffer = &a1->PMCapabilities61;
    v53.NetPnPEvent.BufferLength = 4;
    ndisPnPNotifyAllTransports(a1, &v53);
    if ( ndisMReferenceIfBlock(a1, 0x10u) )
    {
      IfBlock = a1->IfBlock;
      ifDeviceWakeUpEnable = IfBlock->ifDeviceWakeUpEnable;
      IfBlock->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
      v26 = a1->IfBlock;
      if ( ifDeviceWakeUpEnable != v26->ifDeviceWakeUpEnable )
        ndisNsiScheduleIfBlockRodChangeNotification(v26, &v26->ifDeviceWakeUpEnable, 1, 641);
      ndisMDereferenceIfBlock(a1, 0x10u);
    }
LABEL_137:
    if ( v7 )
      ndisDereferenceVcPtr(v7);
  }
  else
  {
    if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1
      && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4 )
    {
      v29 = a1->PnPFlags;
      if ( (v29 & 0x4000001) != 0x4000001 || a1->AoAc )
        goto LABEL_42;
      v23 = &a1->PnPCapabilities;
      v30 = a1->PnPCapabilities & 0xEFFFFFFF;
      a1->PnPCapabilities = v30;
      if ( *v16 )
      {
        a1->PnPFlags = v29 | 0x40;
        *v23 = v30 & 0xFFFFFFEF;
      }
      else
      {
        a1->PnPFlags = v29 & 0xFFFFFFBF;
        *v23 = v30 | 0x10;
        ndisCancelWaitWake(a1);
      }
      goto LABEL_61;
    }
    if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1
      && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4 )
    {
      if ( (a1->PnPFlags & 0x4000001) != 0x4000001 )
        goto LABEL_42;
      MinMagicPacketWakeUp = a1->PMHardwareCapabilities.MinMagicPacketWakeUp;
      if ( MinMagicPacketWakeUp != NdisDeviceStateD1 && (unsigned int)(MinMagicPacketWakeUp - 3) > 1 )
        goto LABEL_42;
      v23 = &a1->PnPCapabilities;
      a1->PnPCapabilities &= ~0x10000000u;
      v32 = a1->PnPCapabilities | 0x100;
      if ( !*v16 )
        v32 = a1->PnPCapabilities & 0xFFFFFEFF;
      *v23 = v32;
      goto LABEL_61;
    }
    if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1
      && *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4 )
    {
      v28 = ndisWmiSetPMAdminConfig(a1, (struct _NDIS_WMI_PM_ADMIN_CONFIG *)v16);
      v23 = &a1->PnPCapabilities;
      goto LABEL_91;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(p_Guid) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p_Guid,
        18,
        55,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    InstanceName = -1073741808;
  }
LABEL_43:
  if ( v46 )
    ndisDereferenceMiniport(v46, 0x5Fu);
LABEL_45:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v42 = InstanceName;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x3Bu,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      *(_QWORD *)v42);
  }
  return (unsigned int)InstanceName;
}
