/*
 * XREFs of NtWriteFile @ 0x18015F040
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFlushBuffer @ 0x180078550 (EtwpFlushBuffer.c)
 *     EtwpWriteBufferCompressed @ 0x1800787C8 (EtwpWriteBufferCompressed.c)
 *     EtwpFinalizeLogFileHeader @ 0x180078A04 (EtwpFinalizeLogFileHeader.c)
 *     EtwpWriteRemainingCompressedData @ 0x180078EC4 (EtwpWriteRemainingCompressedData.c)
 *     RtlCreateBootStatusDataFile @ 0x18010BE60 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x18010C090 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x18011617C (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteFile()
{
  __int64 result; // rax

  result = 8LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
