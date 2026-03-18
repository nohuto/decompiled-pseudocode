/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1400025E4
 * Callers:
 *     HUBHTX_ClearTtBufferControlTransferComplete @ 0x1400031E0 (HUBHTX_ClearTtBufferControlTransferComplete.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x140003AF0 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_HubControlTransferComplete @ 0x1400052D0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1400054C0 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x140005ED0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x140006504 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x140008040 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x140008600 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x140014570 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1400146D0 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPDO_GetHubName @ 0x140018C90 (HUBPDO_GetHubName.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x1400190E4 (HUBPDO_HandlePLDRRecovery.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1400195E4 (HUBPDO_InitializeInterfaceInformation.c)
 *     HUBPDO_RecordFailure @ 0x14001A3FC (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B864 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x14001BF04 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C108 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x14001C4CC (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBDSM_SettingSpeedFlagFor20Devices @ 0x1400249C0 (HUBDSM_SettingSpeedFlagFor20Devices.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1400254F0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028F10 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029800 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x14002A510 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_LogAlternateMode @ 0x14002BC2C (HUBDTX_LogAlternateMode.c)
 *     HUBDTX_LogBillboardEvent @ 0x14002BDFC (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C9CC (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x14002CBE0 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D22C (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBMISC_CheckIfSerialNumberIsIdentical @ 0x14002E644 (HUBMISC_CheckIfSerialNumberIsIdentical.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x140036368 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x140036A6C (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x140036CFC (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037990 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x140038CA8 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x140039798 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x14003A950 (HUBDESC_InternalValidateStringDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14003AC88 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003B28C (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x14003BCDC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003C5E4 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x14003C990 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003D030 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003D978 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateMSOSContainerIDDescriptorHeader @ 0x14003E7AC (HUBDESC_ValidateMSOSContainerIDDescriptorHeader.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x14003E9A8 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x14003EB54 (HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x14003F3B0 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x140041CF0 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1400425A0 (FWUPDATE_HubVendorControlTransferComplete.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007E274 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007F8D0 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007FF2C (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x140084364 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140084D6C (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x14008555C (HUBPDO_UnregisterPortPLDRCapability.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1400861BC (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1400884AC (HUBREG_IsPortPLDRCapable.c)
 *     HUBACPI_EvaluateDSD @ 0x14008DEBC (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008E290 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAB4 (HUBACPI_GetAcpiPortAttributes.c)
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dD(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, (__int64 *)va, 4LL, va1);
}
