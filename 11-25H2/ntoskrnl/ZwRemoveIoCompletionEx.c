/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x14069E120
 * Callers:
 *     DifZwRemoveIoCompletionExWrapper @ 0x14063AFC0 (DifZwRemoveIoCompletionExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
