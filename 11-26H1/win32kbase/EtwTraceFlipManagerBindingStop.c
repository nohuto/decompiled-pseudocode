/*
 * XREFs of EtwTraceFlipManagerBindingStop @ 0x140064260
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerBindingStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &FlipManagerBindingStop, &W32kControlGuid);
  return result;
}
