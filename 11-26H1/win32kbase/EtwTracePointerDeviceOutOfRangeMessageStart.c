/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStart @ 0x140064200
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140131C1C (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceOutOfRangeMessageStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceOutOfRangeMessageStart, &W32kControlGuid);
  return result;
}
