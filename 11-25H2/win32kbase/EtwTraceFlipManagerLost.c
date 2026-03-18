/*
 * XREFs of EtwTraceFlipManagerLost @ 0x1401B7E80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140078A24 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerLost(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &FlipManagerLost, a3, a1);
  return result;
}
