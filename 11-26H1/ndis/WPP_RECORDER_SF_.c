/*
 * XREFs of WPP_RECORDER_SF_ @ 0x140022960
 * Callers:
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006460 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisLwmCreateIrpHandler @ 0x14000A790 (ndisLwmCreateIrpHandler.c)
 *     IsFileObjectForNetworkInterface @ 0x14000A960 (IsFileObjectForNetworkInterface.c)
 *     NdisLWMInitializeNetworkInterface @ 0x14000AE00 (NdisLWMInitializeNetworkInterface.c)
 *     ndisLwmIoctlIrpHandler @ 0x14000CEA0 (ndisLwmIoctlIrpHandler.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000E6D0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x14001F850 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     NdisMCoRequestComplete @ 0x1400227E0 (NdisMCoRequestComplete.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400248D0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     NdisAllocatePacketPoolEx @ 0x14002BE50 (NdisAllocatePacketPoolEx.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisRetreatNetBufferListDataStart @ 0x14003FDD0 (NdisRetreatNetBufferListDataStart.c)
 *     NdisFOidRequestComplete @ 0x1400439C0 (NdisFOidRequestComplete.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x140047E60 (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     NdisAllocateNetBufferListPool @ 0x14005B160 (NdisAllocateNetBufferListPool.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisNsiQueuedIfBlockRodChangeNotification @ 0x1400604A0 (ndisNsiQueuedIfBlockRodChangeNotification.c)
 *     NdisOpenProtocolConfiguration @ 0x1400613C0 (NdisOpenProtocolConfiguration.c)
 *     NdisFreeSharedMemory @ 0x1400653E0 (NdisFreeSharedMemory.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x14006B9E0 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x14006C250 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x140073550 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400742E0 (-ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_O.c)
 *     NdisWriteEventLogEntry @ 0x140074A10 (NdisWriteEventLogEntry.c)
 *     NdisReleaseNicActive @ 0x14007A6C0 (NdisReleaseNicActive.c)
 *     NdisTryAcquireNicActive @ 0x14007A8B0 (NdisTryAcquireNicActive.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140081590 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisPnPCancelStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400945C0 (-ndisPnPCancelStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140094774 (-ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisLWMDeregisterMiniportDriver @ 0x140094E60 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140094F30 (NdisLWMRegisterMiniportDriver.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009F9E0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ndisEtwRegisterGuids @ 0x1400A5BAC (ndisEtwRegisterGuids.c)
 *     ndisMapOpenByName @ 0x1400A5E78 (ndisMapOpenByName.c)
 *     ?NdisGetVersion640Shim@@YAIXZ @ 0x1400B16E0 (-NdisGetVersion640Shim@@YAIXZ.c)
 *     ?Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2E48 (-Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1400B58E4 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B5AE8 (-ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1400B5BB8 (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1400B5C94 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B85CC (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B8950 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B8CE8 (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B9F10 (-ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA1D8 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C16AC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C3C84 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1400C502C (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1400C5268 (ndisKillReceiveWorkerThreadPool.c)
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400C839C (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 *     ndisMEmitTraceRundown @ 0x1400C8574 (ndisMEmitTraceRundown.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400CA45C (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     ndisValidateSGDmaDescription @ 0x1400CABB8 (ndisValidateSGDmaDescription.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1400CB0A0 (NdisMDeregisterScatterGatherDma.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400CED8C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400CF53C (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisNsiQueuedTimestampingChangeNotification @ 0x1400D1990 (ndisNsiQueuedTimestampingChangeNotification.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400D2D28 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1400D4698 (-ndisStopNsiProvider@@YAXXZ.c)
 *     NdisCmMakeCallComplete @ 0x1400D5250 (NdisCmMakeCallComplete.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     NdisCoCreateVc @ 0x1400D5DA0 (NdisCoCreateVc.c)
 *     NdisMCmCreateVc @ 0x1400D6CC0 (NdisMCmCreateVc.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D7CB4 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D7EF0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D8330 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisCoIndicateStatusInternal @ 0x1400D9070 (ndisCoIndicateStatusInternal.c)
 *     NdisMCoIndicateStatus @ 0x1400D9330 (NdisMCoIndicateStatus.c)
 *     NdisMCoIndicateStatusEx @ 0x1400D9430 (NdisMCoIndicateStatusEx.c)
 *     NdisCloseFile @ 0x1400D9AC0 (NdisCloseFile.c)
 *     NdisOpenFile @ 0x1400D9B70 (NdisOpenFile.c)
 *     NdisUnmapFile @ 0x1400DA040 (NdisUnmapFile.c)
 *     NdisInitializeWrapper @ 0x1400DC1C0 (NdisInitializeWrapper.c)
 *     NdisTerminateWrapper @ 0x1400DC2C0 (NdisTerminateWrapper.c)
 *     KLoaderDereferenceModule @ 0x1400DEF80 (KLoaderDereferenceModule.c)
 *     ?ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z @ 0x1400DF584 (-ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z.c)
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DF8D4 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E3A90 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400E7110 (NdisRegisterUserThreadExitCallback.c)
 *     NdisUnregisterUserThreadExitCallback @ 0x1400E75B0 (NdisUnregisterUserThreadExitCallback.c)
 *     ndisThreadStateDelete @ 0x1400E7970 (ndisThreadStateDelete.c)
 *     ?Register@TriageData@@IEAAJXZ @ 0x1400E7C48 (-Register@TriageData@@IEAAJXZ.c)
 *     ?Unregister@TriageData@@IEAAXXZ @ 0x1400E7CD8 (-Unregister@TriageData@@IEAAXXZ.c)
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140138430 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 *     NdisSetAoAcOptions @ 0x140139420 (NdisSetAoAcOptions.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140139A28 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ndisHandleLegacyBindIoctl @ 0x14013BE50 (ndisHandleLegacyBindIoctl.c)
 *     ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143948 (-ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143D20 (-ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x1401453E8 (ndisRegisterScatterGatherDmaForGenericObject.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1401455EC (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140145760 (-ReferenceWdi@@YA_NXZ.c)
 *     NdisRegisterPoll @ 0x140145F10 (NdisRegisterPoll.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x140147D20 (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140147DCC (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     CreateKModule @ 0x14014810C (CreateKModule.c)
 *     GetModuleParameters @ 0x14014829C (GetModuleParameters.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140148514 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1401489F0 (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Reference@DriverService@@QEAAJ_N@Z @ 0x140148B40 (-Reference@DriverService@@QEAAJ_N@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015E360 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x140165090 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 *     BuildServicePath @ 0x1401691D0 (BuildServicePath.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016BFA0 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x14016C370 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     NdisMDeregisterDmaChannel @ 0x140173EF0 (NdisMDeregisterDmaChannel.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 *     NdisMapFile @ 0x1401762B0 (NdisMapFile.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1401774D0 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140186160 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018F098 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14018F23C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 *     ?ndisInitializePerProcRcvTracker@@YAXXZ @ 0x14019072C (-ndisInitializePerProcRcvTracker@@YAXXZ.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x140191B38 (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x140022960
 * Reason: Hex-Rays returned no pseudocode for 0x140022960
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140022960: mov     [rsp+arg_0], rbx
 * 0000000140022965: mov     [rsp+arg_8], rsi
 * 000000014002296A: mov     [rsp+arg_10], rdi
 * 000000014002296F: push    r14
 * 0000000140022971: sub     rsp, 30h
 * 0000000140022975: mov     ebx, r8d
 * 0000000140022978: mov     r14, rcx
 * 000000014002297B: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140022982: mov     r11d, r8d
 * 0000000140022985: shr     r11, 10h
 * 0000000140022989: lea     r10d, [rbx-1]
 * 000000014002298D: movzx   edi, r9w
 * 0000000140022991: mov     r8d, r10d
 * 0000000140022994: movzx   esi, dl
 * 0000000140022997: shr     r8, 5
 * 000000014002299B: and     r10d, 1Fh
 * 000000014002299F: and     r8d, 7FFh
 * 00000001400229A6: lea     rax, [r11+r11*4]
 * 00000001400229AA: lea     rax, [r8+rax*4]
 * 00000001400229AE: mov     eax, [rcx+rax*4+2Ch]
 * 00000001400229B2: bt      eax, r10d
 * 00000001400229B6: jb      short loc_1400229F6
 * 00000001400229B8: mov     r9, [rsp+38h+arg_20]
 * 00000001400229BD: mov     r8d, ebx
 * 00000001400229C0: mov     [rsp+38h+var_10], 0
 * 00000001400229C9: mov     edx, esi
 * 00000001400229CB: mov     rcx, r14
 * 00000001400229CE: mov     [rsp+38h+var_18], di
 * 00000001400229D3: call    cs:__imp_WppAutoLogTrace
 * 00000001400229DA: nop     dword ptr [rax+rax+00h]
 * 00000001400229DF: mov     rbx, [rsp+38h+arg_0]
 * 00000001400229E4: mov     rsi, [rsp+38h+arg_8]
 * 00000001400229E9: mov     rdi, [rsp+38h+arg_10]
 * 00000001400229EE: add     rsp, 30h
 * 00000001400229F2: pop     r14
 * 00000001400229F4: retn
 * 00000001400229F6: lea     rax, [r11+r11*4]
 * 00000001400229FA: add     rax, rax
 * 00000001400229FD: cmp     [rcx+rax*8+29h], sil
 * 0000000140022A02: jb      short loc_1400229B8
 * 0000000140022A04: mov     rcx, [rsp+38h+arg_20]; struct _GUID *
 * 0000000140022A09: xor     r8d, r8d
 * 0000000140022A0C: mov     edx, edi; unsigned __int16
 * 0000000140022A0E: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 0000000140022A13: jmp     short loc_1400229B8
 */
