/*
 * XREFs of EtwTraceFlipManagerStopCompleteToken @ 0x140160BE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400AA3D4 (McTemplateK0x_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerStopCompleteToken(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0x_EtwWriteTransfer(a1, &FlipManagerStopCompleteToken, a3, a1);
  return result;
}
