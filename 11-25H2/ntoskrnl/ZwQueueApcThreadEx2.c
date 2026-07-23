/*
 * XREFs of ZwQueueApcThreadEx2 @ 0x14069DFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueueApcThreadEx2(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        ULONG ApcFlags,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
