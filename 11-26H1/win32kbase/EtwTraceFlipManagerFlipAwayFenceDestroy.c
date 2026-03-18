/*
 * XREFs of EtwTraceFlipManagerFlipAwayFenceDestroy @ 0x1401DAE10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0px_EtwWriteTransfer @ 0x140133A90 (McTemplateK0px_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerFlipAwayFenceDestroy(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0px_EtwWriteTransfer(a1, &FlipManagerFlipAwayFenceDestroy, a3, a1, a2);
  return result;
}
