/*
 * XREFs of ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800
 * Callers:
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140183FD0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140022550 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisMIndicateStatusEx @ 0x140052A20 (NdisMIndicateStatusEx.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057C30 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZD @ 0x14006CED0 (WPP_RECORDER_SF_qZD.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1400706C0 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007B550 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007B590 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140080980 (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140085370 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140087E90 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140088080 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400912FC (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140091624 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C67A4 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E7FA8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014427C (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1401684B0 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016EDD0 (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r15
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  unsigned __int8 MajorNdisVersion; // di
  unsigned int Flags; // r14d
  unsigned __int8 SendFlags; // r13
  _NET_IF_MEDIA_CONNECT_STATE v7; // r12d
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  unsigned int v14; // edi
  unsigned __int8 v15; // r14
  _UNICODE_STRING *v16; // r9
  KIRQL v17; // al
  unsigned __int8 v18; // r15
  unsigned int v19; // ecx
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rcx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  unsigned __int8 v24; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v25; // rcx
  char v26; // di
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int ifOperStatusFlags; // eax
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v29; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING *pAdapterInstanceName; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+54h] [rbp-ACh] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v36; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+118h] [rbp+18h]
  _DWORD v40[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v41[224]; // [rsp+140h] [rbp+40h] BYREF

  DriverHandle = a1->DriverHandle;
  v35 = 0;
  v38 = 0LL;
  v39 = 0;
  v34 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      46,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1);
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock
    && MiniportSGDmaBlock->DmaAdapterRefCount == 1
    && (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x240) != 0 )
  {
    a1->MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFDBF);
  }
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  v33 = MajorNdisVersion;
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0x7FCFFFDFu);
  a1->PnPFlags &= ~0x10u;
  Flags = a1->Flags;
  SendFlags = a1->SendFlags;
  ndisMDeQueueWorkItem(a1, NdisWorkItemMiniportCallback, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemSend, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetRequested, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetInProgress, 0LL, 0LL);
  a1->PacketList.Blink = &a1->PacketList;
  a1->PacketList.Flink = &a1->PacketList;
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 2u);
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFFE);
  a1->CurrentDevicePowerState = PowerDeviceD0;
  v7 = MediaConnectStateDisconnected;
  a1->State = NdisMiniportInitializing;
  memset(&v36, 0, sizeof(v36));
  memset(v41, 0, sizeof(v41));
  a1->LinkStateIndicationFlags = 0;
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x20000000u);
  if ( MajorNdisVersion >= 6u )
  {
    v40[1] = a1->DefaultPortSendControlState;
    v40[2] = a1->DefaultPortRcvControlState;
    v40[3] = a1->DefaultPortSendAuthorizationState;
    v40[4] = a1->DefaultPortRcvAuthorizationState;
    AllocatedResources = a1->AllocatedResources;
    v40[0] = 1311104;
    v36.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v36.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v36.IMDeviceInstanceContext = a1->DeviceContext;
    v36.MiniportAddDeviceContext = a1->AddDeviceContext;
    v36.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v40;
    v36.NetLuid.Value = a1->NetLuid.Value;
    v36.IfIndex = a1->IfIndex;
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x100) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v8 = ndisMInvokeInitialize(a1, &v36);
  }
  else
  {
    a1->GeneralAttributes = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)v41;
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
    v8 = ((__int64 (__fastcall *)(int *, int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, void *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
           &v35,
           &v34,
           ndisMediumArray,
           15LL,
           a1,
           a1->ConfigurationHandle);
  }
  v14 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    pAdapterInstanceName = a1->pAdapterInstanceName;
    WPP_RECORDER_SF_qZD(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v11, v12, BugCheckParameter4);
  }
  if ( v14 )
  {
    a1->State = NdisMiniportHalted;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(pAdapterInstanceName) = v14;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x30u,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1,
        pAdapterInstanceName);
    }
    if ( (byte_14011D043 & 2) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v10,
        &MiniportInitializeHandlerFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v14,
        1,
        0);
    goto LABEL_23;
  }
  if ( !a1->GeneralAttributes )
  {
    v14 = -1073741823;
LABEL_23:
    ndisMDeregisterBugCheckHandler(a1);
    if ( a1->TimerQueue || a1->Interrupt || a1->InterruptEx )
    {
      v16 = a1->pAdapterInstanceName;
      if ( a1->Interrupt )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v16, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
      }
      if ( a1->InterruptEx )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v16, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->InterruptEx, 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v16, "Init failed without deregistering timer");
      KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->TimerQueue, 0LL);
    }
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x80000000);
    a1->PnPFlags |= 0x4000u;
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFFE);
    v15 = v33;
    goto LABEL_71;
  }
  a1->State = NdisMiniportPaused;
  ndisMRegisterBugCheckHandler((char *)a1);
  v17 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  v18 = v17;
  v19 = a1->Flags & 0x20002040;
  a1->SendFlags = SendFlags;
  a1->PnPFlags &= 0xFFFDBFFF;
  a1->Flags = v19 | Flags & 0xDFFFDFFF;
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFFD);
  a1->PnPFlags &= ~4u;
  v15 = v33;
  if ( v33 < 6u )
  {
    Interrupt = a1->Interrupt;
    if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
      a1->Flags &= ~1u;
    else
      a1->Flags |= 1u;
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x20000000) != 0 )
      v7 = MediaConnectStateConnected;
    a1->GeneralAttributes->MediaConnectState = v7;
    a1->GeneralAttributes->MediaDuplexState = MediaDuplexStateUnknown;
    a1->GeneralAttributes->MaxXmitLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->XmitLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->MaxRcvLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->RcvLinkSpeed = 0x40000000LL;
  }
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = a1->GeneralAttributes->MediaConnectState;
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    GeneralAttributes = a1->GeneralAttributes;
    a1->MiniportRcvLinkSpeed = GeneralAttributes->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = GeneralAttributes->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = GeneralAttributes->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = GeneralAttributes->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = a1->GeneralAttributes->MediaConnectState;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x20000000u);
    else
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xDFFFFFFF);
  }
  v24 = a1->LinkStateIndicationFlags;
  if ( (v24 & 2) == 0 )
  {
    v25 = a1->GeneralAttributes;
    a1->RcvLinkSpeed = v25->RcvLinkSpeed;
    a1->XmitLinkSpeed = v25->XmitLinkSpeed;
  }
  if ( (v24 & 4) == 0 )
    a1->MediaDuplexState = a1->GeneralAttributes->MediaDuplexState;
  v26 = ndisIfSetInterfaceState(a1, 0, v18);
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x20000000) != 0 )
    ndisMSetIndicatePacketHandler(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      49,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1);
  ndisSetWakeUpTimer(a1);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v18);
  ndisMDoOidRequest(a1);
  ndisMNotifyMachineName(a1);
  if ( IoWMIRegistrationControl(a1->DeviceObject, 1u) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3,
      1,
      50,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1);
  }
  if ( v26 && ndisMReferenceIfBlock(a1, 0xBu) )
  {
    IfBlock = a1->IfBlock;
    LODWORD(v38) = 786816;
    HIDWORD(v38) = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    memset(&StatusIndication.Guid, 0, 52);
    v39 = ifOperStatusFlags;
    *((_DWORD *)&StatusIndication.Header + 1) = 0;
    StatusIndication.StatusBufferSize = 12;
    memset(&StatusIndication.PortNumber, 0, 32);
    StatusIndication.StatusBuffer = &v38;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    ndisMDereferenceIfBlock(a1, 0xBu);
  }
  ndisUpdatePMCurrentCapabilities(a1);
  a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
  v14 = 0;
  ndisLogMiniportEvent(a1, NdisMEvent_MiniportPmInitialized);
  if ( (a1->PMAdvertisedCapabilities.Flags & 6) != 0 )
  {
    ndisSelectiveSuspendInitialize(a1);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 9);
    if ( !(unsigned int)Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !a1->SelectiveSuspend )
        goto LABEL_69;
      goto LABEL_68;
    }
    if ( a1->SelectiveSuspend )
    {
      if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL )
      {
LABEL_68:
        ndisSelectiveSuspendStop(a1, 7u);
        goto LABEL_69;
      }
      ndisSelectiveSuspendStopWdf(a1, 7);
    }
  }
LABEL_69:
  if ( a1->AoAc )
    ndisAoAcPmInitTempRef(a1);
LABEL_71:
  v29 = a1->GeneralAttributes;
  if ( v29 )
  {
    if ( v15 >= 6u )
      ExFreePoolWithTag(v29, 0);
    a1->GeneralAttributes = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(pAdapterInstanceName) = v14;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x33u,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1,
      pAdapterInstanceName);
  }
  return v14;
}
