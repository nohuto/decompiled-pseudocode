/*
 * XREFs of ZwSetInformationProcess @ 0x140728340
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x1406BE1E0 (DifZwSetInformationProcessWrapper.c)
 *     CmpInitializeRegistryProcess @ 0x14085D3B4 (CmpInitializeRegistryProcess.c)
 *     RtlCreateUserStack @ 0x1409E6B78 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140AB9B7C (RtlpWow64CreateUserStack.c)
 *     StartFirstUserProcess @ 0x140D0E818 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
