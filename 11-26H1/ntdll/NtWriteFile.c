/*
 * XREFs of NtWriteFile @ 0x18015EF40
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFlushBuffer @ 0x180066D70 (EtwpFlushBuffer.c)
 *     EtwpWriteBufferCompressed @ 0x180066FE8 (EtwpWriteBufferCompressed.c)
 *     EtwpFinalizeLogFileHeader @ 0x180067224 (EtwpFinalizeLogFileHeader.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800676E4 (EtwpWriteRemainingCompressedData.c)
 *     RtlCreateBootStatusDataFile @ 0x18010B9B0 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x18010BBE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x18011595C (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax

  result = 8;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
