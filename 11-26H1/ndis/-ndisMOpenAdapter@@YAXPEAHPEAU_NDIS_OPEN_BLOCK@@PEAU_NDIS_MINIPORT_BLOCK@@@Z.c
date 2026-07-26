/*
 * XREFs of ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140033880 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140034160 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034420 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034C20 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisInitializeEvent @ 0x14005A5B0 (NdisInitializeEvent.c)
 *     WPP_RECORDER_SF_qqZddZ @ 0x140061130 (WPP_RECORDER_SF_qqZddZ.c)
 *     ?ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14006A6B0 (-ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14009ECC4 (-ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140179A90 (-ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140179BD0 (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMOpenAdapter(int *a1, struct _NDIS_OPEN_BLOCK *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  int v4; // r12d
  _QWORD *FakeMac; // r13
  int v9; // edx
  _QWORD *Pool2; // rax
  void (__fastcall *v11)(void *, _NDIS_OID_REQUEST *, int); // rax
  void (__fastcall *RequestCompleteHandler)(void *, _NDIS_REQUEST *, int); // rcx
  int (__fastcall *v13)(void *, _NDIS_PACKET *); // r15
  _NDIS_M_DRIVER_BLOCK **v14; // rax
  _NDIS_M_DRIVER_BLOCK **p_DriverHandle; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  void (__fastcall *CancelSendHandler)(void *, void *); // rcx
  _NDIS_M_DRIVER_BLOCK *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  void (__fastcall *v21)(struct _NDIS_WORK_ITEM *, struct _NDIS_MINIPORT_BLOCK *); // rcx
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  int v23; // edx
  _NDIS_STATUS_UNBIND_WORKITEM *v24; // rax
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // eax
  char v26; // bp
  KIRQL v27; // dl
  char v28; // bp
  __int64 v29; // r9
  struct _X_FILTER *EthDB; // rbp
  int OpenMulticastBuffer; // eax
  struct _GUID *v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-48h]
  char v35; // [rsp+90h] [rbp+8h]

  ProtocolHandle = a2->ProtocolHandle;
  v4 = 0;
  FakeMac = 0LL;
  v35 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x29u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)ProtocolHandle,
      (char)a3);
  mem::ReadNoFence<unsigned long,void>(&a3->Flags);
  if ( !(unsigned __int8)ndisReferenceMiniport(a3, 0x2Eu) )
  {
    *a1 = -1073676286;
    goto LABEL_87;
  }
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    FakeMac = a3->FakeMac;
    if ( !FakeMac )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 192LL, 1835418702LL);
      FakeMac = Pool2;
      if ( !Pool2 )
      {
        *a1 = -1073741670;
LABEL_86:
        ndisDereferenceMiniport(a3, 0x2Eu);
        goto LABEL_87;
      }
      a3->FakeMac = Pool2;
      v35 = 1;
    }
    a2->MacHandle = FakeMac;
  }
  a2->MiniportAdapterContext = a3->MiniportAdapterContext;
  a2->CurrentLookahead = LOWORD(a3->MiniportCurrentLookahead);
  KeInitializeSpinLock(&a2->SpinLock);
  ndisMReferenceOpen((__int64)a2, 1u);
  if ( a3->MajorNdisVersion < 6u )
  {
    a2->WSendHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.SendHandler;
    a2->WSendPacketsHandler = a3->WSendPacketsHandler;
    a2->WTransferDataHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.TransferDataHandler;
  }
  a2->ProtocolMajorVersion = ProtocolHandle->MajorNdisVersion;
  if ( a2->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    RequestCompleteHandler = 0LL;
    a2->ReceiveCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
    v11 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisInvokeOidRequestComplete;
  }
  else
  {
    a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisMSendPacketCompleteToOpen;
    a2->ProtSendCompleteHandler = ProtocolHandle->SendCompleteHandler;
    a2->TransferDataCompleteHandler = ProtocolHandle->TransferDataCompleteHandler;
    a2->ReceiveHandler = ProtocolHandle->ReceiveHandler;
    a2->ReceiveCompleteHandler = ProtocolHandle->ReceiveCompleteHandler;
    a2->ResetCompleteHandler = ProtocolHandle->ResetCompleteHandler;
    a2->ReceivePacketHandler = ProtocolHandle->ReceivePacketHandler;
    v11 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisCompleteOidRequestToRequest;
    RequestCompleteHandler = ProtocolHandle->RequestCompleteHandler;
  }
  a2->RequestCompleteHandler = RequestCompleteHandler;
  v13 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  a2->OidRequestCompleteHandler = v11;
  a2->StatusHandler = ProtocolHandle->StatusHandler;
  a2->StatusCompleteHandler = ProtocolHandle->StatusCompleteHandler;
  a2->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
  a2->SendCompleteNdisPacketContext = a2->ProtocolBindingContext;
  a2->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
  a2->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
  a2->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
  a2->TransferDataHandler = (int (__fastcall *)(void *, void *, unsigned int, unsigned int, _NDIS_PACKET *, unsigned int *))ndisMTransferData;
  a2->BindingHandle = a2;
  if ( a3->MediaType == NdisMediumWan )
  {
    if ( (mem::ReadNoFence<unsigned long,void>(&a3->Flags) & 0x20000) == 0 )
      a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  }
  else
  {
    a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMSend;
  }
  a2->SendPacketsHandler = a3->SendPacketsHandler;
  if ( a3->MediaType == NdisMediumWan && (mem::ReadNoFence<unsigned long,void>(&a3->Flags) & 0x20000) == 0 )
    a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  if ( (mem::ReadNoFence<unsigned long,void>(&a3->Flags) & 0x20000) != 0 )
  {
    p_DriverHandle = &a3->DriverHandle;
    DriverHandle = a3->DriverHandle;
    if ( a3->MajorNdisVersion >= 6u )
    {
      a2->MiniportCoOidRequestHandler = DriverHandle->CoOidRequestHandler;
      a2->MiniportCoCreateVcHandler = (*p_DriverHandle)->CoCreateVcHandler;
      CancelSendHandler = (*p_DriverHandle)->MiniportDriverCharacteristics.CancelSendHandler;
    }
    else
    {
      a2->MiniportCoRequestHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler;
      a2->MiniportCoCreateVcHandler = (*p_DriverHandle)->MiniportCharacteristics.Ndis50Chars.CoCreateVcHandler;
      CancelSendHandler = (*p_DriverHandle)->MiniportCharacteristics.CancelSendPacketsHandler;
    }
    a2->CancelSendPacketsHandler = CancelSendHandler;
    a2->ActiveVcHead.Blink = &a2->ActiveVcHead;
    a2->ActiveVcHead.Flink = &a2->ActiveVcHead;
    a2->InactiveVcHead.Blink = &a2->InactiveVcHead;
    a2->InactiveVcHead.Flink = &a2->InactiveVcHead;
    v14 = &a3->DriverHandle;
    if ( !a2->SendHandler && !a2->SendPacketsHandler )
    {
      a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))NdisOffloadTcpForward;
      a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMRejectSendPackets;
      v14 = &a3->DriverHandle;
    }
  }
  else
  {
    v14 = &a3->DriverHandle;
  }
  v18 = *v14;
  v19 = 296LL;
  if ( a3->MajorNdisVersion >= 6u )
    v19 = 200LL;
  a2->CancelSendPacketsHandler = *(void (__fastcall **)(void *, void *))(&v18->Header.Type + v19);
  ndisSetupNdis6OpenHandlers(a2, ProtocolHandle, a3);
  if ( a3->MajorNdisVersion < 6u || a2->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    LOBYTE(v21) = 0;
    if ( a2->ProtocolHandle->MajorNdisVersion >= 6u )
      goto LABEL_48;
  }
  else
  {
    LOBYTE(v21) = 1;
  }
  if ( a3->Miniport5InNdis6Mode || (_BYTE)v21 )
  {
    MiniportHandle = a2->MiniportHandle;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        6,
        147,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a2);
    }
    a2->OpenFlags |= 0x10000000u;
    KeInitializeSpinLock(&a2->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock);
    a2->PnPState = Ndis5StateRunning;
    NdisInitializeEvent(&a2->PauseEvent);
    a2->OutstandingSends = 0;
    if ( MiniportHandle->MediaType != NdisMediumWan
      || (mem::ReadNoFence<unsigned long,void>(&MiniportHandle->Flags) & 0x20000) != 0 )
    {
      v13 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisSendWithPause;
    }
    a2->SendHandler = v13;
    a2->SendPacketsHandler = ndisSendPacketsWithPause;
    a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisSendCompleteWithPause;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v23,
        6,
        148,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a2);
    }
    v24 = (_NDIS_STATUS_UNBIND_WORKITEM *)ExAllocatePool2(64LL, 88LL, 1769423950LL);
    a2->StatusUnbindWorkItem = v24;
    if ( !v24 )
      goto LABEL_84;
    v24->WorkItem.Context = a3;
    v21 = ndisQueuedStatusUnbindAdapter;
    a2->StatusUnbindWorkItem->WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedStatusUnbindAdapter;
  }
LABEL_48:
  a2->SavedSendHandler = a2->SendHandler;
  a2->SavedSendPacketsHandler = a2->SendPacketsHandler;
  a2->SavedCancelSendPacketsHandler = a2->CancelSendPacketsHandler;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v33) = HIDWORD(a2);
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x6Eu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a3);
  }
  PnPDeviceState = a3->PnPDeviceState;
  if ( PnPDeviceState == NdisPnPDeviceStarted || ((PnPDeviceState - 2) & 0xFFFFFFFD) == 0 )
  {
    a2->MiniportNextOpen = a3->OpenQueue;
    ++a3->NumOpens;
    a3->OpenQueue = a2;
    ndisUpdateCheckForLoopbackFlag(a3);
    v26 = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v33) = HIDWORD(a2);
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        6u,
        0x6Fu,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a3);
    }
    if ( (byte_14011D041 & 2) != 0 )
    {
      LODWORD(v33) = (_DWORD)a2;
      LODWORD(v32) = a3->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        (__int64)v21,
        (__int64)&OpenFailedMiniportNotStarted,
        (__int64)&a3->InterfaceGuid,
        (__int64)&a3->InterfaceGuid,
        (__int64)v32,
        a3->NetLuid.Value,
        v33);
    }
    v26 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x70u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a3,
      (char)a2);
  if ( !v26 )
  {
LABEL_84:
    *a1 = -1073676281;
    goto LABEL_85;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x2Eu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a2);
  v27 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  if ( ProtocolHandle->Ref.Closing )
  {
    v28 = 0;
  }
  else
  {
    v28 = 1;
    a2->ProtocolNextOpen = ProtocolHandle->OpenQueue;
    ProtocolHandle->OpenQueue = a2;
  }
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v27);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x2Fu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a2,
      (char)ProtocolHandle);
  if ( !v28 )
  {
    *a1 = -1073676281;
    ndisDeQueueOpenOnMiniport(a2, a3);
LABEL_85:
    ndisMDereferenceOpenFromFailedCreationLocked(a2);
    goto LABEL_86;
  }
  EthDB = a3->EthDB;
  if ( EthDB )
    XNoteFilterOpenAdapter(a3->EthDB, a2);
  if ( a3->MediaType == NdisMedium802_3 )
  {
    OpenMulticastBuffer = ethAllocateOpenMulticastBuffer(EthDB, a2);
    *a1 = OpenMulticastBuffer;
    if ( OpenMulticastBuffer )
    {
      *a1 = -1073676281;
LABEL_80:
      if ( EthDB )
        XRemoveBindingFromLists(EthDB, a2);
      ndisDeQueueOpenOnMiniport(a2, a3);
      ndisDeQueueOpenOnProtocol(a2, ProtocolHandle);
      goto LABEL_85;
    }
  }
  if ( ProtocolHandle->MajorNdisVersion < 6u && v35 )
  {
    FakeMac[10] = ndisMTransferData;
    FakeMac[11] = ndisMReset;
    FakeMac[12] = a2->RequestHandler;
    FakeMac[9] = a2->SendHandler;
  }
  *a1 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqZddZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ProtocolHandle->MajorNdisVersion,
      (__int64)&ProtocolHandle->Name,
      v29,
      (int)v32,
      (char)a3,
      (char)a2,
      &ProtocolHandle->Name.Length,
      ProtocolHandle->MajorNdisVersion,
      ProtocolHandle->MinorNdisVersion,
      &a3->pAdapterInstanceName->Length);
    v4 = *a1;
  }
  if ( v4 )
    goto LABEL_80;
LABEL_87:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v34) = *a1;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      6u,
      0x2Bu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)ProtocolHandle,
      (char)a3,
      (char)a2,
      v34);
  }
}
