/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x1407F2F70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeGenericProcessorCallback @ 0x140379F74 (KeGenericProcessorCallback.c)
 */

LONG __fastcall PspSetVmProcessorHostProcessWorkerRoutine(PRKEVENT Event)
{
  KeGenericProcessorCallback((__int64 *)&stru_140FC01F0.WaitRegister, (__int64)xHalTimerWatchdogStop, 0LL, 2);
  return KeSetEvent(Event, 0, 0);
}
