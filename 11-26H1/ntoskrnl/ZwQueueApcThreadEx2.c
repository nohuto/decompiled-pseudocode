/*
 * XREFs of ZwQueueApcThreadEx2 @ 0x14072AE40
 * Callers:
 *     DifZwQueueApcThreadEx2Wrapper @ 0x1406B8F30 (DifZwQueueApcThreadEx2Wrapper.c)
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
