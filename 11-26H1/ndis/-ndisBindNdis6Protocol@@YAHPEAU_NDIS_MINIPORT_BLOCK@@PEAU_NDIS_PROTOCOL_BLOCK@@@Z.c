/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140157420 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14000F160 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001A8C0 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14004E590 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140058130 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x14005F150 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x140061630 (-ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z.c)
 *     McTemplateK0jqxzd_EtwWriteTransfer @ 0x140062060 (McTemplateK0jqxzd_EtwWriteTransfer.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140071920 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400790C0 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_N.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140079A70 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x14008EEA0 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x140155650 (-ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140156F10 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140156F50 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x140156FE0 (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x14016B050 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  unsigned int v4; // esi
  char v5; // r13
  int v6; // r9d
  char v7; // r15
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // eax
  _UNICODE_STRING *Paths; // r12
  UNICODE_STRING v10; // xmm0
  __int16 v11; // ax
  __int64 v12; // rdx
  bool v13; // zf
  bool v14; // cc
  UCHAR v15; // dl
  USHORT v16; // ax
  unsigned int v17; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  bool v21; // zf
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  struct _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // r10
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  bool v28; // zf
  _NDIS_IF_BLOCK *v29; // rdx
  _NDIS_IF_BLOCK *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // r8
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v37; // rcx
  unsigned __int8 v38; // cl
  int v39; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v46[2]; // [rsp+90h] [rbp-70h]
  _UNICODE_STRING v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  __int128 v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+D0h] [rbp-30h]
  struct _KEVENT Event[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _NDIS_BIND_PARAMETERS v52; // [rsp+110h] [rbp+10h] BYREF

  memset(&v52, 0, sizeof(v52));
  v42 = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v4 = 0;
  v5 = 0;
  *(_OWORD *)v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  memset(Event, 0, sizeof(Event));
  Destination = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Au,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      a2);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1u, 0x10114u, &v42, 4, 1, 1u);
  if ( ndisReferenceProtocol(a2, 8u) )
  {
    if ( !a1->EthDB )
    {
      v4 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          6u,
          0x1Bu,
          (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
          (char)a1,
          a2);
      goto LABEL_44;
    }
    v7 = 1;
    WAIT_FOR_PROTO_MUTEX(a2);
    if ( a2->Ref.Closing )
      goto LABEL_41;
    if ( !ndisIsMiniportStarted(a1) )
      goto LABEL_60;
    PnPDeviceState = a1->PnPDeviceState;
    if ( PnPDeviceState != NdisPnPDeviceStarted && ((PnPDeviceState - 2) & 0xFFFFFFFD) != 0 )
      goto LABEL_60;
    Paths = a1->BindPaths->Paths;
    a2->BindDeviceName = &a1->MiniportName;
    a2->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v10 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v10) - ndisDeviceStr.Length;
    v11 = a2->Name.Length - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    v12 = (unsigned __int16)(DestinationString.Length + Paths->Length + v11 + 2);
    Destination.Length = 0;
    Destination.MaximumLength = v12;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, v12, 538985550LL);
    if ( !Destination.Buffer )
    {
LABEL_41:
      RELEASE_PROT_MUTEX(a2);
      if ( v5 )
      {
        ndisMDereferenceOpenUnlocked(v46[0], 2u);
        v46[0] = 0LL;
      }
      if ( v7 && v4 )
        ndisNotifyBindFailure(a1, a2);
      goto LABEL_44;
    }
    RtlCopyUnicodeString(&Destination, &a2->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    v13 = a2->MajorNdisVersion == 6;
    v14 = a2->MajorNdisVersion <= 6u;
    v52.Header.Type = -122;
    if ( !v14 )
      goto LABEL_13;
    if ( v13 )
    {
      if ( a2->MinorNdisVersion >= 0x1Eu )
      {
LABEL_13:
        v15 = 4;
        v16 = 312;
LABEL_14:
        v52.Header.Size = v16;
        v52.ProtocolSection = &Destination;
        v52.PhysicalDeviceObject = a1->PhysicalDeviceObject;
        v52.BoundAdapterName = &a1->MiniportName;
        v17 = a1->MacOptions & 0x80000001;
        v52.Header.Revision = v15;
        v52.AdapterName = Paths;
        if ( v17 == -2147483647 )
          v52.MediaType = NdisMediumWan;
        else
          v52.MediaType = a1->MediaType;
        HighestFilter = a1->HighestFilter;
        if ( HighestFilter )
        {
          v52.XmitLinkSpeed = HighestFilter->XmitLinkSpeedIndicateUp;
          v52.RcvLinkSpeed = HighestFilter->RcvLinkSpeedIndicateUp;
          v52.MediaConnectState = HighestFilter->MediaConnectStateIndicateUp;
          MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
        }
        else
        {
          IfBlock = a1->IfBlock;
          v52.XmitLinkSpeed = a1->XmitLinkSpeed;
          v52.RcvLinkSpeed = a1->RcvLinkSpeed;
          v52.MediaConnectState = IfBlock->MediaConnectState;
          MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
        }
        v21 = a2->MajorNdisVersion == 6;
        v14 = a2->MajorNdisVersion <= 6u;
        v52.MediaDuplexState = MediaDuplexStateIndicateUp;
        v52.MtuSize = a1->TopFilterRestartAttributes.MtuSize;
        v52.MaxXmitLinkSpeed = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        v52.MaxRcvLinkSpeed = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        v52.LookaheadSize = a1->TopFilterRestartAttributes.LookaheadSize;
        v52.SupportedPacketFilters = a1->TopFilterRestartAttributes.SupportedPacketFilters;
        v52.MaxMulticastListSize = a1->TopFilterRestartAttributes.MaxMulticastListSize;
        v52.PhysicalMediumType = a1->PhysicalMediumType;
        v52.RcvScaleCapabilities = &a1->TopRecvScaleCapabilities;
        if ( !v14 || v21 && a2->MinorNdisVersion >= 0x14u )
          v52.PowerManagementCapabilitiesEx = &a1->PMAdvertisedCapabilities;
        else
          v52.PowerManagementCapabilities = &a1->PMCapabilities61;
        Offload = a1->Offload;
        if ( Offload )
        {
          if ( Offload->SupportsTopOffload == 1 )
            v52.DefaultOffloadConfiguration = &Offload->TopCapabilities;
          if ( Offload->SupportsTopTcpConnectionOffload == 1 )
            v52.TcpConnectionOffloadCapabilities = &Offload->TopTcpConnectionOffloadCapabilities;
        }
        HDSplitCurrentConfig = v52.HDSplitCurrentConfig;
        TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        if ( a1->HDSplitCurrentConfig )
          HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        v52.HDSplitCurrentConfig = HDSplitCurrentConfig;
        ReceiveFilterCapabilities = v52.ReceiveFilterCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
          ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
        v52.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
        NicSwitchCapabilities = v52.NicSwitchCapabilities;
        if ( TopNicSwitchCurrentCapabilities )
          NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
        v28 = a2->MajorNdisVersion == 6;
        v14 = a2->MajorNdisVersion <= 6u;
        v52.NicSwitchCapabilities = NicSwitchCapabilities;
        if ( !v14 || v28 && a2->MinorNdisVersion >= 0x1Eu )
        {
          NDKBlock = ndisGetNDKBlock(a1);
          if ( NDKBlock )
          {
            v38 = *((_BYTE *)NDKBlock + 24);
            v52.NDKCapabilities = (_NDIS_NDK_CAPABILITIES *)((char *)NDKBlock + 32);
            v52.NDKEnabled = v38;
          }
          else
          {
            v52.NDKEnabled = 0;
            v52.NDKCapabilities = 0LL;
          }
        }
        if ( v15 >= 4u )
        {
          TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
          if ( TopSriovCurrentCapabilities )
          {
            v52.SriovCapabilities = a1->TopSriovCurrentCapabilities;
            if ( (unsigned int)ndisIovGetNicSwitchList(
                                 a1,
                                 TopNicSwitchCurrentCapabilities,
                                 TopSriovCurrentCapabilities,
                                 &v52.NicSwitchArray) )
              goto LABEL_41;
          }
        }
        v29 = a1->IfBlock;
        v52.MacAddressLength = v29->ifPhysAddress.Length;
        memmove(v52.CurrentMacAddress, v29->ifPhysAddress.Address, v52.MacAddressLength);
        ndisIfQueryBindingMiniportIfIndex(
          a1,
          &v52.BoundIfIndex,
          &v52.BoundIfNetluid,
          &v52.LowestIfIndex,
          &v52.LowestIfNetluid);
        v30 = a1->IfBlock;
        v52.AccessType = a1->TopFilterRestartAttributes.AccessType;
        v52.DirectionType = v30->DirectionType;
        v52.ConnectionType = a1->TopFilterRestartAttributes.ConnectionType;
        v52.IfType = v30->ifType;
        v52.IfConnectorPresent = v30->ifConnectorPresent;
        v52.DataBackFillSize = a1->TopFilterRestartAttributes.DataBackFillSize;
        v52.ContextBackFillSize = a1->TopFilterRestartAttributes.ContextBackFillSize;
        v52.MacOptions = a1->TopFilterRestartAttributes.MacOptions;
        v52.CompartmentId = v30->CompartmentId;
        if ( !(unsigned int)ndisGetPortList(a1, &v52.ActivePorts) )
        {
          BugCheckParameter3[0] = 0LL;
          BugCheckParameter3[1] = (ULONG_PTR)a2;
          v47 = Destination;
          v46[1] = (ULONG_PTR)a1;
          *(_QWORD *)&v48 = Paths;
          v46[0] = 0LL;
          KeInitializeEvent(Event, NotificationEvent, 0);
          a2->BindingAdapter = a1;
          v7 = 0;
          v4 = ndisInvokeBindAdapter(a2, BugCheckParameter3, &v52);
          if ( v4 == 259 )
          {
            ndisWaitForKernelObject(Event);
            v4 = DWORD2(v50);
          }
          if ( v4 )
            goto LABEL_35;
          if ( v46[0] )
          {
            if ( !(unsigned __int8)ndisReferenceOpenByHandle((struct _NDIS_OPEN_BLOCK *)v46[0], 2u) )
              KeBugCheckEx(0x7Cu, 0x16uLL, (ULONG_PTR)a2, (ULONG_PTR)BugCheckParameter3, v46[0]);
            v5 = 1;
            ndisIndicateInitialStateToBinding((struct _NDIS_OPEN_BLOCK *)v46[0]);
          }
          if ( MiniportSupportsReceiveThrottle(a1) )
          {
LABEL_63:
            ndisNotifyWmiBindUnbind(a1, a2, 1u);
LABEL_35:
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ZZL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v31,
                v33,
                0x1Cu,
                BugCheckParameter4,
                &a2->Name.Length,
                &a1->pAdapterInstanceName->Length);
            if ( (byte_14011D041 & 2) != 0 )
              McTemplateK0jqxzd_EtwWriteTransfer(
                v32,
                v31,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                a2->Name.Buffer,
                v4);
            goto LABEL_41;
          }
          if ( a2->IsIPv4 == 1 )
          {
            v39 = 0;
          }
          else if ( a2->IsIPv6 == 1 )
          {
            v39 = 1;
          }
          else
          {
            if ( a2->IsNdisTest6 != 1 )
              goto LABEL_63;
            v39 = 2;
          }
          ndisBindUnbindPeriodicReceives(v37, v39);
          goto LABEL_63;
        }
        ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_60:
        RELEASE_PROT_MUTEX(a2);
LABEL_44:
        ndisDereferenceProtocol(a2, 0, 8u, v6);
        goto LABEL_45;
      }
      if ( a2->MinorNdisVersion >= 0x14u )
      {
        v15 = 3;
        v16 = 280;
        goto LABEL_14;
      }
      if ( a2->MinorNdisVersion )
      {
        v15 = 2;
        v16 = 256;
        goto LABEL_14;
      }
    }
    v15 = 1;
    v16 = 248;
    goto LABEL_14;
  }
  v4 = -1073741823;
LABEL_45:
  if ( v52.ActivePorts )
    ExFreePoolWithTag(v52.ActivePorts, 0);
  if ( v52.NicSwitchArray )
    ExFreePoolWithTag(v52.NicSwitchArray, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Du,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      a2);
  return v4;
}
