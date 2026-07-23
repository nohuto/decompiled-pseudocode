/*
 * XREFs of NtDeviceIoControlFile @ 0x18015EF20
 * Callers:
 *     SaferpIsDllAllowed @ 0x1800E27A4 (SaferpIsDllAllowed.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18010DBD4 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     GetProcessIptTrace @ 0x18015A71C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015A82C (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18015ACB4 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 7;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
