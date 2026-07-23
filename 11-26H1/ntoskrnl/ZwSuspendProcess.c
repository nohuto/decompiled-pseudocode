/*
 * XREFs of ZwSuspendProcess @ 0x14072B9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSuspendProcess(HANDLE ProcessHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
