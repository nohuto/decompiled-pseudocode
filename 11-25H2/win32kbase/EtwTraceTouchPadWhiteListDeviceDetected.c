/*
 * XREFs of EtwTraceTouchPadWhiteListDeviceDetected @ 0x1401B8970
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x140180798 (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchPadWhiteListDeviceDetected(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadWhiteListDeviceDetected, &W32kControlGuid);
  return result;
}
