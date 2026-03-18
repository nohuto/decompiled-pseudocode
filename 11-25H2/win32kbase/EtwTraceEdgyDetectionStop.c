/*
 * XREFs of EtwTraceEdgyDetectionStop @ 0x1401B7CC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140078A24 (McTemplateK0d_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceEdgyDetectionStop(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = BYTE2(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &EdgyDetectionStop, a3, a1);
  return result;
}
