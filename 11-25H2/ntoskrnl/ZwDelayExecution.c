/*
 * XREFs of ZwDelayExecution @ 0x14069B7C0
 * Callers:
 *     IovUnloadDrivers @ 0x140B7278C (IovUnloadDrivers.c)
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
