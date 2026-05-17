/*
 * XREFs of NtSetInformationProcess @ 0x18015F2C0
 * Callers:
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 *     RtlAddGrowableFunctionTable @ 0x180081550 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180082300 (RtlDeleteGrowableFunctionTable.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F8458 (LdrpAllocateSchedulerSharedData.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800FDEA0 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x180106000 (RtlFreeUserFiberShadowStack.c)
 *     RtlCreateUserStack @ 0x1801100D0 (RtlCreateUserStack.c)
 *     WerpSetProcessFaultInformation @ 0x1801117A0 (WerpSetProcessFaultInformation.c)
 *     AVrfpEnableHandleVerifier @ 0x1801381E8 (AVrfpEnableHandleVerifier.c)
 *     RtlSetProcessIsCritical @ 0x1801478C0 (RtlSetProcessIsCritical.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationProcess()
{
  __int64 result; // rax

  result = 28LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
