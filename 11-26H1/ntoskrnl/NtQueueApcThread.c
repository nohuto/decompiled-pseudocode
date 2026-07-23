/*
 * XREFs of NtQueueApcThread @ 0x140A86600
 * Callers:
 *     DifNtQueueApcThreadWrapper @ 0x14068AE60 (DifNtQueueApcThreadWrapper.c)
 * Callees:
 *     NtQueueApcThreadEx2 @ 0x140A86690 (NtQueueApcThreadEx2.c)
 */

NTSTATUS __cdecl NtQueueApcThread(
        HANDLE ThreadHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  return NtQueueApcThreadEx2(ThreadHandle, 0LL, 0, ApcRoutine, ApcArgument1, ApcArgument2, ApcArgument3);
}
