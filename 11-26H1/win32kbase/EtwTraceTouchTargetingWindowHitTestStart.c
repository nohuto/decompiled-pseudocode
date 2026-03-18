/*
 * XREFs of EtwTraceTouchTargetingWindowHitTestStart @ 0x140064230
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchTargetingWindowHitTestStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchTargetingWindowHitTestStart, &W32kControlGuid);
  return result;
}
