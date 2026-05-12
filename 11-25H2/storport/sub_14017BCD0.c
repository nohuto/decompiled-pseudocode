/*
 * XREFs of sub_14017BCD0 @ 0x14017BCD0
 * Callers:
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 sub_14017BCD0()
{
  __int64 result; // rax

  result = WheaErrorSourceGetState((unsigned int)dword_140168D38);
  if ( (_DWORD)result != 3 )
    return WheaRemoveErrorSourceDeviceDriver((unsigned int)dword_140168D38);
  return result;
}
