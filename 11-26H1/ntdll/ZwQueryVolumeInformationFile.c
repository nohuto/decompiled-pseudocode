/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x18015F860
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x180078A04 (EtwpFinalizeLogFileHeader.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A54FC (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1801154EC (LdrpCheckAppDirType.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18015AC68 (RtlpQueryDiskSpacePolicyByHandle.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVolumeInformationFile()
{
  __int64 result; // rax

  result = 73LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
