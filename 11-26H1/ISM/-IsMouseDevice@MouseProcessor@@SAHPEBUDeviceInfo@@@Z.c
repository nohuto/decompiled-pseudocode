/*
 * XREFs of ?IsMouseDevice@MouseProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18007CF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::IsMouseDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 1) & 1;
}
