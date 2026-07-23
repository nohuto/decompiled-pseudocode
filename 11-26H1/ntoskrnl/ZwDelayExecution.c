/*
 * XREFs of ZwDelayExecution @ 0x140728640
 * Callers:
 *     DifZwDelayExecutionWrapper @ 0x1406A7810 (DifZwDelayExecutionWrapper.c)
 *     IovUnloadDrivers @ 0x140C26E9C (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Alertable);
}
