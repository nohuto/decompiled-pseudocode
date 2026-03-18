/*
 * XREFs of Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x14000F2D0 (Control_Transfer_MapIntoRing.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x140017A60 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_Stage_MapIntoRing @ 0x14001A0D0 (Bulk_Stage_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14001D7AC (UsbDevice_InitializeEndpointContext.c)
 *     UsbDevice_SetAddress @ 0x140025BE0 (UsbDevice_SetAddress.c)
 *     TR_GetPacketCount @ 0x140026D10 (TR_GetPacketCount.c)
 *     Isoch_GetTDPC @ 0x140026E00 (Isoch_GetTDPC.c)
 *     TR_CalculateTDSize @ 0x140026E80 (TR_CalculateTDSize.c)
 *     Isoch_GetTBC @ 0x1400271A0 (Isoch_GetTBC.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002EDB0 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Bulk_EP_Enable @ 0x140034BC0 (Bulk_EP_Enable.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x14003A000 (Controller_UcxEvtQueryUsbCapability.c)
 *     Register_ParseCapabilityRegister @ 0x14007CAB0 (Register_ParseCapabilityRegister.c)
 *     Control_Initialize @ 0x14007FEA0 (Control_Initialize.c)
 *     Endpoint_Create @ 0x1400806CC (Endpoint_Create.c)
 *     Bulk_Initialize @ 0x140081F60 (Bulk_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x140082490 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledFallback @ 0x140044CBC (Feature_EUSB2__private_IsEnabledFallback.c)
 */

__int64 Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EUSB2__private_featureState & 0x10) != 0 )
    return Feature_EUSB2__private_featureState & 1;
  else
    return Feature_EUSB2__private_IsEnabledFallback((unsigned int)Feature_EUSB2__private_featureState, 3LL);
}
