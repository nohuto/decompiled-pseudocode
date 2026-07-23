/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x140C26C28
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     IovUtilFlushStackCache @ 0x140C36EA0 (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return IovUtilFlushStackCache(a2);
  return result;
}
