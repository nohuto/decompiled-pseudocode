/*
 * XREFs of EtwTraceTHQAStop @ 0x1400B07C0
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1400B25A8 (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTHQAStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &THQAStop, &W32kControlGuid);
  return result;
}
