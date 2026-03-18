/*
 * XREFs of EtwTraceDwmVisRgnDirty @ 0x140141610
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140141638 (McTemplateK0pp_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDwmVisRgnDirty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000) != 0 )
    return McTemplateK0pp_EtwWriteTransfer(a1, a2, a3, a1, a2);
  return result;
}
