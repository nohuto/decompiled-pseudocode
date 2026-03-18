/*
 * XREFs of EtwTraceFlipManagerPresentIFlipCompleted @ 0x140130690
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxttxx_EtwWriteTransfer @ 0x1401306DC (McTemplateK0qxttxx_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerPresentIFlipCompleted(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxttxx_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
