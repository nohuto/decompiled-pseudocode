/*
 * XREFs of IsZeroBWInterface @ 0x14003BD4C
 * Callers:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x140037088 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1400380E0 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseGetAudioStreamingDataranges @ 0x14003B6E4 (USBParseGetAudioStreamingDataranges.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003B95C (USBHwSelectStreamingAudioInterface.c)
 * Callees:
 *     USBParseGetEndpointDescriptor @ 0x14003C04C (USBParseGetEndpointDescriptor.c)
 */

char __fastcall IsZeroBWInterface(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // bl
  __int64 EndpointDescriptor; // rax

  v2 = *(_BYTE *)(a2 + 4);
  v3 = 0;
  if ( !v2 )
    return 1;
  if ( v2 == 1 )
  {
    EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0LL);
    if ( !EndpointDescriptor || !*(_WORD *)(EndpointDescriptor + 4) )
      return 1;
  }
  return v3;
}
