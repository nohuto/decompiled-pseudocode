/*
 * XREFs of EtwTraceFlipManagerCanceledPresentShown @ 0x1401B7D80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x140115D54 (McTemplateK0qxq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerCanceledPresentShown(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(a1, &FlipManagerCanceledPresentShown, a3, a1, a2, a3);
  return result;
}
