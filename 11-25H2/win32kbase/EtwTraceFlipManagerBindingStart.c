/*
 * XREFs of EtwTraceFlipManagerBindingStart @ 0x14015CE50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14003E5F0 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerBindingStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0p_EtwWriteTransfer(a1, (__int64)&FlipManagerBindingStart, (__int64)&W32kControlGuid, a1);
  return result;
}
