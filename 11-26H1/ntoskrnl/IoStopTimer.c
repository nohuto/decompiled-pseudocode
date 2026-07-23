/*
 * XREFs of IoStopTimer @ 0x1405CDD80
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1405CCFD0 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
