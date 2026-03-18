/*
 * XREFs of EtwTraceEdgyDetectionStop @ 0x1401DACE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1400F4FF8 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceEdgyDetectionStop(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &EdgyDetectionStop, a3, a1);
  return result;
}
