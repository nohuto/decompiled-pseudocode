/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStart @ 0x140157BF0
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140127CEC (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceOutOfRangeMessageStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceOutOfRangeMessageStart, &W32kControlGuid);
  return result;
}
