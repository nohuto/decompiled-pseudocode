/*
 * XREFs of EtwTraceFlipManagerPresentIFlipSubmitted @ 0x14012F020
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxt_EtwWriteTransfer @ 0x14012F050 (McTemplateK0qxt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerPresentIFlipSubmitted(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
