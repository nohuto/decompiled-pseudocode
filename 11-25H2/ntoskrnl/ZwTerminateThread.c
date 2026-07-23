/*
 * XREFs of ZwTerminateThread @ 0x14069BBA0
 * Callers:
 *     RtlAssert @ 0x1405DD1F0 (RtlAssert.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
