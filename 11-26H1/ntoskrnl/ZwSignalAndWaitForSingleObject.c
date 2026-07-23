/*
 * XREFs of ZwSignalAndWaitForSingleObject @ 0x14072B8E0
 * Callers:
 *     DifZwSignalAndWaitForSingleObjectWrapper @ 0x1406C0A80 (DifZwSignalAndWaitForSingleObjectWrapper.c)
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
