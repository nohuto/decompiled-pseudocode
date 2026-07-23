/*
 * XREFs of ZwQueueApcThreadEx @ 0x14069DF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueueApcThreadEx(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
