/*
 * XREFs of ZwCreateNamedPipeFile @ 0x140729720
 * Callers:
 *     DifZwCreateNamedPipeFileWrapper @ 0x1406A4090 (DifZwCreateNamedPipeFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateNamedPipeFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        ULONG NamedPipeType,
        ULONG ReadMode,
        ULONG CompletionMode,
        ULONG MaximumInstances,
        ULONG InboundQuota,
        ULONG OutboundQuota,
        PLARGE_INTEGER DefaultTimeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
