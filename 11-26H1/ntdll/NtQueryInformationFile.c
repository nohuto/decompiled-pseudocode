/*
 * XREFs of NtQueryInformationFile @ 0x18015F160
 * Callers:
 *     LdrpResFileSize @ 0x1800A75FC (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800AB978 (LdrpResValidateFileHandle.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010CE10 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x180110650 (RtlIsPartialPlaceholderFileHandle.c)
 *     RtlpGetFileSize @ 0x180126660 (RtlpGetFileSize.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
