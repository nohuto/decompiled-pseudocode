/*
 * XREFs of EtwTraceFlipManagerBufferAvailable @ 0x14011FBA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qpt_EtwWriteTransfer @ 0x14011FBD0 (McTemplateK0qpt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerBufferAvailable(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qpt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
