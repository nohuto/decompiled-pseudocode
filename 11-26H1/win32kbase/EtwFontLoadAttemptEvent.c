/*
 * XREFs of EtwFontLoadAttemptEvent @ 0x1401F9E30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqzt_EtwWriteTransfer @ 0x1401FA484 (McTemplateK0zqzt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwFontLoadAttemptEvent(int a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000) != 0 )
    return McTemplateK0zqzt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
