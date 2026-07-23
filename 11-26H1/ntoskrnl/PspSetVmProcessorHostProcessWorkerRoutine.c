/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x1407F8AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 */

LONG __fastcall PspSetVmProcessorHostProcessWorkerRoutine(PRKEVENT Event)
{
  KeGenericProcessorCallback((__int64 *)&stru_140FC11F0.WaitRegister, (__int64)xHalTimerWatchdogStop, 0LL, 2);
  return KeSetEvent(Event, 0, 0);
}
