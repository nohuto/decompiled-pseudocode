/*
 * XREFs of EtwTraceEdgyDetectionStart @ 0x1401B7C90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceEdgyDetectionStart(__int64 a1)
{
  char result; // al

  result = BYTE2(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &EdgyDetectionStart, &W32kControlGuid);
  return result;
}
