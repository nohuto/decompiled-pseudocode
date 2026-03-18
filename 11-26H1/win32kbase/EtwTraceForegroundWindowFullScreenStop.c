/*
 * XREFs of EtwTraceForegroundWindowFullScreenStop @ 0x1401DB300
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceForegroundWindowFullScreenStop(const GUID *a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0_EtwWriteTransfer((__int64)a1, &ForegroundWindowFullScreenStop, a1);
  return result;
}
