/*
 * XREFs of EtwTraceFlipManagerStopTokenReleaseToFrame @ 0x140128B80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qp_EtwWriteTransfer @ 0x14003FAF0 (McTemplateK0qp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerStopTokenReleaseToFrame(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qp_EtwWriteTransfer(a1, &FlipManagerStopTokenReleaseToFrame, a3, a1, a2);
  return result;
}
