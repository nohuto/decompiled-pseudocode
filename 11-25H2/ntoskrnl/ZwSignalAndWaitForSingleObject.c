/*
 * XREFs of ZwSignalAndWaitForSingleObject @ 0x14069EA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSignalAndWaitForSingleObject(
        HANDLE SignalHandle,
        HANDLE WaitHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SignalHandle);
}
