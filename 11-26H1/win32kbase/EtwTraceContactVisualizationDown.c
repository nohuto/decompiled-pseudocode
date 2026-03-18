/*
 * XREFs of EtwTraceContactVisualizationDown @ 0x140197C20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceContactVisualizationDown(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &ContactVisualizationDown, &W32kControlGuid);
  return result;
}
