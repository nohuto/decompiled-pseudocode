/*
 * XREFs of Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C874
 * Callers:
 *     HUBUCX_CreateEndpointsInUCX @ 0x140026884 (HUBUCX_CreateEndpointsInUCX.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1400315C8 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1400323B4 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037990 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x140039D20 (HUBDESC_InternalValidateLastEndpoint.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBFDO_EvtDeviceAdd @ 0x14007ABE0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledFallback @ 0x14000C8B0 (Feature_EUSB2__private_IsEnabledFallback.c)
 */

__int64 Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EUSB2__private_featureState & 0x10) != 0 )
    return Feature_EUSB2__private_featureState & 1;
  else
    return Feature_EUSB2__private_IsEnabledFallback((unsigned int)Feature_EUSB2__private_featureState, 3LL);
}
