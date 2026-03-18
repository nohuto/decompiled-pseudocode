/*
 * XREFs of NtOpenProcess @ 0x1408EFC10
 * Callers:
 *     DifNtOpenProcessWrapper @ 0x14067E7E0 (DifNtOpenProcessWrapper.c)
 *     PfpSourceGetPrefetchSupport @ 0x140A4E874 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     PsOpenProcess @ 0x1408EFC40 (PsOpenProcess.c)
 */

NTSTATUS __stdcall NtOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char v5; // [rsp+20h] [rbp-18h]
  char PreviousMode; // [rsp+28h] [rbp-10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = PreviousMode;
  return PsOpenProcess(ProcessHandle, DesiredAccess, ObjectAttributes, ClientId, v5, PreviousMode);
}
