/*
 * XREFs of IoStopTimer @ 0x1405CB4B0
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1405CA700 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
