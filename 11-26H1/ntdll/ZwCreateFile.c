/*
 * XREFs of ZwCreateFile @ 0x18015F9E0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C7AD0 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x180109594 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x18010BE60 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetVolumeHandle @ 0x18010DEAC (RtlpGetVolumeHandle.c)
 *     OpenIptDevice @ 0x18015AA90 (OpenIptDevice.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18015AB18 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
