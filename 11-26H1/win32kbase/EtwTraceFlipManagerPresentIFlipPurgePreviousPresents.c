/*
 * XREFs of EtwTraceFlipManagerPresentIFlipPurgePreviousPresents @ 0x1401DB250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1400ABEA4 (McTemplateK0qp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerPresentIFlipPurgePreviousPresents(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qp_EtwWriteTransfer(a1, &FlipManagerPresentIFlipPurgePreviousPresents, a3, a1, a2);
  return result;
}
