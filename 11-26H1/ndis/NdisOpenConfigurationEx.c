/*
 * XREFs of NdisOpenConfigurationEx @ 0x140020570
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001EA80 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001FD70 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400202E0 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400692F0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006CB00 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x140073550 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A1E4C (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B55F0 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1400B93A4 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400C2D5C (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1400C2EF8 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1BC0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143EF0 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143FF4 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x140165550 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x140166520 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401673E0 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016BFA0 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ndisAllocateConfigurationString @ 0x140034A40 (ndisAllocateConfigurationString.c)
 *     NdisOpenProtocolConfiguration @ 0x1400613C0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x14006F6A0 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     NdisOpenConfiguration @ 0x14007B230 (NdisOpenConfiguration.c)
 *     ndisWdfOpenConfiguration @ 0x1401396AC (ndisWdfOpenConfiguration.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  char *NdisHandle; // rdi
  PVOID *v4; // rsi
  char v5; // r15
  int v6; // ebx
  char v7; // cl
  void *v8; // r8
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rdx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v15; // [rsp+A0h] [rbp+40h] BYREF
  int Status; // [rsp+B0h] [rbp+50h] BYREF

  NdisHandle = (char *)ConfigObject->NdisHandle;
  v4 = ConfigurationHandle;
  Status = 0;
  v5 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      19,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)ConfigObject);
  }
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *NdisHandle )
  {
    case 2:
      if ( (unsigned __int8)NdisHandle[24] >= 6u )
      {
        NdisOpenProtocolConfiguration(&Status, v4, NdisHandle + 488);
        v6 = Status;
      }
      else
      {
        v6 = -1073741637;
      }
      goto LABEL_29;
    case 3:
      v7 = (_BYTE)NdisHandle + 72;
      goto LABEL_15;
    case 4:
      v7 = (_BYTE)NdisHandle - 112;
LABEL_15:
      LOBYTE(v8) = 0;
      LOBYTE(v9) = 0;
      goto LABEL_16;
    case 5:
      if ( (ConfigObject->Flags & 1) == 0 )
      {
        if ( !RtlStringFromGUID(
                (const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4008LL),
                &GuidString) )
        {
          v5 = 1;
          v6 = ndisAllocateConfigurationString(
                 (unsigned __int8)*((_QWORD *)NdisHandle + 2) - 112,
                 (char)&GuidString,
                 (char)&ndisFilterAdapterStr,
                 &Destination);
          Status = v6;
          v10 = v6 == 0;
          goto LABEL_17;
        }
LABEL_28:
        v6 = -1073741823;
        goto LABEL_29;
      }
      v11 = *((_QWORD *)NdisHandle + 2);
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 336) + 40LL) & 2) == 0 )
        goto LABEL_28;
      v6 = ndisGetOrCreateFilterInstanceKey(
             (const struct _UNICODE_STRING *)(v11 + 144),
             (struct _NDIS_FILTER_BLOCK *)NdisHandle,
             *((struct _NDIS_MINIPORT_BLOCK **)NdisHandle + 4),
             0,
             &v15,
             &Destination);
      Status = v6;
      v10 = v6 == 0;
LABEL_17:
      if ( v10 )
      {
        NdisOpenProtocolConfiguration(&Status, v4, &Destination);
        v6 = Status;
      }
LABEL_29:
      if ( Destination.Buffer )
        ExFreePoolWithTag(Destination.Buffer, 0);
      if ( !v6 && *v4 )
        *((_QWORD *)*v4 + 1) = NdisHandle;
      if ( v5 )
        RtlFreeUnicodeString(&GuidString);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          8u,
          0x14u,
          (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
          (char)ConfigObject,
          v6);
      return v6;
    case 10:
      NdisOpenConfiguration(&Status, v4, NdisHandle);
      v6 = Status;
      goto LABEL_29;
    case 17:
      if ( (*((_DWORD *)NdisHandle + 30) & 0x80u) == 0 || (*((_DWORD *)NdisHandle + 30) & 0x100) != 0 )
      {
        NdisOpenConfiguration(&Status, v4, *((NDIS_HANDLE *)NdisHandle + 500));
        v6 = Status;
      }
      else
      {
        v6 = ndisWdfOpenConfiguration((char)NdisHandle);
      }
      goto LABEL_29;
    case 18:
      v8 = &ndisAdapterStr;
      v9 = *((_QWORD *)NdisHandle + 2) + 3792LL;
      v7 = *((_QWORD *)NdisHandle + 3) + 72;
LABEL_16:
      v6 = ndisAllocateConfigurationString(v7, v9, (char)v8, &Destination);
      Status = v6;
      v10 = v6 == 0;
      goto LABEL_17;
    case -122:
      NdisOpenProtocolConfiguration(&Status, v4, *((_QWORD *)NdisHandle + 1));
      v6 = Status;
      goto LABEL_29;
    default:
      goto LABEL_28;
  }
}
