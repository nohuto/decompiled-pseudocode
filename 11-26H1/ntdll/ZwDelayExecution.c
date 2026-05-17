/*
 * XREFs of ZwDelayExecution @ 0x18015F5C0
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x1800080C0 (RtlpInitMuiCriticalSection.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180078498 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 *     RtlDelayExecution @ 0x1800BCA00 (RtlDelayExecution.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CEB74 (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     GetShipAssertBuffer @ 0x1800D605C (GetShipAssertBuffer.c)
 *     InitSecurityCookie @ 0x1800DCC70 (InitSecurityCookie.c)
 *     InitSpecialMachineFrames @ 0x1800F9010 (InitSpecialMachineFrames.c)
 *     RtlpLockHeapForClone @ 0x180145468 (RtlpLockHeapForClone.c)
 * Callees:
 *     <none>
 */

__int64 ZwDelayExecution()
{
  __int64 result; // rax

  result = 52LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
