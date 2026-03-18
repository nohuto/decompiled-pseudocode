/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStop @ 0x14015B290
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x140180798 (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceLegacyTouchPadDetectionStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &LegacyTouchPadDetectionStop, &W32kControlGuid);
  return result;
}
