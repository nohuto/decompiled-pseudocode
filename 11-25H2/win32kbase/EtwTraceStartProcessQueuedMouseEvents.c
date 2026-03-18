/*
 * XREFs of EtwTraceStartProcessQueuedMouseEvents @ 0x1400F3600
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceStartProcessQueuedMouseEvents(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &StartProcessQueuedMouseEvents, &W32kControlGuid);
  return result;
}
