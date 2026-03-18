/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStart @ 0x1401B8750
 * Callers:
 *     EnablePTPDevices @ 0x1401B4DE0 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchPadEnabledStatusChangeStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadEnabledStatusChangeStart, &W32kControlGuid);
  return result;
}
