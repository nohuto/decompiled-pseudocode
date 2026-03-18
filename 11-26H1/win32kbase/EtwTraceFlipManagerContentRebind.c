/*
 * XREFs of EtwTraceFlipManagerContentRebind @ 0x140174FE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pxxtq_EtwWriteTransfer @ 0x14017501C (McTemplateK0pxxtq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerContentRebind(int a1, int a2, int a3, char a4, char a5)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pxxtq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5);
  return result;
}
