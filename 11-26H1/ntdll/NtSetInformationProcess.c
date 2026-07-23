/*
 * XREFs of NtSetInformationProcess @ 0x18015F1C0
 * Callers:
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 *     RtlAddGrowableFunctionTable @ 0x1800788F0 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800796A0 (RtlDeleteGrowableFunctionTable.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F7C28 (LdrpAllocateSchedulerSharedData.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800FD5F0 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x180105A00 (RtlFreeUserFiberShadowStack.c)
 *     RtlCreateUserStack @ 0x18010FC60 (RtlCreateUserStack.c)
 *     WerpSetProcessFaultInformation @ 0x180111320 (WerpSetProcessFaultInformation.c)
 *     AVrfpEnableHandleVerifier @ 0x180137F58 (AVrfpEnableHandleVerifier.c)
 *     RtlSetProcessIsCritical @ 0x180147770 (RtlSetProcessIsCritical.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  NTSTATUS result; // eax

  result = 28;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
