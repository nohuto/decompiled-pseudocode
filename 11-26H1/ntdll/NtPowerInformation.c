/*
 * XREFs of NtPowerInformation @ 0x18015FA10
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800CAA80 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlRestoreBootStatusDefaults @ 0x18010BBE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpSetClearExecutionRequiredRequest @ 0x18010E21C (RtlpSetClearExecutionRequiredRequest.c)
 *     RtlpSystemBootStatusRequest @ 0x1801102D8 (RtlpSystemBootStatusRequest.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1801116F0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlGetSystemBootStatus @ 0x180112BA0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x180114600 (RtlSetSystemBootStatus.c)
 *     RtlpRecordBootStatusData @ 0x18012176C (RtlpRecordBootStatusData.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x180141AE0 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x180141B20 (RtlUnlockBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 95;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
