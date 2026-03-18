/*
 * XREFs of EtwTraceForegroundWindowFullScreenStart @ 0x140157790
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceForegroundWindowFullScreenStart(const GUID *a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0_EtwWriteTransfer((__int64)a1, &ForegroundWindowFullScreenStart, a1);
  return result;
}
