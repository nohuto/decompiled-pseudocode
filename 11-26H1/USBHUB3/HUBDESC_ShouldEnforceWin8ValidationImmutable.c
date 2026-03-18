/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC
 * Callers:
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1400367B8 (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x140036A6C (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x140036CFC (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x140037110 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140037460 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037990 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x140038CA8 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateIADescriptor @ 0x140039364 (HUBDESC_InternalValidateIADescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x140039798 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x140039EA8 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x140039FF4 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x14003A640 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14003AC88 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003B28C (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x14003BCDC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003C5E4 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x14003C990 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003D030 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x14003E9A8 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationImmutable(__int64 a1)
{
  return *(_WORD *)a1 > 0x200u || *(_BYTE *)(a1 + 12) != 0;
}
