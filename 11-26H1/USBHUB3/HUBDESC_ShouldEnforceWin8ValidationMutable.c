/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CFF8
 * Callers:
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x140036368 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x140037110 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037990 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x14003A640 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003B28C (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003C5E4 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003D030 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x14003D4CC (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x14003E254 (HUBDESC_ValidateDeviceDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationMutable(__int64 a1)
{
  return (unsigned __int16)(*(_WORD *)a1 - 768) <= 0x10u
      || (unsigned __int16)(*(_WORD *)a1 - 513) <= 0xFu
      || *(_BYTE *)(a1 + 12) != 0;
}
