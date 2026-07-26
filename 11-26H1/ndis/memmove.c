/*
 * XREFs of memmove @ 0x1400EA1C0
 * Callers:
 *     ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x140001008 (-ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z.c)
 *     ndisNsiCopyMemoryWithGlobalIfLock @ 0x140001144 (ndisNsiCopyMemoryWithGlobalIfLock.c)
 *     ?reserve@?$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z @ 0x1400019C0 (-reserve@-$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x140001A80 (-reserve@-$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@_W$00@Rtl@@QEAA_N_K@Z @ 0x140001B40 (-reserve@-$KArray@_W$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x140003DEC (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     NdisWriteErrorLogEntry @ 0x140005D80 (NdisWriteErrorLogEntry.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x140006510 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     NdisEnumerateFilterModules @ 0x14000B080 (NdisEnumerateFilterModules.c)
 *     ndisQueryGuidData @ 0x14000C100 (ndisQueryGuidData.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x14000EC30 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140010D10 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x140018320 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisWmiRegister @ 0x140018C20 (ndisWmiRegister.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x140019210 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BEE0 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x14001C190 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001DEF0 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14001E1C0 (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x14001F850 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140021800 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140021E00 (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140028C70 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140029030 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x14002FCF0 (ndisCopyPeriodicReceiveNbl.c)
 *     ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140035610 (-ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x14003AFA0 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x14003F830 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     NdisGetDataBuffer @ 0x14003FB60 (NdisGetDataBuffer.c)
 *     ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140042EE0 (-ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisReadUpperBindings @ 0x14004BD10 (ndisReadUpperBindings.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x14004C120 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140050AC0 (-ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140050F70 (-ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisCopyFromNetBufferToNetBuffer @ 0x140051F00 (NdisCopyFromNetBufferToNetBuffer.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140053270 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     NdisFIndicateStatus @ 0x1400560D0 (NdisFIndicateStatus.c)
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140056470 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140056520 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057FF0 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140058130 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140058320 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140058560 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x140059140 (Duplicate802_11AttachAttributesCommon.c)
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x14005ADD0 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C9B0 (-ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x14005CE40 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140060190 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     NdisOpenConfigurationKeyByName @ 0x140060880 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenProtocolConfiguration @ 0x1400613C0 (NdisOpenProtocolConfiguration.c)
 *     ndisAllocateSharedMemoryInternal @ 0x140062560 (ndisAllocateSharedMemoryInternal.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140062C30 (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140064F70 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x140065F50 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x140066900 (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 *     NdisWriteConfiguration @ 0x140067100 (NdisWriteConfiguration.c)
 *     ndisLWM5IndicateReceive @ 0x1400680C0 (ndisLWM5IndicateReceive.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x140068D70 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1400698E0 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     NdisMAllocatePort @ 0x14006A150 (NdisMAllocatePort.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x14006E060 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x14006F6A0 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     NdisRegisterDeviceEx @ 0x140072EC0 (NdisRegisterDeviceEx.c)
 *     NdisWriteEventLogEntry @ 0x140074A10 (NdisWriteEventLogEntry.c)
 *     ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1400758E0 (-EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1400760C0 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140076300 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x140077430 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x1400774F0 (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140078A60 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14007B620 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14007E4E0 (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007F700 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140080170 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x140080A10 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 *     ndisQuerySupportedGuidToOidList @ 0x140083C30 (ndisQuerySupportedGuidToOidList.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x140084DD0 (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x140086FB0 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     ndisQueryStatisticsOids @ 0x1400888D0 (ndisQueryStatisticsOids.c)
 *     ndisIfRegisterInterfaceEx @ 0x140089340 (ndisIfRegisterInterfaceEx.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14008C9B0 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     NdisGetProcessorInformationEx @ 0x140090CE0 (NdisGetProcessorInformationEx.c)
 *     memcpy_s @ 0x140091064 (memcpy_s.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140093C2C (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAJPEBU-$TriageDataCollect.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140093D20 (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@CAJPEBU-$TriageDataCollect.c)
 *     NdisMQueryAdapterResources @ 0x140095A70 (NdisMQueryAdapterResources.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1400971CC (ndisConvertIdentifierForNetworkInterface.c)
 *     ?EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z @ 0x140097C68 (-EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140097D48 (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140097F74 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x14009A2BC (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@CAJPEBU-$TriageDataCollector.c)
 *     ?ndisReadParameter@@YAJPEA_WKPEAXK11@Z @ 0x14009A6C0 (-ndisReadParameter@@YAJPEA_WKPEAXK11@Z.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@X@@CAJPEBU?$TriageDataCollector@X@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@X@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@X@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x14009AC38 (-DuplicateCollectorsArray@-$ObjectTriageData@X@@CAJPEBU-$TriageDataCollector@X@@_KAEAV-$unique_a.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x14009C0AC (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@CAJPEBU-$TriageDataCo.c)
 *     ndisFIndicateNicSwitchCapabilitiesChange @ 0x14009C438 (ndisFIndicateNicSwitchCapabilitiesChange.c)
 *     ndisFIndicateReceiveFilterCapabilitiesChange @ 0x14009C5AC (ndisFIndicateReceiveFilterCapabilitiesChange.c)
 *     ndisFIndicateSriovCapabilitiesChange @ 0x14009C71C (ndisFIndicateSriovCapabilitiesChange.c)
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009F920 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009F9E0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009FD7C (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A10A4 (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A1348 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A15BC (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A18CC (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     NdisMWriteLogData @ 0x1400A4040 (NdisMWriteLogData.c)
 *     ndisEtwRegisterGuids @ 0x1400A5BAC (ndisEtwRegisterGuids.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1400A6CC8 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400A6FF0 (-ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1400AC0E0 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE.c)
 *     ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ADCB0 (-ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ADEC0 (-ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AE230 (-ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400AE400 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1400AF6DC (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1400AFF3C (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B0520 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1400B1134 (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1400B357C (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1400B58E4 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1400B5A20 (-ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1400B5BB8 (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1400B5C94 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B68C0 (-ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B7CD8 (-ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B7E84 (-ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B9680 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B98B8 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B9C44 (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B9F10 (-ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA1D8 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x1400BAB5C (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@CAJPEBU-$TriageDataColl.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x1400BAC50 (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@CAJPEBU-$TriageDataCollect.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD630 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BDBD0 (-ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE120 (-ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE540 (-ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BEE70 (-ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BF1A4 (-ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BF2E4 (-ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PE.c)
 *     ?ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BFC10 (-ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BFDF8 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1400C0118 (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C0D80 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C10E0 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C16AC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C1B9C (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C2328 (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1400C627C (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1400C8108 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1400CC824 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1400CDE70 (NdisSetSessionCompartmentId.c)
 *     ndisIfUpdateSingleField @ 0x1400CE6CC (ndisIfUpdateSingleField.c)
 *     ndisIfCreateCompartment @ 0x1400CFBB8 (ndisIfCreateCompartment.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400D0054 (ndisIfCreateCompartmentBlock.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400D0C80 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D1ADC (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400D1D10 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D3660 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400D3EE0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1400D43A4 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 *     NdisCopyFromPacketToPacket @ 0x1400DB480 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1400DB680 (NdisCopyFromPacketToPacketSafe.c)
 *     NdisInitializeWrapper @ 0x1400DC1C0 (NdisInitializeWrapper.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DFA8C (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1400DFE48 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E011C (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CA.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1400E10E0 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E3A90 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4830 (-ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     AddStringToBufferContext @ 0x1400E6328 (AddStringToBufferContext.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1400E7EE4 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     CreateNewEventEntry @ 0x1400E8A48 (CreateNewEventEntry.c)
 *     RtlCopyVolatileMemory @ 0x1400EA090 (RtlCopyVolatileMemory.c)
 *     RtlMoveVolatileMemory @ 0x1400EA0A0 (RtlMoveVolatileMemory.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x14013B6CC (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x14013C038 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x14013EB70 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x140141E08 (-ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_S.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1401422F0 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     WppTraceCallback @ 0x140144B90 (WppTraceCallback.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1401459A0 (NdisMRegisterWdiMiniportDriver.c)
 *     ndisIfUpdateStringIfNeeded @ 0x140146E94 (ndisIfUpdateStringIfNeeded.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x140147638 (ndisNsiGetIfRcvAddressRodInformation.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x140149560 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x140149760 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x140149C50 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x140149E40 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x14014C408 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014D46C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x14015099C (SeSddlSecurityDescriptorFromSDDL.c)
 *     SepSddlAddAceToAcl @ 0x140150A7C (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x140151E10 (CmRegUtilUcValueSetUcString.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x140152A60 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1401544F0 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x140154950 (ndisNsiGetInterfaceRwInformation.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisIsMacAddressHidden @ 0x14015C720 (ndisIsMacAddressHidden.c)
 *     ?ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z @ 0x14015C940 (-ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015D440 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 *     ?ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@E$00@Rtl@@@Z @ 0x140164D40 (-ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@E$00@Rtl@@@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140165C40 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x140166980 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140167170 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     _lambda_4865fb945cd28a177f845da523c8204e_::operator() @ 0x140169950 (_lambda_4865fb945cd28a177f845da523c8204e_--operator().c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x14016ABE0 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x14016C590 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisMiniportDeviceReadyNotification @ 0x14016DDF0 (ndisMiniportDeviceReadyNotification.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016F0D0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x14016F790 (ndisNsiGetInterfaceRodInformation.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x140173298 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 *     NdisMRegisterDevice @ 0x1401741A0 (NdisMRegisterDevice.c)
 *     ndisEnumerateInterfaces32 @ 0x140174CBC (ndisEnumerateInterfaces32.c)
 *     ndisEnumerateInterfaces @ 0x140179810 (ndisEnumerateInterfaces.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisMRegisterInterruptEx @ 0x14017DC00 (NdisMRegisterInterruptEx.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z @ 0x14018EE40 (-ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x14019118C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401913F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
