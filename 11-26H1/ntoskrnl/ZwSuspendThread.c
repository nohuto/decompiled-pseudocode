/*
 * XREFs of ZwSuspendThread @ 0x14072B9C0
 * Callers:
 *     DifZwSuspendThreadWrapper @ 0x1406C10A0 (DifZwSuspendThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
