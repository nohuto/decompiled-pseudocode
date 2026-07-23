/*
 * XREFs of NtCreateFile @ 0x140984A20
 * Callers:
 *     DifNtCreateFileWrapper @ 0x140674870 (DifNtCreateFileWrapper.c)
 * Callees:
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  SIZE_T Length; // [rsp+50h] [rbp-38h]

  LODWORD(Length) = EaLength;
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           EaBuffer,
           Length,
           0,
           0LL,
           0,
           32,
           0LL);
}
