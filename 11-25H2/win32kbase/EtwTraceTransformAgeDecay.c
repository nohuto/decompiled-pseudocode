/*
 * XREFs of EtwTraceTransformAgeDecay @ 0x1400FEF90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0px_EtwWriteTransfer @ 0x1400ED250 (McTemplateK0px_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTransformAgeDecay(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    return McTemplateK0px_EtwWriteTransfer(a1, &TransformAgeDecay, a3, a1, a2);
  return result;
}
