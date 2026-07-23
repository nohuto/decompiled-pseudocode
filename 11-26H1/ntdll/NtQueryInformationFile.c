/*
 * XREFs of NtQueryInformationFile @ 0x18015F060
 * Callers:
 *     LdrpResFileSize @ 0x1800A672C (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800AAAA8 (LdrpResValidateFileHandle.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010C960 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1801101E0 (RtlIsPartialPlaceholderFileHandle.c)
 *     RtlpGetFileSize @ 0x1801263D0 (RtlpGetFileSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 17;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
