/*
 * XREFs of ZwDelayExecution @ 0x18015F4C0
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x1800537F0 (RtlpInitMuiCriticalSection.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180066CB8 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x180067A78 (EtwpFreeLoggerContext.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlDelayExecution @ 0x1800B9F30 (RtlDelayExecution.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CC2E4 (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     GetShipAssertBuffer @ 0x1800D301C (GetShipAssertBuffer.c)
 *     InitSecurityCookie @ 0x1800D9BE0 (InitSecurityCookie.c)
 *     InitSpecialMachineFrames @ 0x1800F87E0 (InitSpecialMachineFrames.c)
 *     RtlpLockHeapForClone @ 0x180145318 (RtlpLockHeapForClone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
