/*
 * XREFs of ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14004E590
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14004E440 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004E540 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14008FC60 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int v3; // edx
  _NDIS_FILTER_BLOCK *HighestFilter; // rax
  unsigned int ifOperStatusFlags; // ecx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rax
  int v10; // edx
  struct _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rax
  unsigned int NdisReserved; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *v15; // rax
  _NDIS_MINIPORT_OFFLOAD *v16; // rax
  _NDIS_OFFLOAD *p_TopCapabilities; // rcx
  __int128 v18; // xmm0
  unsigned int MaxHeaderSize; // eax
  unsigned int MaxNumQueuePairsForDefaultVPort; // eax
  __int64 v21; // xmm1_8
  __int64 v22; // xmm1_8
  unsigned __int8 v23[16]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+C0h] [rbp-40h] BYREF
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp; // [rsp+C4h] [rbp-3Ch]
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+D0h] [rbp-30h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+D8h] [rbp-28h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+E0h] [rbp-20h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+E4h] [rbp-1Ch]
  __int128 v35; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int Flags; // [rsp+F8h] [rbp-8h]
  __int128 v37; // [rsp+100h] [rbp+0h] BYREF
  __int64 v38; // [rsp+110h] [rbp+10h]
  unsigned int v39; // [rsp+118h] [rbp+18h]
  __int128 v40; // [rsp+120h] [rbp+20h] BYREF
  __int128 v41; // [rsp+130h] [rbp+30h]
  __int128 v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+50h]
  __int128 v44; // [rsp+160h] [rbp+60h] BYREF
  __int128 v45; // [rsp+170h] [rbp+70h]
  __int128 v46; // [rsp+180h] [rbp+80h]
  __int128 v47; // [rsp+190h] [rbp+90h]
  __int128 v48; // [rsp+1A0h] [rbp+A0h]
  unsigned int v49; // [rsp+1B0h] [rbp+B0h]
  __int128 v50; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v51; // [rsp+1D0h] [rbp+D0h]
  __int128 v52; // [rsp+1E0h] [rbp+E0h]
  __int128 v53; // [rsp+1F0h] [rbp+F0h]
  __int128 v54; // [rsp+200h] [rbp+100h]
  __int128 v55; // [rsp+210h] [rbp+110h]
  __int128 v56; // [rsp+220h] [rbp+120h]
  __int128 v57; // [rsp+230h] [rbp+130h]
  unsigned int v58; // [rsp+240h] [rbp+140h]
  _OWORD v59[14]; // [rsp+250h] [rbp+150h] BYREF

  MiniportHandle = a1->MiniportHandle;
  v25 = 0LL;
  v26 = 0;
  v30 = 0;
  v23[0] = 0;
  memset(v59, 0, 0xDCuLL);
  v35 = 0LL;
  Flags = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v44 = 0LL;
  v49 = 0;
  v45 = 0LL;
  v58 = 0;
  v46 = 0LL;
  v43 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      6,
      82,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1);
  }
  ndisMAcquireStInLockWithSpinLock(MiniportHandle, v23);
  v27 = 2621824;
  HighestFilter = MiniportHandle->HighestFilter;
  if ( HighestFilter )
  {
    MediaConnectStateIndicateUp = HighestFilter->MediaConnectStateIndicateUp;
    MediaDuplexStateIndicateUp = MiniportHandle->HighestFilter->MediaDuplexStateIndicateUp;
    XmitLinkSpeedIndicateUp = MiniportHandle->HighestFilter->XmitLinkSpeedIndicateUp;
    RcvLinkSpeedIndicateUp = MiniportHandle->HighestFilter->RcvLinkSpeedIndicateUp;
    PauseFunctionsIndicateUp = MiniportHandle->HighestFilter->PauseFunctionsIndicateUp;
    AutoNegotiationFlagsIndicateUp = MiniportHandle->HighestFilter->AutoNegotiationFlagsIndicateUp;
  }
  else
  {
    MediaConnectStateIndicateUp = MiniportHandle->MediaConnectState;
    MediaDuplexStateIndicateUp = MiniportHandle->MediaDuplexState;
    XmitLinkSpeedIndicateUp = MiniportHandle->XmitLinkSpeed;
    RcvLinkSpeedIndicateUp = MiniportHandle->RcvLinkSpeed;
    PauseFunctionsIndicateUp = MiniportHandle->PauseFunctions;
    AutoNegotiationFlagsIndicateUp = MiniportHandle->AutoNegotiationFlags;
  }
  memset(&v24.Guid, 0, 52);
  v24.StatusBufferSize = 40;
  *((_DWORD *)&v24.Header + 1) = 0;
  *(_OWORD *)&v24.PortNumber = 0LL;
  v24.Flags = 3;
  v24.RequestId = 0LL;
  v24.Header = (_NDIS_OBJECT_HEADER)7340440;
  v24.SourceHandle = MiniportHandle;
  v24.StatusCode = 1073807383;
  v24.StatusBuffer = &v27;
  v24.DestinationHandle = a1;
  ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
  if ( ndisMReferenceIfBlock(MiniportHandle, MPIFREF_INITIALSTATE) )
  {
    LODWORD(v25) = 786816;
    HIDWORD(v25) = MiniportHandle->IfBlock->ifOperStatus;
    ifOperStatusFlags = MiniportHandle->IfBlock->ifOperStatusFlags;
    memset(&v24.Guid, 0, 52);
    v24.StatusBufferSize = 12;
    *((_DWORD *)&v24.Header + 1) = 0;
    v26 = ifOperStatusFlags;
    *(_OWORD *)&v24.PortNumber = 0LL;
    v24.Flags = 1;
    v24.RequestId = 0LL;
    v24.Header = (_NDIS_OBJECT_HEADER)7340440;
    v24.SourceHandle = MiniportHandle;
    v24.StatusCode = 1073807395;
    v24.StatusBuffer = &v25;
    v24.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
    ndisMDereferenceIfBlock(MiniportHandle, 0x11u);
  }
  Offload = MiniportHandle->Offload;
  if ( Offload )
  {
    if ( Offload->SupportsTopOffload == 1 )
    {
      p_TopCapabilities = &Offload->TopCapabilities;
      v59[0] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v59[1] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v59[2] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v59[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v59[4] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      v59[5] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      v59[6] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize;
      v18 = *(_OWORD *)&p_TopCapabilities->IPsecV2.Encapsulation;
      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
      v59[7] = v18;
      v59[8] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v59[9] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v59[10] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v59[11] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v59[12] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      *(_QWORD *)&v59[13] = *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      DWORD2(v59[13]) = p_TopCapabilities->LsoV2.IPv4.MinSegmentCount;
      *(_OWORD *)&v24.PortNumber = 0LL;
      v24.Flags = 1;
      *((_DWORD *)&v24.Header + 1) = 0;
      v24.Header = (_NDIS_OBJECT_HEADER)7340440;
      memset(&v24.Guid, 0, 52);
      v24.StatusBuffer = v59;
      v24.RequestId = 0LL;
      v24.SourceHandle = MiniportHandle;
      v24.StatusCode = 1073872902;
      v24.StatusBufferSize = 220;
      v24.DestinationHandle = a1;
      ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
    }
    v16 = MiniportHandle->Offload;
    if ( v16->SupportsTcpConnectionOffload == 1 && !v16->TopConnectionOffloadPaused )
    {
      v35 = *(_OWORD *)&v16->TopTcpConnectionOffloadCapabilities.Header.Type;
      Flags = v16->TopTcpConnectionOffloadCapabilities.Flags;
      *(_OWORD *)&v24.PortNumber = 0LL;
      v24.Flags = 1;
      *((_DWORD *)&v24.Header + 1) = 0;
      v24.Header = (_NDIS_OBJECT_HEADER)7340440;
      memset(&v24.Guid, 0, 52);
      v24.StatusBuffer = &v35;
      v24.RequestId = 0LL;
      v24.SourceHandle = MiniportHandle;
      v24.StatusCode = 1073872899;
      v24.StatusBufferSize = 20;
      v24.DestinationHandle = a1;
      ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
    }
  }
  HDSplitCurrentConfig = MiniportHandle->HDSplitCurrentConfig;
  if ( HDSplitCurrentConfig )
  {
    v37 = *(_OWORD *)&HDSplitCurrentConfig->Header.Type;
    v38 = *(_QWORD *)&HDSplitCurrentConfig->HDSplitCombineFlags;
    MaxHeaderSize = HDSplitCurrentConfig->MaxHeaderSize;
    *(_OWORD *)&v24.PortNumber = 0LL;
    v24.Flags = 1;
    *((_DWORD *)&v24.Header + 1) = 0;
    v39 = MaxHeaderSize;
    memset(&v24.Guid, 0, 52);
    v24.StatusBuffer = &v37;
    v24.RequestId = 0LL;
    v24.Header = (_NDIS_OBJECT_HEADER)7340440;
    v24.SourceHandle = MiniportHandle;
    v24.StatusCode = 1073872908;
    v24.StatusBufferSize = 28;
    v24.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
  }
  if ( !MiniportHandle->NumReceiveQueues )
  {
    TopNicSwitchCurrentCapabilities = MiniportHandle->TopNicSwitchCurrentCapabilities;
    if ( TopNicSwitchCurrentCapabilities || MiniportHandle->TopReceiveFilterCurrentCapabilities )
    {
      TopSriovCurrentCapabilities = MiniportHandle->TopSriovCurrentCapabilities;
      if ( (!TopSriovCurrentCapabilities || (TopSriovCurrentCapabilities->SriovCapabilities & 3) != 3)
        && !ndisIovNicSwitchWithoutIovSupported(TopNicSwitchCurrentCapabilities) )
      {
        TopReceiveFilterCurrentCapabilities = MiniportHandle->TopReceiveFilterCurrentCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
        {
          v44 = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->Header.Type;
          v45 = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->NumQueues;
          v46 = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->SupportedMacHeaderFields;
          v47 = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->MinLookaheadSplitSize;
          v48 = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->SupportedIPv6HeaderFields;
          NdisReserved = TopReceiveFilterCurrentCapabilities->NdisReserved;
          *(_OWORD *)&v24.PortNumber = 0LL;
          v24.Flags = 1;
          *((_DWORD *)&v24.Header + 1) = 0;
          v49 = NdisReserved;
          memset(&v24.Guid, 0, 52);
          v24.StatusBuffer = &v44;
          v24.RequestId = 0LL;
          v24.Header = (_NDIS_OBJECT_HEADER)7340440;
          v24.SourceHandle = MiniportHandle;
          v24.StatusCode = 1073872912;
          v24.StatusBufferSize = 84;
          v24.DestinationHandle = a1;
          ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
        }
        v15 = MiniportHandle->TopNicSwitchCurrentCapabilities;
        if ( v15 )
        {
          v50 = *(_OWORD *)&v15->Header.Type;
          v51 = *(_OWORD *)&v15->NumMacAddressesPerPort;
          v52 = *(_OWORD *)&v15->NicSwitchCapabilities;
          v53 = *(_OWORD *)&v15->MaxNumVFs;
          v54 = *(_OWORD *)&v15->NdisReserved7;
          v55 = *(_OWORD *)&v15->NdisReserved10;
          v56 = *(_OWORD *)&v15->NdisReserved13;
          v57 = *(_OWORD *)&v15->NdisReserved17;
          MaxNumQueuePairsForDefaultVPort = v15->MaxNumQueuePairsForDefaultVPort;
          *(_OWORD *)&v24.PortNumber = 0LL;
          v24.Flags = 1;
          *((_DWORD *)&v24.Header + 1) = 0;
          v58 = MaxNumQueuePairsForDefaultVPort;
          memset(&v24.Guid, 0, 52);
          v24.StatusBuffer = &v50;
          v24.RequestId = 0LL;
          v24.Header = (_NDIS_OBJECT_HEADER)7340440;
          v24.SourceHandle = MiniportHandle;
          v24.StatusCode = 1073872960;
          v24.StatusBufferSize = 132;
          v24.DestinationHandle = a1;
          ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
        }
      }
    }
  }
  TopHwTimestampCapabilities = MiniportHandle->TopHwTimestampCapabilities;
  if ( TopHwTimestampCapabilities )
  {
    v40 = *(_OWORD *)&TopHwTimestampCapabilities->Header.Type;
    v41 = *(_OWORD *)&TopHwTimestampCapabilities->CrossTimestamp;
    v42 = *(_OWORD *)&TopHwTimestampCapabilities->Reserved2;
    v21 = *(_QWORD *)&TopHwTimestampCapabilities->TimestampFlags.AllReceiveHw;
    *(_OWORD *)&v24.PortNumber = 0LL;
    v24.Flags = 1;
    *((_DWORD *)&v24.Header + 1) = 0;
    v24.Header = (_NDIS_OBJECT_HEADER)7340440;
    memset(&v24.Guid, 0, 52);
    v24.SourceHandle = MiniportHandle;
    v24.RequestId = 0LL;
    v24.StatusCode = 1074073600;
    v43 = v21;
    v24.StatusBuffer = &v40;
    v24.StatusBufferSize = 56;
    v24.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
  }
  TopTimestampConfig = MiniportHandle->TopTimestampConfig;
  if ( TopTimestampConfig )
  {
    v40 = *(_OWORD *)&TopTimestampConfig->Header.Type;
    v41 = *(_OWORD *)&TopTimestampConfig->CrossTimestamp;
    v42 = *(_OWORD *)&TopTimestampConfig->Reserved2;
    v22 = *(_QWORD *)&TopTimestampConfig->TimestampFlags.AllReceiveHw;
    *(_OWORD *)&v24.PortNumber = 0LL;
    v24.Flags = 1;
    *((_DWORD *)&v24.Header + 1) = 0;
    v24.Header = (_NDIS_OBJECT_HEADER)7340440;
    memset(&v24.Guid, 0, 52);
    v24.SourceHandle = MiniportHandle;
    v24.RequestId = 0LL;
    v24.StatusCode = 1074073601;
    v43 = v22;
    v24.StatusBuffer = &v40;
    v24.StatusBufferSize = 56;
    v24.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v24, 2u);
  }
  ndisMReleaseStInLockAndSpinLock(MiniportHandle, v23[0]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      6,
      83,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1);
  }
}
