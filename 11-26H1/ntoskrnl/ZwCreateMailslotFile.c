/*
 * XREFs of ZwCreateMailslotFile @ 0x1407296E0
 * Callers:
 *     DifZwCreateMailslotFileWrapper @ 0x1406A3D30 (DifZwCreateMailslotFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateMailslotFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CreateOptions,
        ULONG MailslotQuota,
        ULONG MaximumMessageSize,
        PLARGE_INTEGER ReadTimeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
