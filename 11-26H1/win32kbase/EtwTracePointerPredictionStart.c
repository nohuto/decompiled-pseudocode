/*
 * XREFs of EtwTracePointerPredictionStart @ 0x1401DB430
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1400F4FF8 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerPredictionStart(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PointerPredictionStart, a3, a1);
  return result;
}
