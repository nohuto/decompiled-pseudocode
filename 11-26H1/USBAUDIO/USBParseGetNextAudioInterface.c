/*
 * XREFs of USBParseGetNextAudioInterface @ 0x14003BFFC
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x140036C4C (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x140037088 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1400380E0 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003B38C (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x14003B6E4 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetEndpointDescriptor @ 0x14003C04C (USBParseGetEndpointDescriptor.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetNextAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r9

  v2 = a2;
  if ( a2 )
    return USBD_ParseConfigurationDescriptorEx(a1, &a2[*a2], a2[2], -1, 1, a2[6], -1);
  return (PUSB_INTERFACE_DESCRIPTOR)v2;
}
