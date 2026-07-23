/*
 * XREFs of ZwQueueApcThread @ 0x140728860
 * Callers:
 *     DifZwQueueApcThreadWrapper @ 0x1406B92B0 (DifZwQueueApcThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueueApcThread(
        HANDLE ThreadHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
