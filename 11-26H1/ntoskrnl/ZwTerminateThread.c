/*
 * XREFs of ZwTerminateThread @ 0x140728A20
 * Callers:
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
