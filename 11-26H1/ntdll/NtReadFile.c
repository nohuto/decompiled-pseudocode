/*
 * XREFs of NtReadFile @ 0x18015F000
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x180078A04 (EtwpFinalizeLogFileHeader.c)
 *     LdrpResReadFile @ 0x1800AA578 (LdrpResReadFile.c)
 *     RtlpGetSetBootStatusData @ 0x18011617C (RtlpGetSetBootStatusData.c)
 *     RtlCheckBootStatusIntegrity @ 0x180141A40 (RtlCheckBootStatusIntegrity.c)
 * Callees:
 *     <none>
 */

__int64 NtReadFile()
{
  __int64 result; // rax

  result = 6LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
