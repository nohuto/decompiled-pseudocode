/*
 * XREFs of ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540
 * Callers:
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14007B620 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     NdisWriteErrorLogEntry @ 0x140005D80 (NdisWriteErrorLogEntry.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x140012620 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016DC0 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400202E0 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140022550 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1400455E0 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048230 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x140054100 (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x140054300 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140054530 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140054E30 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057C30 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_dd @ 0x140060390 (WPP_RECORDER_SF_dd_ea_140060390.c)
 *     NdisWriteConfiguration @ 0x140067100 (NdisWriteConfiguration.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x140068D70 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400692F0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006AF00 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006BEC0 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisInitializeTimer @ 0x140070C20 (NdisInitializeTimer.c)
 *     ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400723C0 (-ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x140073550 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400740B0 (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140079530 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007B550 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007B590 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140080170 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140080980 (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1400826E0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140085370 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008D080 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x14008E930 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x140090530 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES@@@Z @ 0x1400923C0 (-ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROP.c)
 *     ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140092850 (-ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A1E4C (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1400B49B0 (-nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B55F0 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B56B0 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E125C (-ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E7FA8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140138320 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140138F74 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x14013A050 (-ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDA.c)
 *     ?ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141B34 (-ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141B78 (-ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401425A0 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014427C (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140163D10 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140164210 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140167360 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1401684B0 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140168CE0 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168E20 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x14016A550 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016AF50 (-ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016AFE0 (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14016D6E0 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ndisPktMonMiniportRegister @ 0x14016E5F0 (ndisPktMonMiniportRegister.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016EDD0 (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140176540 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1401790B0 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x14017A440 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisMInitializeAdapter(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *a3,
        struct _UNICODE_STRING *a4,
        void *a5)
{
  bool v8; // r14
  __int64 v9; // rdx
  unsigned __int8 MajorNdisVersion; // r12
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // r8
  NTSTATUS v13; // eax
  int PciDeviceCustomProperties; // r15d
  _NDIS_MINIPORT_STATS *Pool2; // rax
  _NDIS_M_DRIVER_BLOCK *v16; // rcx
  void (__fastcall *ShutdownHandlerEx)(void *, _NDIS_SHUTDOWN_ACTION); // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rcx
  PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  int v23; // eax
  char v24; // r12
  char v25; // r15
  _NDIS_IF_BLOCK *v26; // rax
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rcx
  char v28; // r15
  char v29; // di
  char v30; // si
  __int16 v31; // dx
  int v32; // edx
  KIRQL v33; // al
  KIRQL v34; // si
  int ReenumerateSelfInterface; // eax
  int v36; // edx
  unsigned int v37; // edi
  NDIS_STATUS v38; // eax
  PVOID v39; // rdi
  __int32 v40; // edx
  __int64 BaseMiniport; // rcx
  NDIS_STATUS v42; // edi
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES *p_PciDeviceCustomProperties; // rax
  NDIS_STATUS v45; // eax
  bool v46; // cf
  unsigned __int8 v47; // di
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  _NDIS_MEDIUM MediaType; // eax
  KIRQL v50; // di
  bool v51; // r12
  __int64 v52; // rcx
  unsigned __int8 v53; // r15
  int MiniportInfo; // eax
  NTSTATUS v55; // eax
  int DefaultNicSwitch; // esi
  unsigned int PnPFlags; // r8d
  unsigned int v58; // edx
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // eax
  unsigned __int8 v60; // al
  unsigned int PnPCapabilities; // edx
  unsigned __int8 v62; // r8
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  unsigned int v64; // ecx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  _NDIS_DEVICE_POWER_STATE v66; // eax
  bool v67; // zf
  bool v68; // cc
  unsigned int v69; // eax
  KIRQL v70; // di
  PNDIS_RW_LOCK_EX *EthDB; // rcx
  int v72; // edx
  __int64 v73; // rcx
  int v74; // edx
  __int64 v75; // rcx
  NTSTATUS v76; // edi
  unsigned __int8 v77; // al
  __int64 v78; // rcx
  NTSTATUS v79; // edi
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  NTSTATUS v81; // edi
  struct _NDIS_IF_BLOCK *v82; // rdx
  int updated; // edi
  __int64 v84; // rcx
  int OidList; // edi
  _NDIS_MINIPORT_OFFLOAD *v86; // rax
  _NDIS_MINIPORT_OFFLOAD *v87; // rax
  _NDIS_MINIPORT_OFFLOAD *v88; // rax
  _NDIS_MINIPORT_OFFLOAD *v89; // rcx
  unsigned __int8 v90; // si
  KIRQL v91; // al
  _REFERENCE_EX *p_Ref; // rcx
  enum Ndis::ReadBindingsOptions::Flags v93; // r8d
  int v94; // edx
  int v95; // edx
  int v96; // edx
  int v97; // edx
  int v98; // edx
  unsigned __int8 (__fastcall *v99)(_NDIS_MINIPORT_BLOCK *); // rax
  KIRQL v100; // r8
  _NDIS_DEVICE_POWER_STATE v101; // eax
  unsigned int v102; // eax
  char v103; // di
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v105; // rcx
  __int64 OutputBufferLength; // [rsp+20h] [rbp-E0h]
  char v108[8]; // [rsp+28h] [rbp-D8h]
  __int64 v109; // [rsp+30h] [rbp-D0h]
  __int64 v110; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v111; // [rsp+40h] [rbp-C0h] BYREF
  char v112; // [rsp+41h] [rbp-BFh]
  char v113; // [rsp+42h] [rbp-BEh]
  char v114; // [rsp+43h] [rbp-BDh]
  char v115[4]; // [rsp+44h] [rbp-BCh] BYREF
  char v116; // [rsp+48h] [rbp-B8h]
  bool v117; // [rsp+49h] [rbp-B7h]
  unsigned __int8 v118; // [rsp+4Ah] [rbp-B6h]
  char v119; // [rsp+4Bh] [rbp-B5h]
  char v120; // [rsp+4Ch] [rbp-B4h]
  char v121; // [rsp+4Dh] [rbp-B3h]
  char i; // [rsp+4Eh] [rbp-B2h]
  char v123; // [rsp+4Fh] [rbp-B1h]
  int v124; // [rsp+50h] [rbp-B0h] BYREF
  int Status; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v126; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v127; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-A0h] BYREF
  int v129; // [rsp+68h] [rbp-98h]
  char v130; // [rsp+6Ch] [rbp-94h]
  char v131; // [rsp+6Dh] [rbp-93h]
  __int16 v132; // [rsp+6Eh] [rbp-92h]
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  int v134; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v136; // [rsp+A0h] [rbp-60h] BYREF
  struct _X_FILTER *v137[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v138; // [rsp+F0h] [rbp-10h]
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+100h] [rbp+0h] BYREF
  char v140[160]; // [rsp+120h] [rbp+20h] BYREF
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES v141; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING Keyword; // [rsp+2A0h] [rbp+1A0h] BYREF
  _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState; // [rsp+2B0h] [rbp+1B0h]
  GUID InterfaceClassGuid; // [rsp+2B8h] [rbp+1B8h] BYREF
  GUID v145; // [rsp+2C8h] [rbp+1C8h] BYREF
  _OWORD v146[3]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v147; // [rsp+308h] [rbp+208h]
  int v148; // [rsp+310h] [rbp+210h]
  char v149; // [rsp+320h] [rbp+220h] BYREF

  *(_DWORD *)v115 = 1;
  v124 = 1;
  v134 = 0;
  memset(&v136, 0, sizeof(v136));
  v116 = 0;
  v119 = 0;
  v123 = 0;
  i = 0;
  v8 = 0;
  *(_OWORD *)v137 = 0LL;
  v117 = 0;
  v138 = 0LL;
  DestinationString = 0LL;
  v127 = 0;
  v126 = 0;
  v114 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v121 = 0;
  v120 = 0;
  memset(v146, 0, sizeof(v146));
  v111 = 0;
  v147 = 0LL;
  v148 = 0;
  memset(&v141, 0, sizeof(v141));
  v113 = 0;
  v145 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisIfEnsureNsiInitialized();
  MajorNdisVersion = a1->MajorNdisVersion;
  v118 = MajorNdisVersion;
  if ( !ndisReferenceDriver(a1, 2u) )
    goto LABEL_43;
  v114 = 1;
  DestinationString.Buffer = (wchar_t *)&v149;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, &a2->BaseName) < 0 )
    goto LABEL_43;
  v13 = IoCreateSymbolicLink(&DestinationString, &a2->FdoName);
  PciDeviceCustomProperties = v13;
  v117 = v13 >= 0 || v13 == -1073741771;
  a2->DeviceContext = a5;
  a2->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  a2->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  a2->TopIndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a2->TopIndicateLoopbackNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a2->EthRxIndicateHandler = (void (__fastcall *)(_X_FILTER *, void *, char *, void *, unsigned int, void *, unsigned int, unsigned int))EthFilterDprIndicateReceive;
  a2->EthRxCompleteHandler = (void (__fastcall *)(_X_FILTER *))EthFilterDprIndicateReceiveComplete;
  a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))NdisMSendComplete;
  a2->SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))NdisMSendNetBufferListsComplete;
  a2->TDCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int, unsigned int))NdisMTransferDataComplete;
  a2->ResetCompleteHandler = (void (__fastcall *)(void *, int, unsigned __int8))NdisMResetComplete;
  a2->StatusHandler = (void (__fastcall *)(void *, int, void *, unsigned int))NdisMIndicateStatus;
  a2->StatusCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
  a2->SendResourcesHandler = (void (__fastcall *)(void *))NdisMSendResourcesAvailable;
  a2->QueryCompleteHandler = (void (__fastcall *)(void *, int))NdisMQueryInformationComplete;
  a2->SetCompleteHandler = (void (__fastcall *)(void *, int))NdisMSetInformationComplete;
  a2->WanSendCompleteHandler = (void (__fastcall *)(void *, void *, int))ndisMWanSendCompleteInternal;
  a2->WanRcvHandler = (void (__fastcall *)(int *, void *, void *, unsigned __int8 *, unsigned int))NdisMWanIndicateReceive;
  a2->WanRcvCompleteHandler = (void (__fastcall *)(void *, void *))NdisMWanIndicateReceiveComplete;
  a2->NoFilter.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  a2->Next.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  a2->NormalTopReceive = 1;
  a2->NoFilter.SendNetBufferListsCompleteContext = a2;
  a2->NoFilter.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  a2->NoFilter.SendNetBufferListsCompleteObject = &a2->Header;
  a2->Next.SendNetBufferListsCompleteContext = a2;
  a2->Next.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  a2->Next.SendNetBufferListsCompleteObject = &a2->Header;
  a2->NoFilter.RequestHandle = a2;
  a2->NoFilter.DirectRequestHandle = a2;
  a2->Next.RequestHandle = a2;
  a2->Next.DirectRequestHandle = a2;
  a2->TimeOfInitialization.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( MajorNdisVersion >= 6u )
  {
    DriverHandle = a2->DriverHandle;
    a2->Miniport5HasNdis6Component = 1;
    ReturnNetBufferListsHandler = DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsContext = a2->MiniportAdapterContext;
    a2->NoFilter.ReturnNetBufferListsTracker = a2->NblTracker;
    a2->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a2->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SynchronousReturnPacketContext = a2;
    if ( a1->CoSendNetBufferListsHandler )
      _InterlockedOr((volatile signed __int32 *)&a2->Flags, 0x20000u);
  }
  else
  {
    Pool2 = (_NDIS_MINIPORT_STATS *)ExAllocatePool2(64LL, 112 * ndisMaxNumberOfProcessors, 538985550LL);
    a2->BottomIfStats = Pool2;
    if ( !Pool2 )
    {
LABEL_43:
      v24 = 0;
LABEL_44:
      v25 = 0;
      goto LABEL_45;
    }
    v16 = a2->DriverHandle;
    a2->DeferredSendHandler = ndisMDeferredSend;
    a2->DisableInterruptHandler = v16->MiniportCharacteristics.Ndis50Chars.DisableInterruptHandler;
    a2->EnableInterruptHandler = v16->MiniportCharacteristics.Ndis50Chars.EnableInterruptHandler;
    a2->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
    a2->NoFilter.ReturnNetBufferListsContext = a2;
    a2->NoFilter.ReturnNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)64;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SendHandler = v16->MiniportCharacteristics.Ndis50Chars.SendHandler;
    if ( MajorNdisVersion >= 4u )
    {
      if ( a1->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler )
        a2->InfoFlags |= 0x10u;
      a2->SynchronousReturnPacketHandler = v16->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      a2->MiniportReturnPacketHandler = v16->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      a2->SynchronousReturnPacketContext = a2->MiniportAdapterContext;
      if ( a1->MiniportDriverCharacteristics.ShutdownHandlerEx )
      {
        a2->SendFlags |= 1u;
        a2->DeferredSendHandler = ndisMDeferredSendPackets;
        ShutdownHandlerEx = a1->MiniportDriverCharacteristics.ShutdownHandlerEx;
        a2->InfoFlags |= 0x8000000u;
        a2->WSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ShutdownHandlerEx;
      }
      if ( MajorNdisVersion >= 5u )
      {
        a2->InfoFlags |= 0x200u;
        if ( a1->MiniportCharacteristics.Ndis50Chars.CoSendPacketsHandler )
        {
          _InterlockedOr((volatile signed __int32 *)&a2->Flags, 0x20000u);
          a1->CoOidRequestHandler = (int (__fastcall *)(void *, void *, _NDIS_OID_REQUEST *))ndisMCoOidRequestToRequest;
          a2->NextCoOidRequestHandle = a2;
        }
      }
    }
  }
  ndisReferenceMiniportNoCheck(a2, 0x18u);
  v121 = 1;
  if ( a2->CurrentDevicePowerState == PowerDeviceUnspecified )
  {
    a2->CurrentDevicePowerState = PowerDeviceD0;
    a2->DriverPowerState = PowerDeviceD0;
  }
  ndisQueryPowerCapabilities(a2);
  ndisMInitializeInitMode((char *)a2);
  a2->NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(
                                                  0,
                                                  (__int64)a2,
                                                  (__int64)a2->pAdapterInstanceName);
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  a2->PeriodicReceivesNblCountIndex = PerProcessorSlot;
  if ( !PerProcessorSlot )
    goto LABEL_43;
  v21 = 0;
  for ( i = 1; v21 < ndisMaxNumberOfProcessors; *(_DWORD *)((char *)a2->PeriodicReceivesNblCountIndex + v22) = 6 )
    v22 = v21++ << 12;
  _InterlockedOr((volatile signed __int32 *)&a2->Flags, 0x20000002u);
  _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFFE);
  if ( (a1->Flags & 2) != 0 )
  {
    a2->PnPFlags |= 0x100000u;
    if ( !ndisDriverTrackAlloc || (v67 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = a2, !v67) )
      ndisMiniportTrackAlloc = 0LL;
  }
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( (a2->PnPFlags & 0x100000) == 0 )
      goto LABEL_34;
  }
  else if ( ndisDatapathVerifierMode != 2 )
  {
    goto LABEL_34;
  }
  a2->DriverVerifyFlags |= 0x800u;
LABEL_34:
  if ( a2->MajorNdisVersion < 6u )
    goto LABEL_40;
  if ( ndisNblContextVerifierMode == 1 )
  {
    if ( (a2->PnPFlags & 0x100000) == 0 )
      goto LABEL_40;
  }
  else if ( ndisNblContextVerifierMode != 2 )
  {
    goto LABEL_40;
  }
  a2->DriverVerifyFlags |= 0x1000u;
LABEL_40:
  v23 = ndisRssV2Initialize(a2);
  if ( v23 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v109) = v23;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a2,
        v109);
    }
    goto LABEL_43;
  }
  if ( a1->ReenumerateFailedAdapterHandler && !a2->ReenumerateSelfInterface )
  {
    ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(
                                 a2->NextDeviceObject,
                                 (PVOID *)&a2->ReenumerateSelfInterface);
    PciDeviceCustomProperties = ReenumerateSelfInterface;
    if ( ReenumerateSelfInterface >= 0 )
    {
      Event.Header.SignalState = 0;
      HIDWORD(Event.Header.WaitListHead.Blink) = 0;
      ConfigurationHandle = 0LL;
      v37 = (a2->ReenumerateSelfInterface->SupportedResetTypes >> 1) & 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v109) = a2->ReenumerateSelfInterface->SupportedResetTypes & 1;
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v36,
          1u,
          0x10u,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (a2->ReenumerateSelfInterface->SupportedResetTypes & 2) != 0,
          v109);
      }
      Event.Header.LockNV = 1573289;
      Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)a2;
      LODWORD(Event.Header.WaitListHead.Blink) = 0;
      v38 = NdisOpenConfigurationEx((PNDIS_CONFIGURATION_OBJECT)&Event, &ConfigurationHandle);
      Status = v38;
      if ( v38 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v108 = v38;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0x11u,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            *(_QWORD *)v108);
        }
      }
      else
      {
        *(_QWORD *)&Keyword.Length = 1966108LL;
        memset(&ParameterValue, 0, sizeof(ParameterValue));
        ParameterValue.ParameterData.IntegerData = v37;
        v39 = ConfigurationHandle;
        Keyword.Buffer = L"PldrCapability";
        NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
        if ( Status && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v108 = Status;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0x12u,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            *(_QWORD *)v108);
        }
        NdisCloseConfiguration(v39);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v109) = ReenumerateSelfInterface;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a2,
          v109);
      }
      PciDeviceCustomProperties = 0;
    }
  }
  a2->State = NdisMiniportInitializing;
  v141.Header.Revision = 2;
  if ( MajorNdisVersion >= 6u )
  {
    ndisReadMiniportDefaultPortAuthStates(a2);
    *(_DWORD *)(&Keyword.MaximumLength + 1) = a2->DefaultPortSendControlState;
    Keyword.Buffer = *(wchar_t **)&a2->DefaultPortRcvControlState;
    DefaultPortRcvAuthorizationState = a2->DefaultPortRcvAuthorizationState;
    AllocatedResources = a2->AllocatedResources;
    *(_DWORD *)&Keyword.Length = 1311104;
    v136.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v136.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v67 = a2->BusType == PCIBus;
    v136.IMDeviceInstanceContext = a2->DeviceContext;
    v136.MiniportAddDeviceContext = a2->AddDeviceContext;
    v136.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)&Keyword;
    v136.NetLuid.Value = a2->NetLuid.Value;
    v136.IfIndex = a2->IfIndex;
    if ( v67 )
    {
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
      p_PciDeviceCustomProperties = v136.PciDeviceCustomProperties;
      if ( PciDeviceCustomProperties >= 0 )
        p_PciDeviceCustomProperties = &a2->PciDeviceCustomProperties;
      v136.PciDeviceCustomProperties = p_PciDeviceCustomProperties;
    }
    if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) != 0 )
      v45 = ndisLWMInitializeHandler(a2);
    else
      v45 = ndisMInvokeInitialize(a2, &v136);
    v42 = v45;
    if ( a2->BusType == PCIBus )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  else
  {
    v42 = ((__int64 (__fastcall *)(int *, unsigned int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *))a1->MiniportDriverCharacteristics.PauseHandler)(
            &v134,
            &v126,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( a2->BusType == PCIBus )
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v109) = v42;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x13u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a2,
      v109);
  }
  if ( (byte_14011D042 & 8) != 0 )
  {
    LODWORD(v110) = v42;
    LODWORD(v109) = 1;
    LODWORD(OutputBufferLength) = a2->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      BaseMiniport,
      &InitializeAdapterInfo,
      &a2->InterfaceGuid,
      (__int64)&a2->InterfaceGuid,
      OutputBufferLength,
      a2->NetLuid.Value,
      v109,
      v110);
  }
  _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFFD);
  if ( v42 )
  {
    a2->State = NdisMiniportHalted;
    *(_QWORD *)&a2->OperStatus = 2LL;
    IfBlock = a2->IfBlock;
    if ( IfBlock && IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( a2->InvalidateBlockIoctlVf )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    *(_DWORD *)v115 = v42;
    if ( a2->TimerQueue )
      goto LABEL_375;
    if ( a2->Interrupt )
      goto LABEL_343;
    if ( a2->InterruptEx )
    {
LABEL_375:
      if ( a2->Interrupt )
      {
LABEL_343:
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a2->pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->Interrupt, 0LL);
      }
      if ( a2->InterruptEx )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a2->pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->InterruptEx, 0LL);
      }
      if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) == 0LL )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a2->pAdapterInstanceName,
          "Init failed without canceling timer");
        KeBugCheckEx(0x7Cu, 0xCuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->TimerQueue, 0LL);
      }
    }
    v103 = v114;
LABEL_349:
    v120 = 0;
    v116 = 0;
    v119 = 0;
    v113 = 0;
    v121 = v103;
    v123 = v103;
    i = v103;
    goto LABEL_43;
  }
  v46 = a2->MajorNdisVersion < 6u;
  v24 = 1;
  v112 = 1;
  if ( v46 || a2->GeneralAttributes || (MicrosoftTelemetryAssertTriggeredNoArgsKM(), a2->GeneralAttributes) )
  {
    if ( (a2->PnPFlags & 0x8000000) != 0 )
    {
      ndisReferenceMiniportByName(a2->BindPaths->Paths, &a2->BaseMiniport, 1, 0x1Fu);
      BaseMiniport = (__int64)a2->BaseMiniport;
      if ( BaseMiniport )
        ndisDereferenceMiniportRef((struct _NDIS_MINIPORT_BLOCK *)BaseMiniport, 0x1Fu);
    }
    else
    {
      a2->BaseMiniport = a2;
    }
    v47 = v118;
    if ( v118 < 6u )
    {
      Interrupt = a2->Interrupt;
      if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
        a2->Flags &= ~1u;
      else
        a2->Flags |= 1u;
      if ( !a2->ShutdownHandler )
      {
        a2->ShutdownHandler = a1->MiniportCharacteristics.AdapterShutdownHandler;
        a2->ShutdownContext = a2->MiniportAdapterContext;
      }
      BaseMiniport = v126;
      v40 = *((_DWORD *)ndisMediumArray + v126);
      v141.MediaType = v40;
      a2->MediaType = v40;
      a2->MiniportMediaType = v40;
    }
    MediaType = a2->MediaType;
    a2->State = NdisMiniportPaused;
    if ( MediaType == NdisMediumArcnetRaw
      || (unsigned int)MediaType <= NdisMedium1394
      && (BaseMiniport = 8326LL, _bittest((const int *)&BaseMiniport, MediaType)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v40,
          13,
          21,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a2);
      }
      if ( (byte_14011D043 & 0x10) != 0 )
      {
        LODWORD(v109) = a2->MediaType;
        LODWORD(OutputBufferLength) = a2->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          BaseMiniport,
          (__int64)&UnsupportedMiniportMediaType,
          (__int64)&a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          OutputBufferLength,
          a2->NetLuid.Value,
          v109);
        v25 = 0;
        *(_DWORD *)v115 = 32;
        v111 = 1;
        goto LABEL_46;
      }
      goto LABEL_110;
    }
    ndisMRegisterBugCheckHandler((char *)a2);
    if ( a2->MediaType == NdisMediumWan )
    {
      if ( v47 > 4u && (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x20000) == 0 )
      {
        *(_DWORD *)v115 = 32;
        v25 = 0;
        v111 = 1;
        goto LABEL_46;
      }
      if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x20000) == 0 )
        a2->DeferredSendHandler = ndisMStartWanSends;
    }
    v50 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    v51 = ndisSetWakeUpTimer(a2) != 0;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v50);
    ndisMStartInitMode(a2);
    if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v109) = PciDeviceCustomProperties;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x16u,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a2,
          v109);
      }
      if ( (byte_14011D042 & 0x10) != 0 )
      {
        LODWORD(v110) = PciDeviceCustomProperties;
        LODWORD(v109) = 2;
        LODWORD(OutputBufferLength) = a2->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          v52,
          &InitializeAdapterFailed,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          OutputBufferLength,
          a2->NetLuid.Value,
          v109,
          v110);
      }
      v8 = v51;
      *(_DWORD *)v115 = 36;
      v24 = v112;
      v25 = 0;
      goto LABEL_46;
    }
    v53 = v118;
    if ( v118 >= 6u )
    {
      if ( a2->MP6SupportPM )
        v124 = 0;
    }
    else
    {
      v141.PowerManagementCapabilitiesEx = (_NDIS_PM_CAPABILITIES *)v146;
      a2->GeneralAttributes = &v141;
      MiniportInfo = ndisGetMiniportInfo(a2, &v141, (int *)v115, &v111, &v124);
      if ( !MiniportInfo )
      {
        MiniportInfo = ndisMSetGeneralAttributes(a2, a2->GeneralAttributes);
        if ( !MiniportInfo )
        {
          Offload = a2->Offload;
          MiniportInfo = 0;
          if ( Offload )
            MiniportInfo = ndisMSetOffloadAttributes(
                             a2,
                             &Offload->MiniportInitialConfig,
                             &Offload->MiniportInitialConfig,
                             0LL,
                             0LL);
        }
      }
      v8 = v51;
      if ( MiniportInfo )
        goto LABEL_221;
    }
    if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) == 0LL
      && (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) == 0
      && (v8 = v51,
          v55 = ndisCheckNetworkInterfaceDataMismatch(a2, a2->GeneralAttributes),
          (unsigned int)NdisConvertNtStatusToNdisStatus(v55))
      || (DefaultNicSwitch = ndisIovCreateDefaultNicSwitch(a2), v8 = v51, DefaultNicSwitch) )
    {
LABEL_221:
      v24 = v112;
      goto LABEL_44;
    }
    ndisMNotifyMachineName(a2);
    PnPFlags = a2->PnPFlags;
    if ( (PnPFlags & 0x8001) != 0 || (v58 = a2->PnPFlags, (a2->DriverHandle->Flags & 1) != 0) )
    {
      v58 = a2->PnPFlags;
      if ( a2->MediaType < (unsigned int)NdisMediumMax )
      {
        if ( v124 )
          v58 = PnPFlags & 0xFFFFFFFE;
        else
          v58 = PnPFlags | 1;
        a2->PnPFlags = v58;
      }
    }
    if ( (v58 & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0 )
    {
      MinMagicPacketWakeUp = a2->PMHardwareCapabilities.MinMagicPacketWakeUp;
      if ( (MinMagicPacketWakeUp == NdisDeviceStateD1 || (unsigned int)(MinMagicPacketWakeUp - 3) <= 1)
        && (a2->PMAdminConfig.Value & 0xC) == 0 )
      {
        DisableMagicPacketKeyword(a2);
      }
    }
    NdisInitializeTimer(&a2->MediaDisconnectTimer, (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, a2);
    KeInitializeEvent(&a2->WaitWakeIrpCompleted, NotificationEvent, 1u);
    ndisUpdatePMCurrentCapabilities(a2);
    if ( (a2->PnPFlags & 1) != 0 )
    {
      v60 = ndisCheckMiniportWakeUpCapable(a2);
      PnPCapabilities = a2->PnPCapabilities;
      v62 = v60;
      if ( (PnPCapabilities & 8) == 0 )
      {
        MinLinkChangeWakeUp = a2->PMAdvertisedCapabilities.MinLinkChangeWakeUp;
        v64 = a2->PnPFlags | 0x20;
        a2->PnPFlags = v64;
        if ( MinLinkChangeWakeUp == NdisDeviceStateD1 || (unsigned int)(MinLinkChangeWakeUp - 3) <= 1 )
          a2->PMCurrentParameters.WakeUpFlags |= 1u;
        if ( (PnPCapabilities & 0x10) == 0 && v62 )
        {
          MinPatternWakeUp = a2->PMAdvertisedCapabilities.MinPatternWakeUp;
          if ( MinPatternWakeUp == NdisDeviceStateD1
            || MinPatternWakeUp == NdisDeviceStateD2
            || MinPatternWakeUp == NdisDeviceStateD3 )
          {
            v64 |= 0x40u;
            a2->PnPFlags = v64;
          }
          v66 = a2->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
          if ( v66 == NdisDeviceStateD1 || (unsigned int)(v66 - 3) <= 1 )
          {
            a2->PMCurrentParameters.EnabledWoLPacketPatterns |= 2u;
            v67 = a2->MajorNdisVersion == 6;
            v68 = a2->MajorNdisVersion <= 6u;
            a2->PnPFlags = v64 | 0x40;
            if ( !v68 || v67 && a2->MinorNdisVersion >= 0x14u )
            {
              DefaultNicSwitch = ndisAddWoLMagicPacket(a2);
              if ( DefaultNicSwitch )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v109) = DefaultNicSwitch;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    1u,
                    0x17u,
                    (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                    (char)a2,
                    v109);
                }
              }
            }
          }
        }
        if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) == 0LL )
        {
          v69 = a2->PnPFlags;
          if ( (v69 & 0x40) != 0 )
          {
            if ( !a2->WaitWakeIrp )
            {
              a2->PnPFlags = v69 & 0xFFFFFBFF;
              DefaultNicSwitch = ndisRequestWaitWake(a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
            }
          }
          else
          {
            ndisCancelWaitWake(a2);
          }
        }
      }
    }
    v70 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    v67 = a2->MediaConnectState == MediaConnectStateDisconnected;
    a2->MiniportThread = KeGetCurrentThread();
    if ( v67 )
      ndisSetMediaDisconnectTimer(a2);
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v70);
    a2->D0CompleteSignalWorkItem.WorkItem.Context = a2;
    a2->D0CompleteSignalWorkItem.WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisSignalD0CompleteWorkItem;
    a2->DevicePowerOnWorkItem.Workitem.WorkerRoutine = ndisDevicePowerOn;
    a2->DevicePowerOnWorkItem.Workitem.Parameter = &a2->DevicePowerOnWorkItem;
    a2->DevicePowerOnWorkItem.Workitem.List.Flink = 0LL;
    a2->DevicePowerDownWorkItem.Workitem.WorkerRoutine = ndisDevicePowerDown;
    a2->DevicePowerDownWorkItem.Workitem.Parameter = &a2->DevicePowerDownWorkItem;
    a2->DevicePowerDownWorkItem.Workitem.List.Flink = 0LL;
    if ( (a2->PMAdvertisedCapabilities.Flags & 6) != 0 )
      ndisSelectiveSuspendInitialize(a2);
    if ( (a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0 )
    {
      ndisAoAcInitialize(a2);
      ndisReadModernStandyWoLMagicPacketKeywords(a2);
      ndisMRegisterPDCTaskClient(a2);
      ndisMInitializePDCTaskClient((struct _NDIS_TIMER *)a2);
    }
    if ( a2->MediaType )
    {
      EthDB = (PNDIS_RW_LOCK_EX *)a2->EthDB;
      if ( EthDB )
      {
        nullDeleteFilter(EthDB);
        a2->EthDB = 0LL;
      }
      if ( !(unsigned __int8)nullCreateFilter(v137) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v72) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v72,
            1,
            25,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            (char)a2);
        }
        v73 = 30LL;
        *(_DWORD *)v115 = 30;
        v111 = 1;
        if ( (byte_14011D042 & 0x10) != 0 )
        {
          LODWORD(v110) = 30;
          LODWORD(v109) = 6;
LABEL_211:
          LODWORD(OutputBufferLength) = a2->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            v73,
            &InitializeAdapterFailed,
            &a2->InterfaceGuid,
            (__int64)&a2->InterfaceGuid,
            OutputBufferLength,
            a2->NetLuid.Value,
            v109,
            v110);
          goto LABEL_213;
        }
        goto LABEL_213;
      }
    }
    else if ( !EthCreateFilter(
                 a2->GeneralAttributes->MaxMulticastListSize,
                 a2->GeneralAttributes->CurrentMacAddress,
                 v137) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v74) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v74,
          1,
          24,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a2);
      }
      *(_DWORD *)v115 = 9;
      v111 = 1;
      if ( (byte_14011D042 & 0x10) != 0 )
      {
        LODWORD(v110) = 9;
        LODWORD(v109) = 4;
        goto LABEL_211;
      }
LABEL_213:
      if ( a2->MiniportMediaType == NdisMediumNative802_11 && v53 >= 6u )
      {
        if ( !(unsigned __int8)nullCreateFilter((struct _X_FILTER **)&a2->600) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(Offload) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)Offload,
              1,
              26,
              (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
              (char)a2);
          }
          v111 = 1;
          a2->Reserved1 = 0LL;
          *(_DWORD *)v115 = 30;
          if ( (byte_14011D042 & 0x10) != 0 )
          {
            LODWORD(v110) = 30;
            LODWORD(v109) = 7;
            LODWORD(OutputBufferLength) = a2->IfIndex;
            McTemplateK0jqxqq_EtwWriteTransfer(
              30LL,
              &InitializeAdapterFailed,
              &a2->InterfaceGuid,
              (__int64)&a2->InterfaceGuid,
              OutputBufferLength,
              a2->NetLuid.Value,
              v109,
              v110);
          }
          v8 = v51;
          goto LABEL_221;
        }
        *(_QWORD *)(a2->Reserved1 + 296) = a2;
      }
      if ( a2->MediaType == NdisMedium802_3 )
        a2->CheckPacketFilters = 1;
      if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) == 0LL
        && (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) == 0 )
      {
        v76 = IoWMIRegistrationControl(a2->DeviceObject, 1u);
        if ( v76 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v109) = v76;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              1u,
              0x1Bu,
              (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
              (char)a2,
              v109);
          }
          if ( (byte_14011D042 & 0x10) != 0 )
          {
            LODWORD(v110) = v76;
            LODWORD(v109) = 8;
            LODWORD(OutputBufferLength) = a2->IfIndex;
            McTemplateK0jqxqq_EtwWriteTransfer(
              v75,
              &InitializeAdapterFailed,
              &a2->InterfaceGuid,
              (__int64)&a2->InterfaceGuid,
              OutputBufferLength,
              a2->NetLuid.Value,
              v109,
              v110);
          }
          v77 = 1;
          *(_DWORD *)v115 = 31;
          v111 = 1;
          goto LABEL_235;
        }
        v119 = 1;
      }
      v77 = v111;
      if ( v111 )
      {
LABEL_235:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v109) = v77;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0x1Cu,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            (char)a2,
            v109);
        }
        LODWORD(OutputBufferLength) = *(_DWORD *)v115;
        NdisWriteErrorLogEntry(a2, 0xC000138D, 2u, 4278255360LL, OutputBufferLength);
        v8 = v51;
        v24 = v112;
        goto LABEL_44;
      }
      *(_DWORD *)v115 = 1;
      if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) == 0 )
      {
        v79 = IoRegisterDeviceInterface(
                a2->PhysicalDeviceObject,
                &InterfaceClassGuid,
                &a2->BaseName,
                &a2->SymbolicLinkName);
        if ( v79 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v109) = v79;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x1Du,
              (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
              (char)a2,
              v109);
          }
          if ( (byte_14011D042 & 0x10) != 0 )
          {
            LODWORD(v110) = v79;
            LODWORD(v109) = 10;
            LODWORD(OutputBufferLength) = a2->IfIndex;
            McTemplateK0jqxqq_EtwWriteTransfer(
              v78,
              &InitializeAdapterFailed,
              &a2->InterfaceGuid,
              (__int64)&a2->InterfaceGuid,
              OutputBufferLength,
              a2->NetLuid.Value,
              v109,
              v110);
          }
          v8 = v51;
          *(_DWORD *)v115 = 35;
          v24 = v112;
          v25 = 0;
          goto LABEL_46;
        }
        SriovCurrentCapabilities = a2->SriovCurrentCapabilities;
        v116 = 1;
        if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
        {
          v81 = IoRegisterDeviceInterface(a2->PhysicalDeviceObject, &v145, 0LL, &a2->DevinterfaceVirtSymbolicLinkName);
          if ( DefaultNicSwitch < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v109) = v81;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x1Eu,
                (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                (char)a2,
                v109);
            }
            if ( (byte_14011D042 & 0x10) != 0 )
            {
              LODWORD(v110) = v81;
              LODWORD(v109) = 0;
              LODWORD(OutputBufferLength) = a2->IfIndex;
              McTemplateK0jqxqq_EtwWriteTransfer(
                v78,
                &InitializeAdapterFailed,
                &a2->InterfaceGuid,
                (__int64)&a2->InterfaceGuid,
                OutputBufferLength,
                a2->NetLuid.Value,
                v109,
                v110);
            }
            v8 = v51;
            *(_DWORD *)v115 = 34;
            v24 = v112;
            v25 = 0;
            v111 = 1;
            goto LABEL_46;
          }
          v113 = 1;
        }
        a2->DeviceObject->Flags &= ~0x80u;
      }
      GeneralAttributes = a2->GeneralAttributes;
      if ( GeneralAttributes && (v82 = a2->IfBlock) != 0LL )
      {
        updated = ndisIfUpdateInterfaceOnInitialize(a2, v82, GeneralAttributes);
        if ( !updated )
        {
          v25 = 1;
          if ( (a2->PnPFlags & 0x200000) != 0 )
            a2->PhysicalPerformanceCounters = (_NDIS_PHYSICAL_PERFORMANCE_COUNTERS *)ExAllocatePool2(
                                                                                       64LL,
                                                                                       32LL,
                                                                                       2002994254LL);
          if ( !a2->OidList )
          {
            *(_QWORD *)v140 = 0LL;
            *(_QWORD *)&v140[8] = a2;
            memset(&v140[16], 0, 80);
            OidList = ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)v140);
            if ( OidList )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v109) = OidList;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  1u,
                  0x20u,
                  (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                  (char)a2,
                  v109);
              }
              if ( (byte_14011D042 & 0x10) != 0 )
              {
                LODWORD(v110) = OidList;
                LODWORD(v109) = 12;
                LODWORD(OutputBufferLength) = a2->IfIndex;
                McTemplateK0jqxqq_EtwWriteTransfer(
                  v84,
                  &InitializeAdapterFailed,
                  &a2->InterfaceGuid,
                  (__int64)&a2->InterfaceGuid,
                  OutputBufferLength,
                  a2->NetLuid.Value,
                  v109,
                  v110);
              }
            }
          }
          v86 = a2->Offload;
          if ( v86 )
          {
            if ( v86->SupportsOffload == 1 )
            {
              v86->SupportsTopOffload = 1;
              v87 = a2->Offload;
              *(_OWORD *)&v87->TopCapabilities.Header.Type = *(_OWORD *)&v87->MiniportCurrentConfig.Header.Type;
              *(_OWORD *)((char *)&v87->TopCapabilities.Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v87->MiniportCurrentConfig.Checksum.IPv4Receive
                                                                                              + 4);
              *(_OWORD *)((char *)&v87->TopCapabilities.Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v87->MiniportCurrentConfig.Checksum.IPv6Receive
                                                                                              + 4);
              *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v87->TopCapabilities.LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v87->MiniportCurrentConfig.LsoV1.IPv4 + 12);
              *(_OWORD *)&v87->TopCapabilities.IPsecV1.Supported.IPv4Options = *(_OWORD *)&v87->MiniportCurrentConfig.IPsecV1.Supported.IPv4Options;
              *(_OWORD *)&v87->TopCapabilities.LsoV2.IPv4.Encapsulation = *(_OWORD *)&v87->MiniportCurrentConfig.LsoV2.IPv4.Encapsulation;
              *(_OWORD *)&v87->TopCapabilities.LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v87->MiniportCurrentConfig.LsoV2.IPv6.MaxOffLoadSize;
              *(_OWORD *)&v87->TopCapabilities.IPsecV2.Encapsulation = *(_OWORD *)&v87->MiniportCurrentConfig.IPsecV2.Encapsulation;
              *(_OWORD *)&v87->TopCapabilities.IPsecV2.UdpEsp = *(_OWORD *)&v87->MiniportCurrentConfig.IPsecV2.UdpEsp;
              *(_OWORD *)&v87->TopCapabilities.Rsc.IPv4.Enabled = *(_OWORD *)&v87->MiniportCurrentConfig.Rsc.IPv4.Enabled;
              *(_OWORD *)&v87->TopCapabilities.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = *(_OWORD *)&v87->MiniportCurrentConfig.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
              *(_OWORD *)&v87->TopCapabilities.EncapsulationTypes = *(_OWORD *)&v87->MiniportCurrentConfig.EncapsulationTypes;
              *(_OWORD *)&v87->TopCapabilities.UdpSegmentation.IPv4.MaxOffLoadSize = *(_OWORD *)&v87->MiniportCurrentConfig.UdpSegmentation.IPv4.MaxOffLoadSize;
              *((_QWORD *)&v87->TopCapabilities.UdpSegmentation.IPv6 + 1) = *((_QWORD *)&v87->MiniportCurrentConfig.UdpSegmentation.IPv6
                                                                            + 1);
              *(_DWORD *)&v87->TopCapabilities.UdpRsc.Enabled = *(_DWORD *)&v87->MiniportCurrentConfig.UdpRsc.Enabled;
              ndisMergeOffloadCapsAndRegistry(a2, &a2->Offload->TopCapabilities);
            }
            v88 = a2->Offload;
            if ( v88->SupportsTcpConnectionOffload == 1 )
            {
              v88->SupportsTopTcpConnectionOffload = 1;
              v89 = a2->Offload;
              *(_OWORD *)&v89->TopTcpConnectionOffloadCapabilities.Header.Type = *(_OWORD *)&v89->MiniportTcpConnectionOffloadCurrentConfig.Header.Type;
              v89->TopTcpConnectionOffloadCapabilities.Flags = v89->MiniportTcpConnectionOffloadCurrentConfig.Flags;
            }
          }
          v90 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              1u,
              0x13u,
              (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
              (char)a2,
              a1);
          ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
          v91 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
          p_Ref = &a1->Ref;
          if ( a1->Ref.Closing )
          {
            KeReleaseSpinLock(&p_Ref->SpinLock, v91);
            v90 = 0;
          }
          else
          {
            a2->NextMiniport = a1->MiniportQueue;
            a1->MiniportQueue = a2;
            KeReleaseSpinLock(&p_Ref->SpinLock, v91);
          }
          ndisDereferencePackage((PVOID *)&ndisPkgs);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v110) = v90;
            WPP_RECORDER_SF_qql(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              1u,
              0x14u,
              (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
              (char)a2,
              (char)a1,
              v110);
          }
          v8 = v51;
          if ( !v90 )
          {
            v24 = 1;
LABEL_45:
            if ( !*(_DWORD *)v115 )
              goto LABEL_47;
            goto LABEL_46;
          }
          v120 = 1;
          ndisSetDeviceInterfaceState(a2, 1u);
          if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v93) < 0 )
          {
            *(_DWORD *)v115 = 39;
            v24 = 1;
            v111 = 1;
            goto LABEL_46;
          }
          ndisPcwNotifyMiniportCreation(a2);
          Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
          if ( Ndis::BindState::SetBinding(&a2->Bindings.Miniport, BindingDisabled, Reason_MiniportDeviceNotStarted) )
          {
            memset(v140, 0, sizeof(v140));
            if ( (unsigned __int8)byte_14011EAD3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v140);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v94,
                  0x1Cu,
                  0x21u,
                  (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                  *(unsigned __int16 **)&v140[8],
                  *(_QWORD *)v140);
            }
          }
          if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_InitialPause) )
          {
            memset(v140, 0, sizeof(v140));
            if ( (unsigned __int8)byte_14011EAD3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v140);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v95,
                  0x1Cu,
                  0x22u,
                  (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                  *(unsigned __int16 **)&v140[8],
                  *(_QWORD *)v140);
            }
          }
          if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_RemovingMiniport) )
          {
            memset(v140, 0, sizeof(v140));
            if ( (unsigned __int8)byte_14011EAD3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v140);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v96,
                  0x1Cu,
                  0x23u,
                  (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                  *(unsigned __int16 **)&v140[8],
                  *(_QWORD *)v140);
            }
          }
          if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x10000) == 0 )
          {
            if ( Ndis::BindState::SetBinding(&a2->Bindings.Miniport, BindingDisabled, Reason_DefaultPortNotActive) )
            {
              memset(v140, 0, sizeof(v140));
              if ( (unsigned __int8)byte_14011EAD3 >= 4u )
              {
                ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v140);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v97,
                    0x1Cu,
                    0x24u,
                    (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                    *(unsigned __int16 **)&v140[8],
                    *(_QWORD *)v140);
              }
            }
          }
          Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine);
          Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous, 0);
          if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) == 0 )
          {
            v127 = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports(a2, v98, &v127);
          }
          v46 = v118 < 6u;
          a2->EthDB = v137[0];
          if ( v46 )
          {
            a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPackets;
            if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x40000) != 0 )
            {
              a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
              a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
            }
            else if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x40) != 0 )
            {
              a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
              a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
              v99 = ndisMDeferredSendPacketsSG;
              if ( !a1->MiniportDriverCharacteristics.ShutdownHandlerEx )
                v99 = ndisMDeferredSendSG;
              a2->DeferredSendHandler = v99;
            }
            else
            {
              a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
              a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
            }
          }
          else
          {
            a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
            a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
          }
          KeAcquireSpinLockRaiseToDpc(&a2->Lock);
          a2->MiniportThread = KeGetCurrentThread();
          ndisMSetIndicatePacketHandler(a2);
          a2->MiniportThread = 0LL;
          KeReleaseSpinLock(&a2->Lock, v100);
          if ( ((a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
            && a2->PhysicalMediumType == NdisPhysicalMedium802_3 )
          {
            v67 = a2->PMHardwareCapabilities.Header.Revision == 2;
            ConfigurationHandle = a2->PhysicalDeviceObject;
            v132 = 0;
            v129 = 4;
            v130 = 1;
            if ( !v67
              || (a2->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
              || a2->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
              || a2->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
              || (v101 = a2->PMHardwareCapabilities.MinPatternWakeUp, v101 != NdisDeviceStateD2)
              && v101 != NdisDeviceStateD3
              || (a2->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
              || (v102 = a2->PMHardwareCapabilities.SupportedProtocolOffloads & 3, v131 = 1, (_BYTE)v102 != 3) )
            {
              v131 = 0;
            }
            ZwPowerInformation(CsDeviceNotification, &ConfigurationHandle, 0x10u, 0LL, 0);
          }
          ndisPktMonMiniportRegister(a2);
          v103 = 0;
          *(_DWORD *)v115 = 0;
          v114 = 0;
          v8 = v51;
          v117 = 0;
          goto LABEL_349;
        }
      }
      else
      {
        updated = -1073741823;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v109) = updated;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x1Fu,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a2,
          v109);
      }
      if ( (byte_14011D042 & 0x10) != 0 )
      {
        LODWORD(v110) = updated;
        LODWORD(v109) = 11;
        LODWORD(OutputBufferLength) = a2->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          v78,
          &InitializeAdapterFailed,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          OutputBufferLength,
          a2->NetLuid.Value,
          v109,
          v110);
      }
      v8 = v51;
      *(_DWORD *)v115 = 32;
      v24 = v112;
      v25 = 0;
      v111 = 1;
      goto LABEL_46;
    }
    v137[0]->Miniport = a2;
    goto LABEL_213;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v40) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v40,
      1,
      20,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a2);
  }
LABEL_110:
  *(_DWORD *)v115 = 32;
  v25 = 0;
  v111 = 1;
LABEL_46:
  Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)GeneralAttributes);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
LABEL_47:
  if ( v25 )
  {
    *(_QWORD *)&a2->OperStatus = 2LL;
    v26 = a2->IfBlock;
    if ( v26->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      v26->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    PhysicalPerformanceCounters = a2->PhysicalPerformanceCounters;
    if ( PhysicalPerformanceCounters )
    {
      ExFreePoolWithTag(PhysicalPerformanceCounters, 0);
      a2->PhysicalPerformanceCounters = 0LL;
    }
  }
  v28 = v119;
  if ( v119 )
  {
    IoWMIRegistrationControl(a2->DeviceObject, 2u);
    v28 = 0;
  }
  v29 = v116;
  v30 = v116;
  if ( v116 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceNetSymbolicLinkName, 0);
    v30 = 0;
  }
  if ( v113 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceVirtSymbolicLinkName, 0);
    RtlFreeUnicodeString(&a2->DevinterfaceVirtSymbolicLinkName);
    a2->DevinterfaceVirtSymbolicLinkName.Buffer = 0LL;
    v113 = 0;
  }
  if ( v24 )
  {
    ndisIovDeleteDefaultNicSwitch(a2);
    v31 = 384;
    if ( !v113 )
      v31 = 128;
    ndisMCommonHaltMiniport(a2, (v29 != 0 ? 4 : 0) | (v28 != 0 ? 2 : 0) | (v30 != 0 ? 0x40 : 0) | (v8 ? 8 : 0) | v31);
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v123 )
  {
    if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x40) != 0 && a2->MiniportSGDmaBlock )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v32,
          1,
          37,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a2);
      }
      ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    }
    v33 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    v34 = v33;
    a2->MiniportThread = KeGetCurrentThread();
    if ( a2->MiniportSGDmaBlock )
    {
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, NotificationEvent, 0);
      a2->MiniportSGDmaBlock->DmaResourcesReleasedEvent = &Event;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v34);
      if ( ndisWaitForKernelObject(&Event, 30000LL) )
        _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFBF);
    }
    else
    {
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v33);
      _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFBF);
    }
  }
  if ( v120 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Offload) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Offload,
        1,
        38,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a2);
    }
    ndisDeQueueMiniportOnDriver(a2, a1);
  }
  if ( v117 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v121 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v114 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Offload) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Offload,
        1,
        39,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a2);
    }
    ndisDereferenceDriver(a1, 0, 2u);
  }
  v105 = a2->GeneralAttributes;
  if ( v105 )
  {
    if ( v118 >= 6u )
      ExFreePoolWithTag(v105, 0);
    a2->GeneralAttributes = 0LL;
  }
  if ( i )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)a2->PeriodicReceivesNblCountIndex, 0x527374uLL);
    a2->PeriodicReceivesNblCountIndex = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v109) = *(_DWORD *)v115;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x28u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a2,
      v109);
  }
  return *(unsigned int *)v115;
}
