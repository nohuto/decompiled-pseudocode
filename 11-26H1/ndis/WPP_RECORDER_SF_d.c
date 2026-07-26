/*
 * XREFs of WPP_RECORDER_SF_d @ 0x140023030
 * Callers:
 *     ndisLwmCreateIrpHandler @ 0x14000A790 (ndisLwmCreateIrpHandler.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14000E8F0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14001C9E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     NdisMAllocateNetBufferSGList @ 0x14003A7D0 (NdisMAllocateNetBufferSGList.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x14003F230 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ndisReceiveWorkerThread @ 0x140044080 (ndisReceiveWorkerThread.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140046890 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140049560 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140058130 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140058320 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisAllocateSharedMemory @ 0x1400621F0 (NdisAllocateSharedMemory.c)
 *     ndisWnfPdcCallback @ 0x140066C10 (ndisWnfPdcCallback.c)
 *     ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x14006F040 (-ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     NdisTryAcquireNicActive @ 0x14007A8B0 (NdisTryAcquireNicActive.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140094F30 (NdisLWMRegisterMiniportDriver.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x140095330 (NdisMAllocateSharedMemoryAsync.c)
 *     ?ndisInitializeGlobalTriageData@@YAXXZ @ 0x14009AF20 (-ndisInitializeGlobalTriageData@@YAXXZ.c)
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009F9E0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A1E4C (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B56B0 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B7F5C (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B81B8 (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C3C84 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ndisCreateThread @ 0x1400C5110 (ndisCreateThread.c)
 *     ndisAoAcTraceRundown @ 0x1400C81E4 (ndisAoAcTraceRundown.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9B18 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9EC0 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400CF53C (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfDeleteCompartment @ 0x1400D0394 (ndisIfDeleteCompartment.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D1ADC (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400D2D28 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     NdisClCloseCall @ 0x1400D4B00 (NdisClCloseCall.c)
 *     NdisCmMakeCallComplete @ 0x1400D5250 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1400D68B0 (NdisCoDeleteVc.c)
 *     NdisOpenFile @ 0x1400D9B70 (NdisOpenFile.c)
 *     KLoaderRegisterModule @ 0x1400DF0F0 (KLoaderRegisterModule.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400E7110 (NdisRegisterUserThreadExitCallback.c)
 *     ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400E76FC (-ndisInitializeThreadMonitorSubsystem@@YAJXZ.c)
 *     ?ndisCreateThreadStateObjectType@@YAJXZ @ 0x1400E77F4 (-ndisCreateThreadStateObjectType@@YAJXZ.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140139A28 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140142B34 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140142EB8 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143948 (-ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143D20 (-ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x140146360 (-Initialize@NdisPoll@@QEAAJXZ.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x140147D20 (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140147DCC (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     ?Reference@DriverService@@QEAAJ_N@Z @ 0x140148B40 (-Reference@DriverService@@QEAAJ_N@Z.c)
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14014FFB0 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015E360 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015EB30 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015ECA0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015F2A0 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140160690 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisNsiClientParameterChangeHandler @ 0x140163420 (ndisNsiClientParameterChangeHandler.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14016AD60 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x14016C370 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     NdisMAllocateMapRegisters @ 0x1401738C0 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x140174470 (NdisMRegisterDmaChannel.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x14018E078 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 *     ndisLoadNotifyRegister @ 0x14018EF40 (ndisLoadNotifyRegister.c)
 *     ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x140191714 (-ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, struct _GUID *a5, ...)
{
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  int v10; // ecx
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v10, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v7 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va, 4LL, 0LL);
}
