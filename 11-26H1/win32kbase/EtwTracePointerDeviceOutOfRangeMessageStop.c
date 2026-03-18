/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStop @ 0x140064610
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140131C1C (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceOutOfRangeMessageStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"r", &W32kControlGuid);
  return result;
}
