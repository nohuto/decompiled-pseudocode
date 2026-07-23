/*
 * XREFs of IoCreateFile @ 0x1409847E0
 * Callers:
 *     DifIoCreateFileWrapper @ 0x14065E8A0 (DifIoCreateFileWrapper.c)
 *     IopInitCrashDumpRegCallback @ 0x140CC3630 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
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
           Disposition,
           CreateOptions,
           EaBuffer,
           Length,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
