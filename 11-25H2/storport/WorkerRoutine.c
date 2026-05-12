/*
 * XREFs of WorkerRoutine @ 0x1400013D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400013F0 @ 0x1400013F0 (sub_1400013F0.c)
 */

void __fastcall WorkerRoutine(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 76, 0);
  sub_1400013F0((PVOID)Context);
}
