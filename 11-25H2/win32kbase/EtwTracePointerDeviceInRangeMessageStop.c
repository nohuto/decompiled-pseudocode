/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStop @ 0x14015EB30
 * Callers:
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x140127D6C (ApiSetPostPointerDeviceInRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceInRangeMessageStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceInRangeMessageStop, &W32kControlGuid);
  return result;
}
