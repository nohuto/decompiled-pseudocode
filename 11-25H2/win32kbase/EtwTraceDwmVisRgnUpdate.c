/*
 * XREFs of EtwTraceDwmVisRgnUpdate @ 0x140106670
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqt_EtwWriteTransfer @ 0x1401066A0 (McTemplateK0ppqt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDwmVisRgnUpdate(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000) != 0 )
    return McTemplateK0ppqt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
