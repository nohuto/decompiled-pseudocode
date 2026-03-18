/*
 * XREFs of EtwTraceFlipManagerStopCompleteToken @ 0x1400F08E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400F098C (McTemplateK0x_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerStopCompleteToken(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0x_EtwWriteTransfer(a1, &FlipManagerStopCompleteToken, a3, a1);
  return result;
}
