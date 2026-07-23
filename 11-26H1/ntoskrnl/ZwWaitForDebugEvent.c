/*
 * XREFs of ZwWaitForDebugEvent @ 0x14072BC60
 * Callers:
 *     DifZwWaitForDebugEventWrapper @ 0x1406C2D60 (DifZwWaitForDebugEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForDebugEvent(
        HANDLE DebugObjectHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE WaitStateChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObjectHandle);
}
