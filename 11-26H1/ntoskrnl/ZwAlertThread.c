/*
 * XREFs of ZwAlertThread @ 0x140728DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThread(HANDLE ThreadHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
