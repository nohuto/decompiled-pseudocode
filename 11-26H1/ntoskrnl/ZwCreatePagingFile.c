/*
 * XREFs of ZwCreatePagingFile @ 0x140729740
 * Callers:
 *     DifZwCreatePagingFileWrapper @ 0x1406A42C0 (DifZwCreatePagingFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePagingFile(
        PUNICODE_STRING PageFileName,
        PLARGE_INTEGER MinimumSize,
        PLARGE_INTEGER MaximumSize,
        ULONG Priority)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PageFileName);
}
