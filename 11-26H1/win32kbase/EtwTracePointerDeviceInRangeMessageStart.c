/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStart @ 0x1400641A0
 * Callers:
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x140131C9C (ApiSetPostPointerDeviceInRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceInRangeMessageStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceInRangeMessageStart, &W32kControlGuid);
  return result;
}
