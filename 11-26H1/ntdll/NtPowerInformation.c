/*
 * XREFs of NtPowerInformation @ 0x18015FB10
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800CD310 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlRestoreBootStatusDefaults @ 0x18010C090 (RtlRestoreBootStatusDefaults.c)
 *     RtlpSetClearExecutionRequiredRequest @ 0x18010E6CC (RtlpSetClearExecutionRequiredRequest.c)
 *     RtlpSystemBootStatusRequest @ 0x180110748 (RtlpSystemBootStatusRequest.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x180111B80 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlGetSystemBootStatus @ 0x1801130F0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x180114E10 (RtlSetSystemBootStatus.c)
 *     RtlpRecordBootStatusData @ 0x1801219D0 (RtlpRecordBootStatusData.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x180141BE0 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x180141C20 (RtlUnlockBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtPowerInformation()
{
  __int64 result; // rax

  result = 95LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
