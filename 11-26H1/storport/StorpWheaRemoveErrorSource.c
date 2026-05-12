/*
 * XREFs of StorpWheaRemoveErrorSource @ 0x140188990
 * Callers:
 *     DllUnload @ 0x1400ADF30 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 StorpWheaRemoveErrorSource()
{
  __int64 result; // rax

  result = WheaErrorSourceGetState((unsigned int)g_StorpWheaErrorSourceId);
  if ( (_DWORD)result != 3 )
    return WheaRemoveErrorSourceDeviceDriver((unsigned int)g_StorpWheaErrorSourceId);
  return result;
}
