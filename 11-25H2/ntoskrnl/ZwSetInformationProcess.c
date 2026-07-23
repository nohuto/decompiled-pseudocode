/*
 * XREFs of ZwSetInformationProcess @ 0x14069B4C0
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x14063C970 (DifZwSetInformationProcessWrapper.c)
 *     CmpInitializeRegistryProcess @ 0x1407C8AB0 (CmpInitializeRegistryProcess.c)
 *     RtlCreateUserStack @ 0x1409EB5AC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A144C8 (RtlpWow64CreateUserStack.c)
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
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
