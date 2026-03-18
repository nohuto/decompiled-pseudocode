/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStart @ 0x14019B300
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1400EE6CC (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceLegacyTouchPadDetectionStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &LegacyTouchPadDetectionStart, &W32kControlGuid);
  return result;
}
