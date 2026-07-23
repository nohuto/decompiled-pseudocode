/*
 * XREFs of ZwCreateFile @ 0x18015F8E0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C5290 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x180108F34 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x18010B9B0 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetVolumeHandle @ 0x18010D9FC (RtlpGetVolumeHandle.c)
 *     OpenIptDevice @ 0x18015A960 (OpenIptDevice.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18015A9E8 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateFile(
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
  NTSTATUS result; // eax

  result = 85;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
