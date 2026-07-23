/*
 * XREFs of NtOpenProcess @ 0x1408F61D0
 * Callers:
 *     DifNtOpenProcessWrapper @ 0x1406823C0 (DifNtOpenProcessWrapper.c)
 *     PfpSourceGetPrefetchSupport @ 0x140A57B64 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
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
